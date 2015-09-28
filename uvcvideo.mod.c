#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x29f3b7ed, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6dda97e1, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x551bc8f3, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x4be85a03, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x64827b83, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x71142ada, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xc135701, __VMLINUX_SYMBOL_STR(v4l2_event_queue_fh) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4ad6d69, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x9f551173, __VMLINUX_SYMBOL_STR(usb_debug_root) },
	{ 0xe626c6f7, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x74c077d9, __VMLINUX_SYMBOL_STR(video_usercopy) },
	{ 0xb829011f, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x9efdc6be, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xffeaec5c, __VMLINUX_SYMBOL_STR(vb2_create_bufs) },
	{ 0xcd4e22da, __VMLINUX_SYMBOL_STR(v4l2_event_dequeue) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb9a74a07, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x7d3b7e4d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe89ef51e, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd6f764fb, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x8735b9b9, __VMLINUX_SYMBOL_STR(usb_enable_autosuspend) },
	{ 0xea000114, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x1b5c0864, __VMLINUX_SYMBOL_STR(v4l2_ctrl_merge) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5f2e4b48, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xb9c270e9, __VMLINUX_SYMBOL_STR(media_entity_cleanup) },
	{ 0x80f33545, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xaabd841, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8787f0ba, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x5ab9165a, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x11c879c5, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x97ea7729, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x335e2ef1, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb77b0159, __VMLINUX_SYMBOL_STR(v4l2_prio_init) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8022e247, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x73a3091e, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x3f0347d8, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x16e3e84e, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x11bd219d, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xc7f04e18, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x452859c6, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e793fb9, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x2d59ff15, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xbb03b3ab, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x6ec51023, __VMLINUX_SYMBOL_STR(media_entity_init) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xbc5671dc, __VMLINUX_SYMBOL_STR(v4l_printk_ioctl) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x16244fe5, __VMLINUX_SYMBOL_STR(v4l2_prio_check) },
	{ 0x9f1aedb8, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4b77c88d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_replace) },
	{ 0x8b0300fa, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0x6f8f536a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xf5c7a029, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1f71be2e, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xbaedea5e, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x9f3375b3, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xf811a4fa, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0xa538afa6, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0xced5e872, __VMLINUX_SYMBOL_STR(v4l2_device_register_subdev) },
	{ 0x2bbc5bbe, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0x979b36ce, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf7c6746c, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x5f8db6bf, __VMLINUX_SYMBOL_STR(v4l2_subdev_init) },
	{ 0x6f86d34f, __VMLINUX_SYMBOL_STR(__media_device_register) },
	{ 0x30b79b2e, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2689f003, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x3bdd0f94, __VMLINUX_SYMBOL_STR(v4l2_prio_change) },
	{ 0x21f932fc, __VMLINUX_SYMBOL_STR(usb_match_one_id) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x40d37cc2, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xaa099272, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x1111e6fc, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8106095a, __VMLINUX_SYMBOL_STR(v4l2_prio_max) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1621a46b, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x86c49727, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0x68d98d3, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x34a322e9, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0xe3bf2704, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x5fd91e5c, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5745ea32, __VMLINUX_SYMBOL_STR(media_entity_create_link) },
	{ 0x32d47eef, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x849f0bea, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1987d1f, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0xc1e80558, __VMLINUX_SYMBOL_STR(media_device_unregister) },
	{ 0xd41998f, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x578a142, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x714757ff, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xeb9038a2, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0xa6956a9f, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xf429e0f0, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videobuf2-vmalloc";

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");

MODULE_INFO(srcversion, "2D7B97B6D02E2FBAB0FBB3D");
