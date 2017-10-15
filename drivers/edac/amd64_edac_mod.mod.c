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
	{ 0xc4fe7865, __VMLINUX_SYMBOL_STR(edac_mc_add_mc_with_groups) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcf6cfe1f, __VMLINUX_SYMBOL_STR(msrs_free) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x34ab4757, __VMLINUX_SYMBOL_STR(edac_pci_release_generic_ctl) },
	{ 0x80acdda4, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x3d7c1ed7, __VMLINUX_SYMBOL_STR(msrs_alloc) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xe5593c9c, __VMLINUX_SYMBOL_STR(amd_northbridges) },
	{ 0xb51fbd64, __VMLINUX_SYMBOL_STR(edac_op_state) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xa40499f1, __VMLINUX_SYMBOL_STR(rdmsr_on_cpus) },
	{ 0xb15b4b35, __VMLINUX_SYMBOL_STR(edac_mc_handle_error) },
	{ 0x14878009, __VMLINUX_SYMBOL_STR(amd_report_gart_errors) },
	{ 0xe2ca4922, __VMLINUX_SYMBOL_STR(amd_register_ecc_decoder) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x36bedf89, __VMLINUX_SYMBOL_STR(edac_mc_free) },
	{ 0xc01fe078, __VMLINUX_SYMBOL_STR(wrmsr_on_cpus) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xad70096b, __VMLINUX_SYMBOL_STR(edac_mc_alloc) },
	{ 0xa8844605, __VMLINUX_SYMBOL_STR(edac_pci_create_generic_ctl) },
	{ 0x658c8186, __VMLINUX_SYMBOL_STR(amd_get_nb_id) },
	{ 0xaf46187e, __VMLINUX_SYMBOL_STR(find_mci_by_dev) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfde3eb7b, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd919806a, __VMLINUX_SYMBOL_STR(amd_cache_northbridges) },
	{ 0xe3ecc35, __VMLINUX_SYMBOL_STR(amd_unregister_ecc_decoder) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x87c9739c, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xcf97e5e1, __VMLINUX_SYMBOL_STR(edac_mc_find) },
	{ 0xebeb1546, __VMLINUX_SYMBOL_STR(edac_mc_del_mc) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=edac_core,edac_mce_amd";

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0010mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0015mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0016mod*:feature:*");
