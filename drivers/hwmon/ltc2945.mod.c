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
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xbe38e7e5, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xbc92037, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb9de835, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0xebbc8f27, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x7617ab1c, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb86e4a30, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xba988334, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ltc2945");
