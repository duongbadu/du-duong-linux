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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd868e2a7, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xf85a1154, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x6d916867, __VMLINUX_SYMBOL_STR(amd_iommu_domain_clear_gcr3) },
	{ 0x7a131181, __VMLINUX_SYMBOL_STR(amd_iommu_domain_direct_map) },
	{ 0xf0da9632, __VMLINUX_SYMBOL_STR(iommu_attach_group) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x5670993d, __VMLINUX_SYMBOL_STR(amd_iommu_domain_enable_v2) },
	{ 0x8c85b2b5, __VMLINUX_SYMBOL_STR(mmu_notifier_register) },
	{ 0x59345413, __VMLINUX_SYMBOL_STR(amd_iommu_flush_page) },
	{ 0x85f4dbc, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x75b3dff3, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x6ded996d, __VMLINUX_SYMBOL_STR(amd_iommu_complete_ppr) },
	{ 0xe9fdef74, __VMLINUX_SYMBOL_STR(amd_iommu_flush_tlb) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcdcb47da, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0x1afcfeb2, __VMLINUX_SYMBOL_STR(mmu_notifier_unregister) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x7e74d61c, __VMLINUX_SYMBOL_STR(iommu_domain_alloc) },
	{ 0x623f50ad, __VMLINUX_SYMBOL_STR(iommu_domain_free) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x202f1fd4, __VMLINUX_SYMBOL_STR(amd_iommu_domain_set_gcr3) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x22e34553, __VMLINUX_SYMBOL_STR(iommu_detach_group) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x89485687, __VMLINUX_SYMBOL_STR(iommu_group_put) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x76ff2053, __VMLINUX_SYMBOL_STR(handle_mm_fault) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x76fb08a7, __VMLINUX_SYMBOL_STR(amd_iommu_unregister_ppr_notifier) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x48d50e79, __VMLINUX_SYMBOL_STR(amd_iommu_register_ppr_notifier) },
	{ 0xafd5ff2c, __VMLINUX_SYMBOL_STR(amd_iommu_v2_supported) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x543d5a3, __VMLINUX_SYMBOL_STR(iommu_group_get) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe1b8d409, __VMLINUX_SYMBOL_STR(find_extend_vma) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

