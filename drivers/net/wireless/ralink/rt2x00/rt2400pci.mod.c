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
	{ 0x2b5d36a7, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x5ed8384c, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xe5bf9629, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xf8940364, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xcb384961, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x3fe137ba, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xd589e3ed, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xb3c8e41e, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x400ab4b1, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x93bcf56b, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xaa0a75dd, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xea6f522f, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xf8ffbb7a, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xd3f48ba5, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x58af0535, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x748c45f2, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x968e952f, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x2b464795, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0x5c33fc9a, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0xe1817dba, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0x3163aa50, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0x18b24bff, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0xde208132, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb5848bae, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x73713024, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xb9e85496, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone) },
	{ 0x2963284f, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x157246cf, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9faca117, __VMLINUX_SYMBOL_STR(rt2x00queue_map_txskb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf579b8f3, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc648b928, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xeeea9e77, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000101sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "19FC3954667CA61E48DC5E2");
