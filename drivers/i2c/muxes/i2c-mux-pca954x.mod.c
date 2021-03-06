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
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb8bcb02b, __VMLINUX_SYMBOL_STR(i2c_mux_add_adapter) },
	{ 0xd9f46587, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x7becc719, __VMLINUX_SYMBOL_STR(i2c_mux_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9250ef9e, __VMLINUX_SYMBOL_STR(__i2c_transfer) },
	{ 0x660c7247, __VMLINUX_SYMBOL_STR(i2c_mux_del_adapters) },
	{ 0x18437c40, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux";

MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
