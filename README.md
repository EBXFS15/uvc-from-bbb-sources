# uvcledtoggler

This is a first test to modify a little bit the uvc driver.

Just for funn....


... copy the files to the following folder:
/opt/embedded/bbb/kernel/linux-dev-am33x-v3.18/drivers/media/usb/uvc


... then run make at the following location:
/opt/embedded/bbb/kernel/linux-dev-am33x-v3.18/make


... to save time and build only the specific driver use the following command:
make SUBDIRS=drivers/media/usb/uvc modules

have fun ;-)
