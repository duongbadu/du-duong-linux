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
	{ 0x3c4d0eaf, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0x61401019, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0x309eaf92, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x2d3e5fa2, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x1bc357ae, __VMLINUX_SYMBOL_STR(ata_pci_sff_init_one) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0xbe0054db, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xf5e1a7a9, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x46219c36, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xaa403c7a, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xd63f31d1, __VMLINUX_SYMBOL_STR(ata_dev_next) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001042d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001042d00001001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "647B1B68AE7A2FB1FE11349");
