KERNEL_HEADERS=/lib/modules/$(shell uname -r)/build

obj-m := hi.o

go:
	make -C $(KERNEL_HEADERS) M=$(PWD) modules