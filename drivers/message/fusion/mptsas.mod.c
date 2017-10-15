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
	{ 0x7a8b1359, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0xbacfc237, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0xd72f6016, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0xb9300244, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x8b39e0ef, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0xd3a7162f, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0x6b22f048, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xde4961e9, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x12df7318, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0x3c293e, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x773c5187, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0x76e0ee9, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0x5b05ea39, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x3d6ba50f, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0xb9f8311b, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0x92953f8a, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0xcbb92a90, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0xcdf76aff, __VMLINUX_SYMBOL_STR(mptscsih_get_scsi_lookup) },
	{ 0x218ebabf, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg1) },
	{ 0x8675d09a, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_get_num_paths) },
	{ 0x8972fc20, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0xa5717e9a, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0x1a6653a2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xd8851c1b, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0x7448b37a, __VMLINUX_SYMBOL_STR(sas_read_port_mode_page) },
	{ 0xe8c07208, __VMLINUX_SYMBOL_STR(mptbase_sas_persist_operation) },
	{ 0x292bea26, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6a21d741, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x71031b9b, __VMLINUX_SYMBOL_STR(mptscsih_flush_running_cmds) },
	{ 0xf312893e, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x27614475, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x5d625bc9, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xf302d31a, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x4a2b9a5c, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x9b5e11a2, __VMLINUX_SYMBOL_STR(starget_for_each_device) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xf253ce6a, __VMLINUX_SYMBOL_STR(scsi_is_sas_rphy) },
	{ 0x4e6db18f, __VMLINUX_SYMBOL_STR(sas_port_mark_backlink) },
	{ 0xd801a2d, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0x5e3d935, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0xca744aa7, __VMLINUX_SYMBOL_STR(sas_port_alloc_num) },
	{ 0xb414cdbb, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0x37ecc9bd, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0xeb1285bc, __VMLINUX_SYMBOL_STR(sas_expander_alloc) },
	{ 0xf776916b, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0x1346b6a2, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0xab12f15e, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0xd48c4c33, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0x1987e3c8, __VMLINUX_SYMBOL_STR(mpt_detach) },
	{ 0xd701227e, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0xb6ee4aa7, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0x756cb501, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_response_code) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3fbee5b, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0xf2d0cb72, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
	{ 0x9a63ba6e, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0x602e9e95, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28d670a7, __VMLINUX_SYMBOL_STR(device_reprobe) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd4ad3895, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0xd52e2262, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xc4a4a5ea, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x6b9c8c6b, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0x754535eb, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xa37fb5ac, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg0) },
	{ 0xa7136deb, __VMLINUX_SYMBOL_STR(sas_rphy_free) },
	{ 0x16a72919, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0xe92da6b1, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0xf44d9bba, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xaae5921d, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x5eee9ce9, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0xc9bb60d0, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc93996f7, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd4a29826, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x6eed342d, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_sas,scsi_mod";

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8BCEC753F4658A8880D2D4B");
