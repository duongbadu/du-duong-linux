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
	{ 0x49b3e9e6, __VMLINUX_SYMBOL_STR(v4l2_event_subdev_unsubscribe) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc4e4e2c9, __VMLINUX_SYMBOL_STR(media_entity_pads_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x8843e054, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xc51b7bf6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x6046cabc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xc291a39e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xe1e658c8, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4561d8e5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x726b9b69, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa28e0fe9, __VMLINUX_SYMBOL_STR(v4l2_subdev_notify_event) },
	{ 0x4103badb, __VMLINUX_SYMBOL_STR(v4l2_print_dv_timings) },
	{ 0x6f344bb9, __VMLINUX_SYMBOL_STR(v4l2_calc_aspect_ratio) },
	{ 0xbff6533d, __VMLINUX_SYMBOL_STR(cec_phys_addr_validate) },
	{ 0xd2f2eac1, __VMLINUX_SYMBOL_STR(cec_get_edid_phys_addr) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf7f33d69, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xe6ff411e, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x708b36f8, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1fca87ae, __VMLINUX_SYMBOL_STR(hdmi_infoframe_log) },
	{ 0x55d481c9, __VMLINUX_SYMBOL_STR(hdmi_infoframe_unpack) },
	{ 0xdf5fc9d7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subdev_subscribe_event) },
	{ 0xb072e271, __VMLINUX_SYMBOL_STR(v4l2_src_change_event_subdev_subscribe) },
	{ 0xf98d0f9d, __VMLINUX_SYMBOL_STR(v4l2_detect_gtf) },
	{ 0xae15a915, __VMLINUX_SYMBOL_STR(v4l2_detect_cvt) },
	{ 0xdfa5a008, __VMLINUX_SYMBOL_STR(v4l2_valid_dv_timings) },
	{ 0xb0891da2, __VMLINUX_SYMBOL_STR(v4l2_dv_timings_presets) },
	{ 0xf0e1988c, __VMLINUX_SYMBOL_STR(v4l2_find_dv_timings_cap) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x363ad524, __VMLINUX_SYMBOL_STR(v4l2_match_dv_timings) },
	{ 0x5491c182, __VMLINUX_SYMBOL_STR(v4l2_enum_dv_timings_cap) },
	{ 0x932b241f, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7fb7a600, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,media,v4l2-common,v4l2-dv-timings,cec-edid";

MODULE_ALIAS("i2c:adv7842");
