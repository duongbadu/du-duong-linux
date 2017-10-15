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
	{ 0xaeaf9878, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_wakeup) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xae52017a, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xc3c04dfc, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd421145c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xcb98d90f, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xade83207, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0xc2e32f7d, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xd2aebda5, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x25c6b7b2, __VMLINUX_SYMBOL_STR(ieee80211_radar_detected) },
	{ 0x63ace313, __VMLINUX_SYMBOL_STR(wlcore_event_fw_logger) },
	{ 0x44a8922f, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xa3423545, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0xbcf55e8d, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xefc4c44c, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa23d6e7a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x77092dcc, __VMLINUX_SYMBOL_STR(wlcore_get_native_channel_type) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xb5d8073a, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xcaf602bd, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xc6410b16, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x2e7a61ff, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71fea6dd, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x8d096b6, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbeda35ee, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_sleep) },
	{ 0x900dfe75, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x18bc1272, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x5eb26491, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x71adbd7b, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x10e99158, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x8a6af65c, __VMLINUX_SYMBOL_STR(kstrtoul_from_user) },
	{ 0x63ce6522, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0xde4b9034, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1b9bd0d6, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9a855f0a, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0xed1a0b26, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x369e1115, __VMLINUX_SYMBOL_STR(kstrtou8_from_user) },
	{ 0x5f97e517, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0xc4dd3db9, __VMLINUX_SYMBOL_STR(wl1271_free_tx_id) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c66a628, __VMLINUX_SYMBOL_STR(ieee80211_stop_rx_ba_session) },
	{ 0xdd77743a, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0xf8d41490, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x3d711d4e, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb805a0fa, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdedd3d50, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x556048a6, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x2f795530, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x3138176f, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xc14f7654, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xafb5e53b, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf9fa3629, __VMLINUX_SYMBOL_STR(wl12xx_is_dummy_packet) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x40322d06, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x54957622, __VMLINUX_SYMBOL_STR(ieee80211_connection_loss) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211,cfg80211";

MODULE_ALIAS("platform:wl18xx");
