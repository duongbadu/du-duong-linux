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
	{ 0x8bc6f5d9, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0xbffb8f80, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0xaba5f660, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x3162d3e, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0xec8cc86b, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x4b294ea2, __VMLINUX_SYMBOL_STR(sata_pmp_port_ops) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb3bae92f, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb766cb3d, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x2d3e5fa2, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xd26aafea, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xdf2b8afc, __VMLINUX_SYMBOL_STR(pcie_set_readrq) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xf4e54379, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xabbcef6d, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x4e9fb65d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x9e17defc, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0xb00198e0, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x32b01542, __VMLINUX_SYMBOL_STR(ata_link_offline) },
	{ 0x9f7ee2fb, __VMLINUX_SYMBOL_STR(sata_link_debounce) },
	{ 0xc428068d, __VMLINUX_SYMBOL_STR(sata_deb_timing_long) },
	{ 0x2e8f2fb1, __VMLINUX_SYMBOL_STR(ata_link_online) },
	{ 0x31a301e0, __VMLINUX_SYMBOL_STR(sata_set_spd) },
	{ 0xcbe6a8ef, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x7d55a8e1, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0x3e28ccd0, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0x76d76292, __VMLINUX_SYMBOL_STR(ata_eh_freeze_port) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc9d43252, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6993bb56, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5c92f2d8, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xe1c012c7, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0xe84f2c84, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0x1aa82510, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0x62516879, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xa5e619f9, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xffff6a70, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0xf8f3a0fb, __VMLINUX_SYMBOL_STR(ata_ratelimit) },
	{ 0x8ddf67e6, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xbe0054db, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xf5e1a7a9, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4099f4f5, __VMLINUX_SYMBOL_STR(ata_wait_register) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001095d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000244sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003531sv*sd*bc*sc*i*");
