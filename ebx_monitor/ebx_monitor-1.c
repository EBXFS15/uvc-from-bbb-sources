/* --- Includes --- */
#include <linux/init.h>    /* Funktionseigenschaften */
#include <linux/module.h>  /* Modulinfrastruktur */
#include <linux/kernel.h>  /* Kernel-Library */
#include <linux/cdev.h>    /* character devices */
#include <linux/fs.h>      /* character devices */
#include <linux/slab.h>    /* kzalloc */
#include <asm/uaccess.h>   /* copy_from_user */
#include <asm/current.h>   /* current is #define current (get_current())) */
#include <linux/sched.h>   /* struct task_struct */
#include <linux/miscdevice.h> /* struct miscdevice */

#include <linux/device.h>

#include <linux/ktime.h>
#include <linux/time.h>
#include <linux/timekeeping.h>

#include <asm/atomic.h>


/* --- Macros and Const definition --- */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michel Grundmann");
MODULE_DESCRIPTION("EBX Monitor");

#define CHARDEV_NAME "ebx_monitor"

/* --- Type definition --- */


/* --- Variable definition --- */

static int ebx_monitor_open(struct inode* inodeP, struct file* fileP);
static int ebx_monitor_release(struct inode* inodeP, struct file* fileP);

static struct file_operations cdev_fops = {
  .owner   = THIS_MODULE,
  .open    = ebx_monitor_open,
  .release = ebx_monitor_release,
  .read    = NULL,
  .write   = NULL,
  .llseek  = no_llseek
};

static struct miscdevice ebx_monitor_misc = {
  .minor = MISC_DYNAMIC_MINOR,
  .name  = CHARDEV_NAME,
  .fops  = &cdev_fops,
  .mode  = 00444
};

static ktime_t prevFrame_ktime;
static ktime_t newFrame_ktime;
static ktime_t frame_ktime;

static atomic_t avg_time  = ATOMIC_INIT(0);
#if 0
static atomic_t min_time  = ATOMIC_INIT(INT_MAX);
static atomic_t max_time  = ATOMIC_INIT(0);
#endif


/* --- Function Prototypes --- */
static int ebx_monitor_createDeviceAttributeFiles(struct device* inDeviceP);


/* --- GLOBAL Funtions --- */
void
__exit ebx_monitor_exit(void)
{
  printk(KERN_INFO CHARDEV_NAME": Cleanup and exit\n");

  misc_deregister(&ebx_monitor_misc);
} /* ebx_monitor_exit */


int
__init ebx_monitor_init(void)
{
  int result = 0;

  printk(KERN_INFO CHARDEV_NAME": Initialize\n");


  if ((result = misc_register(&ebx_monitor_misc))) {
    printk(KERN_WARNING CHARDEV_NAME": error registering!\n");
    goto fail;
  }

  /* --- create device attribute files --- */
  result = ebx_monitor_createDeviceAttributeFiles(ebx_monitor_misc.this_device);

  return result;

 fail:
  return result;
} /* ebx_monitor_init */


void
ebx_monitor_gotnewframe(const struct timeval* inTimeOfNewFrameP)
{
  newFrame_ktime = timeval_to_ktime(*inTimeOfNewFrameP);
  if (prevFrame_ktime.tv64 != 0) {
    ktime_t avg = ktime_sub(newFrame_ktime, prevFrame_ktime);
    atomic_set(&avg_time, (int)(avg.tv64));
  }

  prevFrame_ktime = newFrame_ktime;
} /* ebx_monitor_gotnewframe */
EXPORT_SYMBOL_GPL(ebx_monitor_gotnewframe);


void
ebx_monitor_gotframe(void)
{
 frame_ktime = ktime_get();
} /* ebx_monitor_gotframe */
EXPORT_SYMBOL_GPL(ebx_monitor_gotframe);


static int averageFrameTime = 0;
ssize_t
ebx_monitor_averageFrameTime_show(struct device *dev, struct device_attribute *attr, char *buf)
{
  averageFrameTime = (int)(atomic_read(&avg_time));
  snprintf(buf, 256, "Average frame time = %ins\n", averageFrameTime);
  return (strlen(buf)+1);
} /* ebx_monitor_averageTime_show */
DEVICE_ATTR(averageFrameTime, 0444, ebx_monitor_averageFrameTime_show, NULL);



/* --- STATIC Funtions --- */
static int
ebx_monitor_open(struct inode* inodeP, struct file* fileP)
{
  (void)nonseekable_open(inodeP, fileP);

  return 0;
} /* ebx_monitor_open */


static int
ebx_monitor_release(struct inode* inodeP, struct file* fileP)
{
  (void)inodeP;
  (void)fileP;

  return 0;
} /* ebx_monitor_release */


static int
ebx_monitor_createDeviceAttributeFiles(struct device* inDeviceP)
{
  int result = 0;

  result = device_create_file(inDeviceP, &dev_attr_averageFrameTime);
  printk(KERN_INFO "chardev: result of device_create_file: %d\n", result);
  if (result != 0) {
    printk(KERN_WARNING "chardev: error in device_create_file\n");
    goto fail;
   }

  return result;

 fail:
  return result;
} /* ebx_monitor_createDeviceAttributeFiles */



module_init(ebx_monitor_init);
module_exit(ebx_monitor_exit);
