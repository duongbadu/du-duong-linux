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
	{ 0xcf7b2a3, __VMLINUX_SYMBOL_STR(agp_generic_insert_memory) },
	{ 0xd459b048, __VMLINUX_SYMBOL_STR(agp_generic_free_gatt_table) },
	{ 0x7bc53b92, __VMLINUX_SYMBOL_STR(agp_generic_create_gatt_table) },
	{ 0xa4d4f0e6, __VMLINUX_SYMBOL_STR(global_cache_flush) },
	{ 0x821ecd2, __VMLINUX_SYMBOL_STR(agp_generic_mask_memory) },
	{ 0x19fc149, __VMLINUX_SYMBOL_STR(agp_generic_enable) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7538b132, __VMLINUX_SYMBOL_STR(agp_off) },
	{ 0x4102313a, __VMLINUX_SYMBOL_STR(agp3_generic_tlbflush) },
	{ 0xc2424641, __VMLINUX_SYMBOL_STR(agp3_generic_cleanup) },
	{ 0xde9b17ed, __VMLINUX_SYMBOL_STR(agp3_generic_fetch_size) },
	{ 0x4b085dbf, __VMLINUX_SYMBOL_STR(agp3_generic_configure) },
	{ 0xc65abeb7, __VMLINUX_SYMBOL_STR(agp3_generic_sizes) },
	{ 0x2a49c473, __VMLINUX_SYMBOL_STR(agp_add_bridge) },
	{ 0xf11651ab, __VMLINUX_SYMBOL_STR(get_agp_version) },
	{ 0xab48024c, __VMLINUX_SYMBOL_STR(agp_alloc_bridge) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa988094f, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x87c9739c, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x697ea876, __VMLINUX_SYMBOL_STR(agp_collect_device_status) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa65dc0cb, __VMLINUX_SYMBOL_STR(agp_put_bridge) },
	{ 0xfc2975ed, __VMLINUX_SYMBOL_STR(agp_remove_bridge) },
	{ 0xf24edb37, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xdee36bdd, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xa3e082e7, __VMLINUX_SYMBOL_STR(agp_bridge) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x8a11728d, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001039d00005591sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000530sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000540sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000550sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000620sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000630sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000635sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000645sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000646sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000648sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000650sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000651sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000655sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000661sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000662sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000671sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000730sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000735sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000740sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000741sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000745sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000746sv*sd*bc06sc00i00*");
