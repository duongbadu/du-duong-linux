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
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe942b025, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x668e03a0, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x8c39a1ac, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x7cebd20f, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xad71adbf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0xc51b7bf6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x8843e054, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x6046cabc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xc291a39e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe1e658c8, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xd9f46587, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xf7f33d69, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xe6ff411e, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x6d8a95e0, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x25800911, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xe0b74ff0, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x85f99891, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "93B0B6BCA2A058C08BAABDA");
