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
	{ 0x414da699, __VMLINUX_SYMBOL_STR(wl12xx_cmd_build_probe_req) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe43d5e0d, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_nvs) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xae52017a, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x5a73b696, __VMLINUX_SYMBOL_STR(wl1271_acx_init_mem_config) },
	{ 0xc3c04dfc, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd421145c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xcb98d90f, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0xade83207, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0xc2e32f7d, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xd2aebda5, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x74242ba0, __VMLINUX_SYMBOL_STR(wl1271_acx_pm_config) },
	{ 0x25d65a1f, __VMLINUX_SYMBOL_STR(wlcore_calc_packet_alignment) },
	{ 0x44a8922f, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa3423545, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0xbcf55e8d, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xefc4c44c, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa23d6e7a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa41c5b1d, __VMLINUX_SYMBOL_STR(wl1271_acx_set_ht_capabilities) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb5d8073a, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x265f2715, __VMLINUX_SYMBOL_STR(wl1271_cmd_data_path) },
	{ 0x20219888, __VMLINUX_SYMBOL_STR(wl12xx_acx_mem_cfg) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xc6410b16, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x2e7a61ff, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x402f3520, __VMLINUX_SYMBOL_STR(wl1271_acx_sleep_auth) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71fea6dd, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x8d096b6, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x8cb53e3b, __VMLINUX_SYMBOL_STR(wl1271_cmd_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x18bc1272, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x5eb26491, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x63ce6522, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1b9bd0d6, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x9a855f0a, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x5f97e517, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xdd77743a, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0xd6351eeb, __VMLINUX_SYMBOL_STR(wlcore_event_soft_gemini_sense) },
	{ 0x3d711d4e, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd42156ce, __VMLINUX_SYMBOL_STR(wlcore_tx_complete) },
	{ 0xb805a0fa, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdedd3d50, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x556048a6, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0x2f795530, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x3138176f, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xc14f7654, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0xafb5e53b, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x40322d06, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0xfe8b3e17, __VMLINUX_SYMBOL_STR(wl1271_tx_min_rate_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211";

MODULE_ALIAS("platform:wl12xx");
