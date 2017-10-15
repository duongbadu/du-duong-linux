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
	{ 0x4e6e5e82, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x93f4e8b0, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x90485628, __VMLINUX_SYMBOL_STR(genphy_update_link) },
	{ 0xd21c04b1, __VMLINUX_SYMBOL_STR(genphy_restart_aneg) },
	{ 0xa4db4bb1, __VMLINUX_SYMBOL_STR(genphy_setup_forced) },
	{ 0x6f495975, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x953ef49c, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0xcb07f65, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0xc754fa7c, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x3e6c7d2e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("mdio:0000000101000001000011000110????");
MODULE_ALIAS("mdio:0000000101000001000011001001????");
MODULE_ALIAS("mdio:0000000101000001000011001100????");
MODULE_ALIAS("mdio:0000000101000001000011100001????");
MODULE_ALIAS("mdio:0000000101000001000011001011????");
MODULE_ALIAS("mdio:0000000101000001000011001101????");
MODULE_ALIAS("mdio:0000000101000001000011100101????");
MODULE_ALIAS("mdio:0000000101000001000011100011????");
MODULE_ALIAS("mdio:0000000101000001000011101001????");
MODULE_ALIAS("mdio:0000000101000001000011100100????");
MODULE_ALIAS("mdio:0000000101000001000011011101????");
MODULE_ALIAS("mdio:0000000101000001000011101011????");
MODULE_ALIAS("mdio:0000000101000001000011100110????");
