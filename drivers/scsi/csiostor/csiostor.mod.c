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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4766e06d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xd421145c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x6a21d741, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x292bea26, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xe071e1bc, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0xc1b2050d, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf4853dc0, __VMLINUX_SYMBOL_STR(scsi_is_fc_rport) },
	{ 0x3ac9436c, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x610aaa40, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3e544e4, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0x46219c36, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e68d7df, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xcaf602bd, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x7db00a22, __VMLINUX_SYMBOL_STR(debugfs_create_file_size) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xc87e619e, __VMLINUX_SYMBOL_STR(fc_vport_terminate) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe25493d4, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xa3a62368, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x98fa2a02, __VMLINUX_SYMBOL_STR(dev_crit) },
	{ 0x51de1730, __VMLINUX_SYMBOL_STR(fc_remote_port_rolechg) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xf5fd49b0, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x18bc1272, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x53f8bd6c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xa988094f, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x477fda91, __VMLINUX_SYMBOL_STR(fc_release_transport) },
	{ 0xa9ca0401, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xb8c3a7, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x22f79f1b, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x7d1bae03, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8127cb46, __VMLINUX_SYMBOL_STR(fc_remote_port_delete) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x26cb34a2, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xd2414165, __VMLINUX_SYMBOL_STR(fc_block_scsi_eh) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb766cb3d, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xad6e4bb6, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x369af53c, __VMLINUX_SYMBOL_STR(pci_try_set_mwi) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x73ecec04, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xddb893d2, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xc86ea819, __VMLINUX_SYMBOL_STR(fc_remove_host) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefdc5bff, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x92de031c, __VMLINUX_SYMBOL_STR(fc_remote_port_add) },
	{ 0x3d1a2a37, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x17b430e0, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0x253f90be, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0xcfb5232f, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0xc7249e3d, __VMLINUX_SYMBOL_STR(fc_attach_transport) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xf52cce7c, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,scsi_transport_fc";

MODULE_ALIAS("pci:v00001425d00004600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005613sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005615sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005616sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005617sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005618sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005695sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005697sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000660Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006615sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C5F516ACBA2F21A506C7097");
