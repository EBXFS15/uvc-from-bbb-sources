ARCH:=arm
CROSS_COMPILE:=arm-linux-
ifneq ($(KERNELRELEASE),)
obj-m := ebx_monitor-1.o


else
#KDIR ?= /lib/modules/$(shell uname -r)/build
KDIR := /opt/embedded/bbb/rootfs/lib/modules/3.18.5+/build
#OR /opt/embedded/bbb/kernel/linux-dev-am33x-v3.18
PWD  := $(shell pwd)

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

modules:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) clean

endif

