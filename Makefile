obj-m += hello.o
all:
	make -C /lib/modules/${shell uname -r)/build M=$(PWD) moduels
clean:
	make -C /lib/moudles/$(shell uname -r)/build M=$(PWD) clean