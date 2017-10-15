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
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x77bf5528, __VMLINUX_SYMBOL_STR(mptscsih_host_attrs) },
	{ 0x7dab1b73, __VMLINUX_SYMBOL_STR(mptscsih_show_info) },
	{ 0x4bc2a4eb, __VMLINUX_SYMBOL_STR(mptscsih_bios_param) },
	{ 0x9f93595d, __VMLINUX_SYMBOL_STR(mptscsih_change_queue_depth) },
	{ 0xbacfc237, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0xb4b0e8bd, __VMLINUX_SYMBOL_STR(mptscsih_bus_reset) },
	{ 0xd72f6016, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0xb9300244, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x8b39e0ef, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0x47037b24, __VMLINUX_SYMBOL_STR(mptscsih_shutdown) },
	{ 0x6b22f048, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc44c71a, __VMLINUX_SYMBOL_STR(spi_release_transport) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x12df7318, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x3c293e, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x773c5187, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0x76e0ee9, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0x5b05ea39, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x3d6ba50f, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0x9f31f9bf, __VMLINUX_SYMBOL_STR(spi_attach_transport) },
	{ 0xc9bb60d0, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0x7a8b1359, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0x1a6653a2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x26e283df, __VMLINUX_SYMBOL_STR(scsi_device_lookup_by_target) },
	{ 0x4a2b9a5c, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0xab12f15e, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0xb6bdb0f4, __VMLINUX_SYMBOL_STR(mptscsih_IssueTaskMgmt) },
	{ 0xd701227e, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0xa3a62368, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x292bea26, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6a21d741, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xf312893e, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0xd8851c1b, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0x79c09b1d, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x5eee9ce9, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0xa5717e9a, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0x3effd008, __VMLINUX_SYMBOL_STR(mptscsih_event_process) },
	{ 0xc93996f7, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0xd3a7162f, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x49810a37, __VMLINUX_SYMBOL_STR(spi_display_xfer_agreement) },
	{ 0xd30789e, __VMLINUX_SYMBOL_STR(spi_dv_device) },
	{ 0xd52e2262, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0xf2622541, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc4a4a5ea, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x6b9c8c6b, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xd4a29826, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xaae5921d, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x6eed342d, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_spi,scsi_mod";

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "46FED2EB42AD74594F7C10A");
