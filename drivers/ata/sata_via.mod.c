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
	{ 0x61401019, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0x309eaf92, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x7bff1297, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x3eab9c4c, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xd6754cdd, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xbffb8f80, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0xaba5f660, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x3162d3e, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0xec8cc86b, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0xde4b8531, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x7d55a8e1, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x62d91b48, __VMLINUX_SYMBOL_STR(ata_slave_link_init) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xc9d43252, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0x73a48b4a, __VMLINUX_SYMBOL_STR(ata_sff_std_ports) },
	{ 0xabbcef6d, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x4e9fb65d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xf4e54379, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd26aafea, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9a714542, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_prepare_host) },
	{ 0x2d3e5fa2, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x67f395fe, __VMLINUX_SYMBOL_STR(ata_sff_error_handler) },
	{ 0xbe0054db, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xf5e1a7a9, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x761ff715, __VMLINUX_SYMBOL_STR(ata_bmdma_irq_clear) },
	{ 0x466748f6, __VMLINUX_SYMBOL_STR(ata_sff_wait_ready) },
	{ 0xffff6a70, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0xb00198e0, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x1364381e, __VMLINUX_SYMBOL_STR(ata_sff_pause) },
	{ 0xecde455e, __VMLINUX_SYMBOL_STR(ata_bmdma_start) },
	{ 0x8c316206, __VMLINUX_SYMBOL_STR(ata_sff_tf_load) },
	{ 0xe84f2c84, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe818b32b, __VMLINUX_SYMBOL_STR(ata_bmdma_interrupt) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001106d00005337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003249sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EA91F728E91C7EEAE08A10C");
