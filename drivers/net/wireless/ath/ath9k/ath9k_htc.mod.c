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
	{ 0x98e15eb9, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbb96dd1b, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xbd8dd8b, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x8cc7e379, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7b1039da, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0xbf623fc3, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd163ff0a, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xc89823fb, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0xe723bffd, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x76657b8f, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x15b8846a, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x847f9937, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x1f5a5726, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0x981d2861, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x8c5e8a72, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xcf9f3679, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xe8209f67, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0xc5b1b91d, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xdf368edb, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x7b12ec7, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x73046749, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x4afd1819, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf230ac21, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x1acd60de, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x23495edc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf57ec4a9, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x8828c445, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0xda23e6e6, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0xc812f1e6, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x8238a346, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x80a8f8b2, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x317210a6, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc8c37562, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa726fd9d, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x257fa436, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x8a0b12c6, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x8e4ada5f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x1513a3ea, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x55dfc932, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3be3590d, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xd6f2c69c, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe27a685e, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x1930a4e1, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xe180d954, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x52d864d4, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa5e4f5b7, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xb502f85c, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xe8606ebe, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x9c49a102, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x969da51, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xc206a14, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x643db1a5, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x36988013, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xeb3a7023, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0xa08a521a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x95b679e4, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe1a54d16, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xb2cbccd9, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xda0a71d4, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x5eb26491, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x8949e747, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xe3bd6d7, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x92973dea, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xe16d23c9, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x10e99158, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xb173780f, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x14f9e09b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd26e0670, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x5ed4ccd0, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0xa6626e2, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x617ce82, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x4395953e, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x31237799, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x644fbbf8, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xef8cf622, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x3928a1f7, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbd559fbd, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xed1a0b26, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xcc34bdc1, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x7cb91f67, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x200db7d5, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_free) },
	{ 0x591b281e, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x362c0133, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0xe94994da, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa77ddcb7, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2511a07e, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x870d2f4e, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x949f85e6, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xf8d41490, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x179052f0, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x80f70f11, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xb1e070ee, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x184e901b, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xd9f9ac07, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd45b5562, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xde3c465e, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x2fa7461b, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xc4641cbc, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_request_out) },
	{ 0xd772c3ea, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x45731ffb, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1a19bdd0, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x59fc95fc, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x6b7056d2, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xb605a2ea, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x72459d01, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x96e0f560, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x4b8e04f5, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5b573399, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xc2e0ec20, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xeda89b4d, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x31cc1a58, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x33076644, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,led-class,ath,cfg80211,usbcore";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");
