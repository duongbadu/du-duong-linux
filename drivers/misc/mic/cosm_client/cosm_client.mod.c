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
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x40b6428d, __VMLINUX_SYMBOL_STR(scif_close) },
	{ 0x14984f7d, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0xd64749a0, __VMLINUX_SYMBOL_STR(scif_send) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x2f7250f5, __VMLINUX_SYMBOL_STR(scif_open) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28d5e754, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xa02dfad1, __VMLINUX_SYMBOL_STR(scif_client_register) },
	{ 0xabe00f6, __VMLINUX_SYMBOL_STR(scif_recv) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7c7dba79, __VMLINUX_SYMBOL_STR(scif_client_unregister) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x56256e8a, __VMLINUX_SYMBOL_STR(orderly_poweroff) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x7a6cdedc, __VMLINUX_SYMBOL_STR(do_settimeofday64) },
	{ 0xb4701297, __VMLINUX_SYMBOL_STR(scif_connect) },
	{ 0xbee5d0f2, __VMLINUX_SYMBOL_STR(scif_poll) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scif";

