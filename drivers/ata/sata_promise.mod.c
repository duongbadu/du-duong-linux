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
	{ 0x7bff1297, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x3eab9c4c, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xd6754cdd, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xbffb8f80, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0xaba5f660, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x3162d3e, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0xec8cc86b, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x9d510b78, __VMLINUX_SYMBOL_STR(ata_sff_port_ops) },
	{ 0x309eaf92, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xd26aafea, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfd478504, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x2d3e5fa2, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xc9d43252, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xf4e54379, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xabbcef6d, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x4e9fb65d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x9af1ab7b, __VMLINUX_SYMBOL_STR(ata_sff_qc_issue) },
	{ 0x5c92f2d8, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x69c05e10, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
	{ 0xe84f2c84, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x62516879, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xa5e619f9, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xa4194dc2, __VMLINUX_SYMBOL_STR(ata_sff_softreset) },
	{ 0x7d55a8e1, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x67f395fe, __VMLINUX_SYMBOL_STR(ata_sff_error_handler) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6993bb56, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1998851e, __VMLINUX_SYMBOL_STR(ata_bmdma_port_start) },
	{ 0xd68cf8ca, __VMLINUX_SYMBOL_STR(sata_scr_valid) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x8c316206, __VMLINUX_SYMBOL_STR(ata_sff_tf_load) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe1d50c57, __VMLINUX_SYMBOL_STR(ata_sff_exec_command) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v0000105Ad00003371sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003373sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003375sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003376sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003574sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003577sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D73sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D75sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003515sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003519sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D17sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006629sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8548C379640295152C72F78");
