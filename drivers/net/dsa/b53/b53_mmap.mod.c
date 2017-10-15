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
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf065f629, __VMLINUX_SYMBOL_STR(ioread16be) },
	{ 0xfdb9b629, __VMLINUX_SYMBOL_STR(ioread32be) },
	{ 0x69a0ca7d, __VMLINUX_SYMBOL_STR(iowrite16be) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6acb973d, __VMLINUX_SYMBOL_STR(iowrite32be) },
	{ 0xa03e0aee, __VMLINUX_SYMBOL_STR(b53_switch_register) },
	{ 0x7ae4ca30, __VMLINUX_SYMBOL_STR(b53_switch_alloc) },
	{ 0x6371bcbf, __VMLINUX_SYMBOL_STR(dsa_unregister_switch) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b53_common,dsa_core";

MODULE_ALIAS("of:N*T*Cbrcm,bcm3384-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm3384-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6328-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6328-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6368-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6368-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm63xx-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm63xx-switchC*");
