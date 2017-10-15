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
	{ 0x9ecc8952, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x6f495975, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x953ef49c, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0xcb07f65, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0x4e6e5e82, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x93f4e8b0, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xc754fa7c, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x3e6c7d2e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("mdio:0000000000000110000111000101????");
MODULE_ALIAS("mdio:00011100000001000000000000010001");
