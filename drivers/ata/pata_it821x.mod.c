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
	{ 0x32979ea1, __VMLINUX_SYMBOL_STR(ata_cable_80wire) },
	{ 0xfa32d4ec, __VMLINUX_SYMBOL_STR(ata_cable_unknown) },
	{ 0xde4b8531, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0x61401019, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0x309eaf92, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x2132da48, __VMLINUX_SYMBOL_STR(ata_bmdma_stop) },
	{ 0xecde455e, __VMLINUX_SYMBOL_STR(ata_bmdma_start) },
	{ 0x678c7f77, __VMLINUX_SYMBOL_STR(ata_sff_dev_select) },
	{ 0x16f9d518, __VMLINUX_SYMBOL_STR(ata_dev_pair) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5857b225, __VMLINUX_SYMBOL_STR(ioread16_rep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1998851e, __VMLINUX_SYMBOL_STR(ata_bmdma_port_start) },
	{ 0x4c28367, __VMLINUX_SYMBOL_STR(ata_do_dev_read_id) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xf79120b8, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xbe0054db, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xf5e1a7a9, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x46219c36, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x82799989, __VMLINUX_SYMBOL_STR(ata_bmdma_qc_issue) },
	{ 0xd63f31d1, __VMLINUX_SYMBOL_STR(ata_dev_next) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaa403c7a, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xb6aeb661, __VMLINUX_SYMBOL_STR(ata_id_c_string) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001283d00008211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E74D95C634577DED827BD4D");
