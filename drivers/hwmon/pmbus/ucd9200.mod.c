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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbe3747ad, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0x6bf52bf2, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xd97ddf14, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
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

MODULE_ALIAS("i2c:ucd9200");
MODULE_ALIAS("i2c:ucd9220");
MODULE_ALIAS("i2c:ucd9222");
MODULE_ALIAS("i2c:ucd9224");
MODULE_ALIAS("i2c:ucd9240");
MODULE_ALIAS("i2c:ucd9244");
MODULE_ALIAS("i2c:ucd9246");
MODULE_ALIAS("i2c:ucd9248");
