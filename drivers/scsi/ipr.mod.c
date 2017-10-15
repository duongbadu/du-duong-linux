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
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xca003bd5, __VMLINUX_SYMBOL_STR(ata_sas_port_stop) },
	{ 0xd80de83, __VMLINUX_SYMBOL_STR(ata_sas_port_start) },
	{ 0x39fc54ca, __VMLINUX_SYMBOL_STR(ata_noop_qc_prep) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd7b25d07, __VMLINUX_SYMBOL_STR(ata_sas_slave_configure) },
	{ 0x8f0e685d, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x1f3f6384, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc411afc3, __VMLINUX_SYMBOL_STR(ata_std_error_handler) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc2e587d1, __VMLINUX_SYMBOL_STR(reset_devices) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0xb766cb3d, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xcfb5232f, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa3a62368, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x32fe66e0, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x292bea26, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xecbc1203, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x2a9835fd, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xcc0e9e9, __VMLINUX_SYMBOL_STR(ata_host_init) },
	{ 0x6a21d741, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xefdc5bff, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xc3f44e5f, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0x53f8bd6c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x15d93988, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x27614475, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x5d625bc9, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x8972fc20, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0xafa18183, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x41c04c28, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x554ae3a4, __VMLINUX_SYMBOL_STR(irq_poll_sched) },
	{ 0xd7d280ad, __VMLINUX_SYMBOL_STR(irq_poll_complete) },
	{ 0x46219c36, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xa988094f, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xe7975b0b, __VMLINUX_SYMBOL_STR(pci_set_pcie_reset_state) },
	{ 0xe071e1bc, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x22f79f1b, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x18cbb2e9, __VMLINUX_SYMBOL_STR(pci_cfg_access_unlock) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9bc18408, __VMLINUX_SYMBOL_STR(ata_sas_scsi_ioctl) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0xf52cce7c, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
	{ 0xe1ce30d7, __VMLINUX_SYMBOL_STR(ata_sas_queuecmd) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe638a2fa, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x5a569d8f, __VMLINUX_SYMBOL_STR(ata_sas_sync_probe) },
	{ 0x8af81cf1, __VMLINUX_SYMBOL_STR(ata_sas_port_init) },
	{ 0x8d0fb03, __VMLINUX_SYMBOL_STR(ata_sas_port_alloc) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x16eb9ec1, __VMLINUX_SYMBOL_STR(ata_sas_port_destroy) },
	{ 0x6eed342d, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x4766e06d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xab3697e4, __VMLINUX_SYMBOL_STR(irq_poll_init) },
	{ 0x7f7f7bb4, __VMLINUX_SYMBOL_STR(irq_poll_disable) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc3ca0be3, __VMLINUX_SYMBOL_STR(scsi_report_device_reset) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x65e0d6d7, __VMLINUX_SYMBOL_STR(memory_read_from_buffer) },
	{ 0xddb893d2, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x3ac9436c, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x73ecec04, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69c05e10, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xfc42980d, __VMLINUX_SYMBOL_STR(pci_cfg_access_trylock) },
	{ 0x1a6653a2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x9402a6a5, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc1b2050d, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x76909022, __VMLINUX_SYMBOL_STR(scsi_report_bus_reset) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata,scsi_mod";

MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000266bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000278bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D4bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002BEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002C0bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000030Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000030Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000033Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000035Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd00000360bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000180sv00001014sd00000264bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002BFbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002D5bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002C3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000033Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000356bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000035Fbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000352bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000353bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000354bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000033Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000355bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000357bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Ebc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FBbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FFbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000046Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004CAbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000474bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000475bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000499bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C7bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C8bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C9bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004DAsv00001014sd000004FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004DAsv00001014sd000004FBbc*sc*i*");

MODULE_INFO(srcversion, "9D20966CE6D780728FB09E0");
