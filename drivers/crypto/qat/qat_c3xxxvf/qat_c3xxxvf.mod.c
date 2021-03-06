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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd421145c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xce7e4538, __VMLINUX_SYMBOL_STR(adf_vf2pf_init) },
	{ 0x1d647fb1, __VMLINUX_SYMBOL_STR(adf_dev_init) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xa6847b99, __VMLINUX_SYMBOL_STR(adf_vf2pf_shutdown) },
	{ 0xc133ea07, __VMLINUX_SYMBOL_STR(adf_enable_vf2pf_comms) },
	{ 0x8eba1dcf, __VMLINUX_SYMBOL_STR(adf_vf_isr_resource_free) },
	{ 0xf7c39e9b, __VMLINUX_SYMBOL_STR(adf_devmgr_update_class_index) },
	{ 0x15d93988, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x49d3c4df, __VMLINUX_SYMBOL_STR(adf_dev_stop) },
	{ 0x8ad09408, __VMLINUX_SYMBOL_STR(adf_devmgr_rm_dev) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x2f0d36d4, __VMLINUX_SYMBOL_STR(adf_dev_shutdown) },
	{ 0xa1d69add, __VMLINUX_SYMBOL_STR(adf_cfg_dev_add) },
	{ 0x3791bf52, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe25493d4, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xfa32ef6f, __VMLINUX_SYMBOL_STR(adf_cfg_dev_remove) },
	{ 0xa22c212, __VMLINUX_SYMBOL_STR(adf_devmgr_add_dev) },
	{ 0xa9ca0401, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xbb0e1e63, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0x1db4f771, __VMLINUX_SYMBOL_STR(adf_dev_start) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb4008c79, __VMLINUX_SYMBOL_STR(qat_crypto_dev_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcc3b167a, __VMLINUX_SYMBOL_STR(adf_clean_vf_map) },
	{ 0x2a9835fd, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xaafdd5b7, __VMLINUX_SYMBOL_STR(adf_devmgr_pci_to_accel_dev) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x30294a90, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x991efbd5, __VMLINUX_SYMBOL_STR(adf_vf_isr_resource_alloc) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel_qat";

MODULE_ALIAS("pci:v00008086d000019E3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "691C687C2887E644BD386F6");
