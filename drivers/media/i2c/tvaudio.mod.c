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
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4561d8e5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xad71adbf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0x6046cabc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xc291a39e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe1e658c8, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x19ce2683, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xe0b74ff0, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x78b41034, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_log_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x85f99891, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x269eb7b0, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xf7f33d69, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xe6ff411e, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x28d5e754, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("i2c:tvaudio");
