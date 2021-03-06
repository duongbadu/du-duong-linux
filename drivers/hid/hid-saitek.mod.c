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
	{ 0x2269d273, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x7622b07b, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9cd4c781, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x365e6a87, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xad37e919, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid";

MODULE_ALIAS("hid:b0003g*v000006A3p00000621");
MODULE_ALIAS("hid:b0003g*v00000738p00001705");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CCB");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CD7");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CFA");
MODULE_ALIAS("hid:b0003g*v00000738p00001709");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CD0");
