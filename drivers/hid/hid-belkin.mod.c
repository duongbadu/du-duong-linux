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
	{ 0x9cd4c781, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x365e6a87, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid";

MODULE_ALIAS("hid:b0003g*v0000050Dp00003201");
MODULE_ALIAS("hid:b0003g*v00001020p00000006");
