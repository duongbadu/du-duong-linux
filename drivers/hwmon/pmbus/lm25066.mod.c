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
	{ 0x4f842bfa, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xbe3747ad, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0x16b27f55, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfd01aec5, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0xbf30d04c, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0x4d0d897c, __VMLINUX_SYMBOL_STR(pmbus_write_byte) },
	{ 0xa2fc0d80, __VMLINUX_SYMBOL_STR(pmbus_clear_cache) },
	{ 0xfaadf636, __VMLINUX_SYMBOL_STR(pmbus_write_word_data) },
	{ 0x84b1cc22, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:lm25056");
MODULE_ALIAS("i2c:lm25063");
MODULE_ALIAS("i2c:lm25066");
MODULE_ALIAS("i2c:lm5064");
MODULE_ALIAS("i2c:lm5066");
