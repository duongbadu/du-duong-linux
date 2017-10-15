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
	{ 0x740dd136, __VMLINUX_SYMBOL_STR(rtl_cam_delete_one_entry) },
	{ 0xe82e9cc1, __VMLINUX_SYMBOL_STR(rtl_fw_cb) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc84ec9c3, __VMLINUX_SYMBOL_STR(rtl_pci_probe) },
	{ 0xbcd58f91, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0xcadbc45d, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_rfpath_switch) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x43e9f648, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_read) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe2d1d632, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_txpower_level) },
	{ 0x3deabe13, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_rsvdpagepkt) },
	{ 0x39848895, __VMLINUX_SYMBOL_STR(rtl92c_dm_check_txpower_tracking) },
	{ 0xa1738009, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0xcccf0b78, __VMLINUX_SYMBOL_STR(rtl92c_dm_watchdog) },
	{ 0x800b9e73, __VMLINUX_SYMBOL_STR(_rtl92c_phy_init_bb_rf_register_definition) },
	{ 0x6e4d604c, __VMLINUX_SYMBOL_STR(_rtl92c_phy_rf_serial_write) },
	{ 0x666a5948, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0x2ec04691, __VMLINUX_SYMBOL_STR(_rtl92c_phy_rf_serial_read) },
	{ 0x6aa604e5, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bw_mode) },
	{ 0x655bae90, __VMLINUX_SYMBOL_STR(rtl92c_phy_lc_calibrate) },
	{ 0xb3314d48, __VMLINUX_SYMBOL_STR(_rtl92c_phy_calculate_bit_shift) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x3e97f2cb, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf7555e63, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7ae686cd, __VMLINUX_SYMBOL_STR(rtl_phy_scan_operation_backup) },
	{ 0xe1785e29, __VMLINUX_SYMBOL_STR(rtl92c_dm_init_edca_turbo) },
	{ 0x7f201e72, __VMLINUX_SYMBOL_STR(rtl92c_phy_iq_calibrate) },
	{ 0x3ce4cfb3, __VMLINUX_SYMBOL_STR(rtl92c_dm_init) },
	{ 0xf27baff9, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bb_reg) },
	{ 0xce40bd33, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0xc0f2634b, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x83e49db9, __VMLINUX_SYMBOL_STR(rtl_get_hwinfo) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x4beca04f, __VMLINUX_SYMBOL_STR(rtl92c_firmware_selfreset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1ba10c28, __VMLINUX_SYMBOL_STR(rtl92c_dm_rf_saving) },
	{ 0xe15c37b4, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_pwrmode_cmd) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x2921a4d4, __VMLINUX_SYMBOL_STR(rtl_btc_status_false) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x7e236e6, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_write) },
	{ 0xb2cbccd9, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x243e0f7d, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0x1c01dcb, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0x5adbcd98, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_joinbss_report_cmd) },
	{ 0x57d855d9, __VMLINUX_SYMBOL_STR(rtl92c_download_fw) },
	{ 0xdb190a15, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbe944ee0, __VMLINUX_SYMBOL_STR(rtl_rfreg_delay) },
	{ 0x10c12b29, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_io_cmd) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xed1a0b26, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x40b4cd6f, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0xc712b023, __VMLINUX_SYMBOL_STR(rtl92c_phy_rf_config) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc76c2e18, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0x22e161a7, __VMLINUX_SYMBOL_STR(rtl92c_set_p2p_ps_offload_cmd) },
	{ 0xc245607e, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0xbdc8f2cb, __VMLINUX_SYMBOL_STR(rtl92ce_phy_set_rf_on) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd225147d, __VMLINUX_SYMBOL_STR(rtl92c_phy_query_bb_reg) },
	{ 0xe7ac65c4, __VMLINUX_SYMBOL_STR(_rtl92c_store_pwrIndex_diffrate_offset) },
	{ 0xd0f96e29, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbc058292, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0x8f6989f9, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
	{ 0xef7e6adc, __VMLINUX_SYMBOL_STR(_rtl92c_phy_bb8192c_config_parafile) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xbc988d51, __VMLINUX_SYMBOL_STR(rtl92c_fill_h2c_cmd) },
	{ 0x706c6ab7, __VMLINUX_SYMBOL_STR(rtl92c_phy_sw_chnl) },
	{ 0x980848e2, __VMLINUX_SYMBOL_STR(rtl_addr_delay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci,rtl8192c-common,mac80211";

MODULE_ALIAS("pci:v000010ECd00008191sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008176sv*sd*bc*sc*i*");
