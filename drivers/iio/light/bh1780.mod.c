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
	{ 0x25f39632, __VMLINUX_SYMBOL_STR(pm_runtime_force_resume) },
	{ 0x810849e9, __VMLINUX_SYMBOL_STR(pm_runtime_force_suspend) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8384062a, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd38b2842, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xbce9794, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xa08f28e8, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xc6d935da, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x16b27f55, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xbecdd5b1, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x794de116, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xb3824df1, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd97ddf14, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:bh1780");
