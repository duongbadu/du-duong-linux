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
	{ 0xbbd381c8, __VMLINUX_SYMBOL_STR(tsc200x_pm_ops) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x18437c40, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0x54b52ff2, __VMLINUX_SYMBOL_STR(tsc200x_probe) },
	{ 0x7617ab1c, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x902e368, __VMLINUX_SYMBOL_STR(tsc200x_regmap_config) },
	{ 0x6cee4987, __VMLINUX_SYMBOL_STR(tsc200x_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tsc200x-core";

MODULE_ALIAS("i2c:tsc2004");
