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
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9ef5c52f, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe25a1c80, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
	{ 0x981e093, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x3e6c7d2e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x6b9d3a52, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0xd4ad2496, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,unimac-mdio");
MODULE_ALIAS("of:N*T*Cbrcm,unimac-mdioC*");
