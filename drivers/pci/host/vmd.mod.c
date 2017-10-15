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
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x38a71b7e, __VMLINUX_SYMBOL_STR(pci_free_resource_list) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd0772e5e, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x8f09ded6, __VMLINUX_SYMBOL_STR(pci_rescan_bus) },
	{ 0xe1158314, __VMLINUX_SYMBOL_STR(add_dma_domain) },
	{ 0xae972095, __VMLINUX_SYMBOL_STR(pci_create_root_bus) },
	{ 0x25a8d34c, __VMLINUX_SYMBOL_STR(pci_add_resource) },
	{ 0xeb6bf216, __VMLINUX_SYMBOL_STR(pci_msi_create_irq_domain) },
	{ 0x55c2e849, __VMLINUX_SYMBOL_STR(x86_vector_domain) },
	{ 0x17842d79, __VMLINUX_SYMBOL_STR(pci_find_next_bus) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x6df73ebb, __VMLINUX_SYMBOL_STR(pci_alloc_irq_vectors) },
	{ 0xef4284cd, __VMLINUX_SYMBOL_STR(pci_msix_vec_count) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x32812c43, __VMLINUX_SYMBOL_STR(pcim_iomap) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfc2799f0, __VMLINUX_SYMBOL_STR(irq_domain_set_info) },
	{ 0x21fe7bc0, __VMLINUX_SYMBOL_STR(handle_untracked_irq) },
	{ 0xb7af3335, __VMLINUX_SYMBOL_STR(pci_irq_vector) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x63c24c22, __VMLINUX_SYMBOL_STR(msi_desc_to_pci_dev) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x900dfe75, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x7ceaf0d5, __VMLINUX_SYMBOL_STR(generic_handle_irq) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x9579070b, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0x30d2244, __VMLINUX_SYMBOL_STR(del_dma_domain) },
	{ 0xfa508aac, __VMLINUX_SYMBOL_STR(pci_remove_root_bus) },
	{ 0xf4545bc6, __VMLINUX_SYMBOL_STR(pci_stop_root_bus) },
	{ 0x143efa99, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d0000201Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9DF2E4D3A26245E4BFBC981");
