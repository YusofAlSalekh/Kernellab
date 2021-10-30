// SPDX-License-Identifier: GPL-2.0
/* hello.c */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
static int __init hello_init(void)
{
	pr_alert("Hello MAI.\n");
	return 0;
}
static void __exit hello_exit(void)
{
	pr_alert("Bye MAI\n");
}
module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("lab1");
MODULE_AUTHOR("Yusof");

