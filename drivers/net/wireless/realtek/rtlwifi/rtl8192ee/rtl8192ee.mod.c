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
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa5d065e7, __VMLINUX_SYMBOL_STR(rtl_dm_diginit) },
	{ 0xa1738009, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0xf2bbb5d, __VMLINUX_SYMBOL_STR(rtl_btc_get_ops_pointer) },
	{ 0xab60749e, __VMLINUX_SYMBOL_STR(rtl_hal_pwrseqcmdparsing) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x666a5948, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x3e97f2cb, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf7555e63, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x702ceb6b, __VMLINUX_SYMBOL_STR(rtl_evm_db_to_percentage) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8e4ada5f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xce40bd33, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0xc0f2634b, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x83e49db9, __VMLINUX_SYMBOL_STR(rtl_get_hwinfo) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x90c202dc, __VMLINUX_SYMBOL_STR(channel5g_80m) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x73fc14d1, __VMLINUX_SYMBOL_STR(rtl_signal_scale_mapping) },
	{ 0xb2cbccd9, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x243e0f7d, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0x1c01dcb, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0xdb190a15, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xed1a0b26, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x40b4cd6f, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0xad041b34, __VMLINUX_SYMBOL_STR(channel5g) },
	{ 0xb195c4b1, __VMLINUX_SYMBOL_STR(efuse_one_byte_read) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc76c2e18, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0xc245607e, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd0f96e29, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbc058292, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci,btcoexist,mac80211";

MODULE_ALIAS("pci:v000010ECd0000818Bsv*sd*bc*sc*i*");
