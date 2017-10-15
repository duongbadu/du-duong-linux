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
	{ 0x8e26fccf, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x14956723, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd868e2a7, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4861e8e, __VMLINUX_SYMBOL_STR(alloc_dca_provider) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xabbcef6d, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x80acdda4, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x5f39354d, __VMLINUX_SYMBOL_STR(dma_async_tx_descriptor_init) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x20e4a486, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x307751bb, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xcfbe267a, __VMLINUX_SYMBOL_STR(dma_async_device_register) },
	{ 0x6d5c90ec, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x81febf34, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x75bc549a, __VMLINUX_SYMBOL_STR(x86_cpu_to_apicid) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x762d625c, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xf0113640, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x4e9fb65d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x82a27d45, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x22f79f1b, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x12bc4240, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0x63375798, __VMLINUX_SYMBOL_STR(register_dca_provider) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x7d1bae03, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf4fded96, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xfde3eb7b, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x4f27fae4, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb766cb3d, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4e1bcfa2, __VMLINUX_SYMBOL_STR(unregister_dca_provider) },
	{ 0xdc730ba0, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x98880c5f, __VMLINUX_SYMBOL_STR(free_dca_provider) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2baa1d24, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xddb893d2, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6590f781, __VMLINUX_SYMBOL_STR(dma_async_device_unregister) },
	{ 0x3d1a2a37, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0xc054cd84, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xcfb5232f, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x9820b644, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt_taint) },
	{ 0xefcb92c7, __VMLINUX_SYMBOL_STR(pcie_capability_write_word) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x54d077c0, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0xce67256d, __VMLINUX_SYMBOL_STR(dmam_pool_create) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dca";

MODULE_ALIAS("pci:v00008086d00003430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003431sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003433sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003429sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003716sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003717sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003718sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003719sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F53sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EB2D68D0744B9E7E8F3992A");
