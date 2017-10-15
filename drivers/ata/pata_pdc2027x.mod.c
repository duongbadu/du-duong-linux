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
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xd26aafea, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xe818b32b, __VMLINUX_SYMBOL_STR(ata_bmdma_interrupt) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x2d3e5fa2, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xc9d43252, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xabbcef6d, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x4e9fb65d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xf4e54379, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xbe0054db, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xf5e1a7a9, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xe2c86ccf, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xb6aeb661, __VMLINUX_SYMBOL_STR(ata_id_c_string) },
	{ 0x16f9d518, __VMLINUX_SYMBOL_STR(ata_dev_pair) },
	{ 0xd63f31d1, __VMLINUX_SYMBOL_STR(ata_dev_next) },
	{ 0x3dacc681, __VMLINUX_SYMBOL_STR(ata_do_set_mode) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v0000105Ad00004D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006269sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00001275sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00005275sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00007275sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FCED8B97545B0B4A2994C63");
