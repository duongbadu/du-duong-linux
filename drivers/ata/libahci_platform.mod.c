#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xc84fd681, __VMLINUX_SYMBOL_STR(phy_init) },
	{ 0x6a8aa717, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xea50dad3, __VMLINUX_SYMBOL_STR(ahci_ignore_sss) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x4b3362c7, __VMLINUX_SYMBOL_STR(ahci_save_initial_config) },
	{ 0x435d47a3, __VMLINUX_SYMBOL_STR(ata_host_suspend) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x364faf9b, __VMLINUX_SYMBOL_STR(ahci_reset_em) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x31fcb6f6, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xbe0054db, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x76f88684, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0x65078795, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0xf4e54379, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xb0b85536, __VMLINUX_SYMBOL_STR(phy_power_off) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x727f405f, __VMLINUX_SYMBOL_STR(ahci_print_info) },
	{ 0x5b5084f9, __VMLINUX_SYMBOL_STR(devres_open_group) },
	{ 0x4e57e0a8, __VMLINUX_SYMBOL_STR(phy_power_on) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x2c6bbd2b, __VMLINUX_SYMBOL_STR(ahci_reset_controller) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf1624efc, __VMLINUX_SYMBOL_STR(phy_exit) },
	{ 0x57187922, __VMLINUX_SYMBOL_STR(ahci_host_activate) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2b80446c, __VMLINUX_SYMBOL_STR(ahci_init_controller) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xbecdd5b1, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcfc2cae8, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x69cf0d55, __VMLINUX_SYMBOL_STR(ahci_set_em_messages) },
	{ 0x2f33cc1f, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x9c327291, __VMLINUX_SYMBOL_STR(devm_of_phy_get) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7d1a605f, __VMLINUX_SYMBOL_STR(devres_remove_group) },
	{ 0x47611c55, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x183e5da, __VMLINUX_SYMBOL_STR(devres_release_group) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x3177de5f, __VMLINUX_SYMBOL_STR(ahci_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata,libahci";

