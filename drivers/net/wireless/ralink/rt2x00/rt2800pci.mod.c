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
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x2b5d36a7, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x5ed8384c, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xcb384961, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x3fe137ba, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xdec2a9a4, __VMLINUX_SYMBOL_STR(rt2800_get_survey) },
	{ 0xb8bee378, __VMLINUX_SYMBOL_STR(rt2800_ampdu_action) },
	{ 0x7ce6e925, __VMLINUX_SYMBOL_STR(rt2800_get_tsf) },
	{ 0x8365868b, __VMLINUX_SYMBOL_STR(rt2800_conf_tx) },
	{ 0x9e71308c, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_remove) },
	{ 0xedbd8cf1, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_add) },
	{ 0x1a963a69, __VMLINUX_SYMBOL_STR(rt2800_set_rts_threshold) },
	{ 0x837728fc, __VMLINUX_SYMBOL_STR(rt2800_get_key_seq) },
	{ 0xd589e3ed, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xb3c8e41e, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x400ab4b1, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xf67ca386, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x93bcf56b, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xaa0a75dd, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xea6f522f, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xf8ffbb7a, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xd3f48ba5, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x58af0535, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x748c45f2, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x968e952f, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xa3047b8f, __VMLINUX_SYMBOL_STR(rt2800mmio_get_txwi) },
	{ 0x205da179, __VMLINUX_SYMBOL_STR(rt2800mmio_init_registers) },
	{ 0xf579b8f3, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0x46e3f180, __VMLINUX_SYMBOL_STR(rt2800_sta_remove) },
	{ 0x55543940, __VMLINUX_SYMBOL_STR(rt2800_sta_add) },
	{ 0x2e70a31a, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0x53831865, __VMLINUX_SYMBOL_STR(rt2800_config_ant) },
	{ 0xfc4e74d1, __VMLINUX_SYMBOL_STR(rt2800_config_erp) },
	{ 0xad30b6d1, __VMLINUX_SYMBOL_STR(rt2800_config_intf) },
	{ 0x79a15843, __VMLINUX_SYMBOL_STR(rt2800_config_filter) },
	{ 0x409a64cc, __VMLINUX_SYMBOL_STR(rt2800_config_pairwise_key) },
	{ 0xd04265d4, __VMLINUX_SYMBOL_STR(rt2800_config_shared_key) },
	{ 0x6e0cb052, __VMLINUX_SYMBOL_STR(rt2800mmio_fill_rxdone) },
	{ 0xef969ed3, __VMLINUX_SYMBOL_STR(rt2800_clear_beacon) },
	{ 0xd7e303e1, __VMLINUX_SYMBOL_STR(rt2800_write_beacon) },
	{ 0x7ceab68a, __VMLINUX_SYMBOL_STR(rt2800_write_tx_data) },
	{ 0xabd9cf13, __VMLINUX_SYMBOL_STR(rt2800mmio_write_tx_desc) },
	{ 0x2b464795, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0x30ace98, __VMLINUX_SYMBOL_STR(rt2800mmio_stop_queue) },
	{ 0x1e34e02a, __VMLINUX_SYMBOL_STR(rt2800mmio_kick_queue) },
	{ 0x9884663a, __VMLINUX_SYMBOL_STR(rt2800mmio_start_queue) },
	{ 0x39eeba44, __VMLINUX_SYMBOL_STR(rt2800_vco_calibration) },
	{ 0xfbc494f4, __VMLINUX_SYMBOL_STR(rt2800_gain_calibration) },
	{ 0xd4259bb0, __VMLINUX_SYMBOL_STR(rt2800_link_tuner) },
	{ 0x830a1c0a, __VMLINUX_SYMBOL_STR(rt2800_reset_tuner) },
	{ 0x5d0a67ed, __VMLINUX_SYMBOL_STR(rt2800_link_stats) },
	{ 0x8918886c, __VMLINUX_SYMBOL_STR(rt2800_rfkill_poll) },
	{ 0x653498c8, __VMLINUX_SYMBOL_STR(rt2800mmio_clear_entry) },
	{ 0x2ced1855, __VMLINUX_SYMBOL_STR(rt2800mmio_get_entry_state) },
	{ 0x5c33fc9a, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0xe1817dba, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0x2752163d, __VMLINUX_SYMBOL_STR(rt2800_load_firmware) },
	{ 0x30dbc66e, __VMLINUX_SYMBOL_STR(rt2800_check_firmware) },
	{ 0xc3159d65, __VMLINUX_SYMBOL_STR(rt2800_probe_hw) },
	{ 0xc6a1455e, __VMLINUX_SYMBOL_STR(rt2800mmio_autowake_tasklet) },
	{ 0x92c0bcd1, __VMLINUX_SYMBOL_STR(rt2800mmio_rxdone_tasklet) },
	{ 0x2505789d, __VMLINUX_SYMBOL_STR(rt2800mmio_tbtt_tasklet) },
	{ 0xfad1430, __VMLINUX_SYMBOL_STR(rt2800mmio_pretbtt_tasklet) },
	{ 0xe28f94c7, __VMLINUX_SYMBOL_STR(rt2800mmio_txstatus_tasklet) },
	{ 0x5fa4db64, __VMLINUX_SYMBOL_STR(rt2800mmio_interrupt) },
	{ 0x6cc3a30c, __VMLINUX_SYMBOL_STR(rt2800mmio_queue_init) },
	{ 0x3163aa50, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0x18b24bff, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0xde208132, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xfcec09c2, __VMLINUX_SYMBOL_STR(rt2800mmio_toggle_irq) },
	{ 0x7d71350c, __VMLINUX_SYMBOL_STR(rt2800mmio_enable_radio) },
	{ 0x51f2d351, __VMLINUX_SYMBOL_STR(rt2800_mcu_request) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa9eadc04, __VMLINUX_SYMBOL_STR(rt2800_read_eeprom_efuse) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0x94a992fa, __VMLINUX_SYMBOL_STR(rt2800_efuse_detect) },
	{ 0xeeea9e77, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb5848bae, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4D2CAAE95D28B3DF4F72A52");
