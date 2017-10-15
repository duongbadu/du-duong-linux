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
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5b68edbc, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0x1739ff99, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu_items) },
	{ 0x6046cabc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xc291a39e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xe1e658c8, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x62a749b0, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xd9f46587, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x4561d8e5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xc983eb33, __VMLINUX_SYMBOL_STR(media_device_unregister_entity) },
	{ 0x68c3e789, __VMLINUX_SYMBOL_STR(media_create_pad_link) },
	{ 0x7aadcef4, __VMLINUX_SYMBOL_STR(media_device_register_entity) },
	{ 0xc4e4e2c9, __VMLINUX_SYMBOL_STR(media_entity_pads_init) },
	{ 0x16b27f55, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xd97ddf14, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xf7f33d69, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x6f1e4930, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common,media";

MODULE_ALIAS("i2c:tvp5150");
