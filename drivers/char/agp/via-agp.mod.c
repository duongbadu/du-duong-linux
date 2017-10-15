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
	{ 0xc65abeb7, __VMLINUX_SYMBOL_STR(agp3_generic_sizes) },
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
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7538b132, __VMLINUX_SYMBOL_STR(agp_off) },
	{ 0x2a49c473, __VMLINUX_SYMBOL_STR(agp_add_bridge) },
	{ 0xf11651ab, __VMLINUX_SYMBOL_STR(get_agp_version) },
	{ 0xab48024c, __VMLINUX_SYMBOL_STR(agp_alloc_bridge) },
	{ 0xa988094f, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xa65dc0cb, __VMLINUX_SYMBOL_STR(agp_put_bridge) },
	{ 0xfc2975ed, __VMLINUX_SYMBOL_STR(agp_remove_bridge) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x8a11728d, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xdee36bdd, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0xd8b33a33, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xa3e082e7, __VMLINUX_SYMBOL_STR(agp_bridge) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001106d00000597sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000598sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000501sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000601sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000691sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000391sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003091sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003156sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003112sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000305sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003128sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003099sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003101sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003116sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003123sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003189sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000605sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003148sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003168sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000198sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003205sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000258sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000308sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003208sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000259sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000269sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d0000B198sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000296sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000314sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000324sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000327sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000364sv*sd*bc06sc00i00*");
