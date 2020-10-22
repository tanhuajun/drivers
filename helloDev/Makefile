ifneq ($(KERNELRELEASE),)
obj-m := helloDev.o
else
PWD := $(shell pwd)
#KDIR := /home/thj/my_linux/linux-4.9.240/linux-4.9.240
#KDIR := /lib/modules/4.9.240
KDIR := /lib/modules/`uname -r`/build

all:
	make -C $(KDIR) M=$(PWD)
clean:
	rm -rf *.o *.ko *.mod.c *.symvers *.c~ *~ *.order
endif
