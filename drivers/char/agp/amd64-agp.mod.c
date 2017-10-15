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
	{ 0x774e0c7d, __VMLINUX_SYMBOL_STR(agp_generic_type_to_mask_type) },
	{ 0x3a3b43ae, __VMLINUX_SYMBOL_STR(agp_generic_destroy_pages) },
	{ 0x2fac9636, __VMLINUX_SYMBOL_STR(agp_generic_destroy_page) },
	{ 0xe0fa3191, __VMLINUX_SYMBOL_STR(agp_generic_alloc_pages) },
	{ 0x8a926ae6, __VMLINUX_SYMBOL_STR(agp_generic_alloc_page) },
	{ 0x3d3e161a, __VMLINUX_SYMBOL_STR(agp_generic_free_by_type) },
	{ 0x82682129, __VMLINUX_SYMBOL_STR(agp_generic_alloc_by_type) },
	{ 0xbf0009e4, __VMLINUX_SYMBOL_STR(agp_generic_remove_memory) },
	{ 0xd459b048, __VMLINUX_SYMBOL_STR(agp_generic_free_gatt_table) },
	{ 0x7bc53b92, __VMLINUX_SYMBOL_STR(agp_generic_create_gatt_table) },
	{ 0x821ecd2, __VMLINUX_SYMBOL_STR(agp_generic_mask_memory) },
	{ 0x19fc149, __VMLINUX_SYMBOL_STR(agp_generic_enable) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x99b16f8c, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0x5b6ea82b, __VMLINUX_SYMBOL_STR(driver_attach) },
	{ 0x3145216f, __VMLINUX_SYMBOL_STR(pci_dev_present) },
	{ 0xaf611eac, __VMLINUX_SYMBOL_STR(amd_nb_misc_ids) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xc5d9c46c, __VMLINUX_SYMBOL_STR(agp_try_unsupported_boot) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7538b132, __VMLINUX_SYMBOL_STR(agp_off) },
	{ 0x2a49c473, __VMLINUX_SYMBOL_STR(agp_add_bridge) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdee36bdd, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xd919806a, __VMLINUX_SYMBOL_STR(amd_cache_northbridges) },
	{ 0xab48024c, __VMLINUX_SYMBOL_STR(agp_alloc_bridge) },
	{ 0xa988094f, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x15b0606e, __VMLINUX_SYMBOL_STR(e820_any_mapped) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xa4d4f0e6, __VMLINUX_SYMBOL_STR(global_cache_flush) },
	{ 0xd6feefa5, __VMLINUX_SYMBOL_STR(agp_num_entries) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa65dc0cb, __VMLINUX_SYMBOL_STR(agp_put_bridge) },
	{ 0xfc2975ed, __VMLINUX_SYMBOL_STR(agp_remove_bridge) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x8a11728d, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xf24edb37, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xbcb838a1, __VMLINUX_SYMBOL_STR(amd_flush_garts) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x929bc3ef, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa3e082e7, __VMLINUX_SYMBOL_STR(agp_bridge) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xe5593c9c, __VMLINUX_SYMBOL_STR(amd_northbridges) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001022d00007454sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010B9d00001689sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000282sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003188sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000204sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000336sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000238sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d0000B188sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010DEd000000D1sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010DEd000000E1sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000755sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000760sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010B9d00001695sv*sd*bc06sc00i00*");
