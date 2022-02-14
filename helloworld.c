//helloworld.c
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("LEEHANDS");
MODULE_DESCRIPTION("module programming - hello world module ");

static int __init module_begin(void){
	printk("Hello, linux kernel module. \n");
	return 0;
}

static void __exit module_end(void){
	printk("Good Bye - hello world module. \n");
}

module_init(module_begin);
module_exit(module_end);
