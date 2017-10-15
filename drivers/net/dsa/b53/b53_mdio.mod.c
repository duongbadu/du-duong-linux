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
	{ 0xc775e675, __VMLINUX_SYMBOL_STR(mdio_driver_unregister) },
	{ 0xd977b5d0, __VMLINUX_SYMBOL_STR(mdio_driver_register) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x6e57bb45, __VMLINUX_SYMBOL_STR(mdiobus_read_nested) },
	{ 0x379787c3, __VMLINUX_SYMBOL_STR(mdiobus_write_nested) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa03e0aee, __VMLINUX_SYMBOL_STR(b53_switch_register) },
	{ 0x7ae4ca30, __VMLINUX_SYMBOL_STR(b53_switch_alloc) },
	{ 0x3e6c7d2e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x6371bcbf, __VMLINUX_SYMBOL_STR(dsa_unregister_switch) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy,b53_common,dsa_core";

MODULE_ALIAS("of:N*T*Cbrcm,bcm5325");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5325C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53115");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53115C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53125");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53125C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53128");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53128C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5365");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5365C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5395");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5395C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5397");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5397C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5398");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5398C*");
