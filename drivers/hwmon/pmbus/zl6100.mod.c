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
	{ 0x354a9f40, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x4f842bfa, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xbf30d04c, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0xfaadf636, __VMLINUX_SYMBOL_STR(pmbus_write_word_data) },
	{ 0xa2fc0d80, __VMLINUX_SYMBOL_STR(pmbus_clear_cache) },
	{ 0xfd01aec5, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0x4d0d897c, __VMLINUX_SYMBOL_STR(pmbus_write_byte) },
	{ 0x84b1cc22, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xbe3747ad, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0xd38b2842, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6bf52bf2, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xaf015dbf, __VMLINUX_SYMBOL_STR(i2c_smbus_read_block_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:bmr450");
MODULE_ALIAS("i2c:bmr451");
MODULE_ALIAS("i2c:bmr462");
MODULE_ALIAS("i2c:bmr463");
MODULE_ALIAS("i2c:bmr464");
MODULE_ALIAS("i2c:zl2004");
MODULE_ALIAS("i2c:zl2005");
MODULE_ALIAS("i2c:zl2006");
MODULE_ALIAS("i2c:zl2008");
MODULE_ALIAS("i2c:zl2105");
MODULE_ALIAS("i2c:zl2106");
MODULE_ALIAS("i2c:zl6100");
MODULE_ALIAS("i2c:zl6105");
MODULE_ALIAS("i2c:zl9101");
MODULE_ALIAS("i2c:zl9117");
