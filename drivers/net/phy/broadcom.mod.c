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
	{ 0x32c49edd, __VMLINUX_SYMBOL_STR(bcm_phy_config_intr) },
	{ 0x4e715c6d, __VMLINUX_SYMBOL_STR(bcm_phy_ack_intr) },
	{ 0x4e6e5e82, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x93f4e8b0, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0x40530d85, __VMLINUX_SYMBOL_STR(bcm_phy_read_exp) },
	{ 0xf782f5d8, __VMLINUX_SYMBOL_STR(bcm_phy_write_exp) },
	{ 0x2a822ea, __VMLINUX_SYMBOL_STR(bcm_phy_write_shadow) },
	{ 0x70935b6b, __VMLINUX_SYMBOL_STR(bcm_phy_read_shadow) },
	{ 0x9ecc8952, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x6f495975, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0xc754fa7c, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x3e6c7d2e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcm-phy-lib,libphy";

MODULE_ALIAS("mdio:0000000000100000011000000111????");
MODULE_ALIAS("mdio:0000000000100000011000001110????");
MODULE_ALIAS("mdio:0000000000100000011000001100????");
MODULE_ALIAS("mdio:0000001101100010010111010001????");
MODULE_ALIAS("mdio:0000000000100000011000001011????");
MODULE_ALIAS("mdio:0000000101000011101111001010????");
MODULE_ALIAS("mdio:0000000101000011101111001011????");
MODULE_ALIAS("mdio:0000000101000011101111010110????");
MODULE_ALIAS("mdio:0000000101000011101111010111????");
MODULE_ALIAS("mdio:0000001101100010010111011001????");
MODULE_ALIAS("mdio:0000000101000011101111000111????");
MODULE_ALIAS("mdio:0000000101000011101111000011????");
