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
	{ 0xa4db4bb1, __VMLINUX_SYMBOL_STR(genphy_setup_forced) },
	{ 0x6f495975, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0xc7a4ceb6, __VMLINUX_SYMBOL_STR(genphy_config_init) },
	{ 0x3e6c7d2e, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xc754fa7c, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("mdio:????????????1111110001100010????");
MODULE_ALIAS("mdio:????????????11111100011011??????");
MODULE_ALIAS("mdio:????????????0111000001100111????");
MODULE_ALIAS("mdio:????????????0111000001001010????");
MODULE_ALIAS("mdio:????????????0111000001100110????");
MODULE_ALIAS("mdio:????????????1111110001010101????");
MODULE_ALIAS("mdio:????????????1111110001001011????");
