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
	{ 0xd7286d17, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x4dd5e461, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xb9572f1f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xc495fc55, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x18bc1272, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xcaf602bd, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x5f0c05b7, __VMLINUX_SYMBOL_STR(si476x_core_cmd_agc_status) },
	{ 0x8136d6c3, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_acf_status) },
	{ 0x617253af, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_phase_div_status) },
	{ 0xae4c850f, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_rds_blockcount) },
	{ 0xf0fc183f, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_rsq_status) },
	{ 0xaf799e4, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_seek_start) },
	{ 0xf4a3afdc, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_tune_freq) },
	{ 0x5c78b67b, __VMLINUX_SYMBOL_STR(si476x_core_cmd_am_acf_status) },
	{ 0x5fd51885, __VMLINUX_SYMBOL_STR(si476x_core_cmd_am_rsq_status) },
	{ 0x51401f5f, __VMLINUX_SYMBOL_STR(si476x_core_cmd_am_seek_start) },
	{ 0x2568a756, __VMLINUX_SYMBOL_STR(si476x_core_cmd_am_tune_freq) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4561d8e5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xf721c45b, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xba988334, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xa19328ca, __VMLINUX_SYMBOL_STR(si476x_core_start) },
	{ 0x48555b04, __VMLINUX_SYMBOL_STR(si476x_core_stop) },
	{ 0xf52db860, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_phase_diversity) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x7327aa32, __VMLINUX_SYMBOL_STR(regcache_sync_region) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xa23d6e7a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xd421145c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x41d1998a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x6046cabc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xc51b7bf6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xc291a39e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xc84853b7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x9f1cadbc, __VMLINUX_SYMBOL_STR(v4l2_device_set_name) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8843e054, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x4578f528, __VMLINUX_SYMBOL_STR(__kfifo_to_user) },
	{ 0x68656b9e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x8f8a2b78, __VMLINUX_SYMBOL_STR(si476x_core_set_power_state) },
	{ 0x66cac49f, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x8937d340, __VMLINUX_SYMBOL_STR(v4l2_fh_is_singular) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf64465a4, __VMLINUX_SYMBOL_STR(si476x_core_is_a_primary_tuner) },
	{ 0x847342dd, __VMLINUX_SYMBOL_STR(si476x_core_has_am) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x33d9dbf2, __VMLINUX_SYMBOL_STR(si476x_core_is_a_secondary_tuner) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcb7a3b5a, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x86837599, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0xb86e4a30, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x4e59926a, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_rds_status) },
	{ 0xebbc8f27, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xa66a0507, __VMLINUX_SYMBOL_STR(si476x_core_is_in_am_receiver_mode) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1d4e46de, __VMLINUX_SYMBOL_STR(si476x_core_has_diversity) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e68d7df, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xeaf3e8de, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xe946559d, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xf7f33d69, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,si476x-core";

