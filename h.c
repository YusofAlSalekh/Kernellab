// SPDX-License-Identifier: GPL-2.0
/* hello_param.c */
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");
static char *whom = "MAI";
static char *feeling = "satisfied";
module_param(whom, charp, 0644);
MODULE_PARM_DESC(whom, "Recipient of the hello message");
static int howmany = 1;
module_param(howmany, int, 0644);
MODULE_PARM_DESC(howmany, "Number of greetings");
static int __init hello_init(void)
{
int i;
for (i = 0; i < howmany; i++)
pr_alert("(%d) Hello,%s %s\n", i, whom, feeling);
return 0;
}
static void __exit hello_exit(void)
{
pr_alert("Goodbye, %s\n", whom);
}
module_init(hello_init);
module_exit(hello_exit);

