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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x58068412, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x5f007e8c, __VMLINUX_SYMBOL_STR(devm_power_supply_register) },
	{ 0xd9f46587, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8b2cf1df, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe52d5027, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0xd38b2842, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x4c7489d9, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdbb94e6b, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,bq24735");
MODULE_ALIAS("of:N*T*Cti,bq24735C*");
MODULE_ALIAS("i2c:bq24735-charger");
