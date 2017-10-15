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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdae45fe6, __VMLINUX_SYMBOL_STR(rtl8723_phy_reload_adda_registers) },
	{ 0xc84ec9c3, __VMLINUX_SYMBOL_STR(rtl_pci_probe) },
	{ 0xbcd58f91, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa5d065e7, __VMLINUX_SYMBOL_STR(rtl_dm_diginit) },
	{ 0xa1738009, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0xf2bbb5d, __VMLINUX_SYMBOL_STR(rtl_btc_get_ops_pointer) },
	{ 0xab60749e, __VMLINUX_SYMBOL_STR(rtl_hal_pwrseqcmdparsing) },
	{ 0x746afa77, __VMLINUX_SYMBOL_STR(rtl8723_download_fw) },
	{ 0x666a5948, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x3e97f2cb, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf7555e63, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x702ceb6b, __VMLINUX_SYMBOL_STR(rtl_evm_db_to_percentage) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8e4ada5f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x7248d69e, __VMLINUX_SYMBOL_STR(rtl8723_dm_init_dynamic_txpower) },
	{ 0xce40bd33, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0x39a70bf1, __VMLINUX_SYMBOL_STR(rtl8723_phy_reload_mac_registers) },
	{ 0xc0f2634b, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x83e49db9, __VMLINUX_SYMBOL_STR(rtl_get_hwinfo) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xe6a2afe8, __VMLINUX_SYMBOL_STR(rtl8723_dm_init_dynamic_bb_powersaving) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x94e1c5b4, __VMLINUX_SYMBOL_STR(rtl8723_phy_rf_serial_read) },
	{ 0xc8f7200a, __VMLINUX_SYMBOL_STR(rtl8723_phy_query_bb_reg) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x73fc14d1, __VMLINUX_SYMBOL_STR(rtl_signal_scale_mapping) },
	{ 0x55b70a2e, __VMLINUX_SYMBOL_STR(rtl8723_phy_mac_setting_calibration) },
	{ 0xb2cbccd9, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x59c947f9, __VMLINUX_SYMBOL_STR(rtl8723ae_firmware_selfreset) },
	{ 0x88c2b200, __VMLINUX_SYMBOL_STR(rtl8723_phy_path_a_fill_iqk_matrix) },
	{ 0xeee07d80, __VMLINUX_SYMBOL_STR(rtl8723_dm_init_edca_turbo) },
	{ 0x243e0f7d, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0x1c01dcb, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0xc4284b69, __VMLINUX_SYMBOL_STR(rtl8723_phy_pi_mode_switch) },
	{ 0x65949cd1, __VMLINUX_SYMBOL_STR(rtl8723_save_adda_registers) },
	{ 0xdb190a15, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0x5166dd03, __VMLINUX_SYMBOL_STR(rtl_cmd_send_packet) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xe598a8f0, __VMLINUX_SYMBOL_STR(rtl8723_phy_init_bb_rf_reg_def) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7302f459, __VMLINUX_SYMBOL_STR(rtl8723_phy_txpwr_idx_to_dbm) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x386afea, __VMLINUX_SYMBOL_STR(rtl8723_phy_save_mac_registers) },
	{ 0x40b4cd6f, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc76c2e18, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0xc245607e, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd0f96e29, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0xd297f9c8, __VMLINUX_SYMBOL_STR(rtl8723_phy_path_adda_on) },
	{ 0xbc058292, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe3844ce0, __VMLINUX_SYMBOL_STR(rtl8723_phy_rf_serial_write) },
	{ 0xaf4d6d94, __VMLINUX_SYMBOL_STR(rtl8723_phy_calculate_bit_shift) },
	{ 0x8f6989f9, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe5a5e09c, __VMLINUX_SYMBOL_STR(rtl8723_phy_set_bb_reg) },
	{ 0x6fee3a6c, __VMLINUX_SYMBOL_STR(rtl8723_phy_set_sw_chnl_cmdarray) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl8723-common,rtl_pci,btcoexist";

MODULE_ALIAS("pci:v000010ECd00008723sv*sd*bc*sc*i*");
