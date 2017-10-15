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
	{ 0xc3a7ebb0, __VMLINUX_SYMBOL_STR(irq_chip_ack_parent) },
	{ 0xcc7dbdf6, __VMLINUX_SYMBOL_STR(pci_msi_set_desc) },
	{ 0x16098c83, __VMLINUX_SYMBOL_STR(pci_msi_prepare) },
	{ 0x7189115b, __VMLINUX_SYMBOL_STR(__vmbus_driver_register) },
	{ 0xd3a7daa, __VMLINUX_SYMBOL_STR(vmbus_driver_unregister) },
	{ 0xbcf3cee3, __VMLINUX_SYMBOL_STR(pci_bus_add_devices) },
	{ 0xbf29779e, __VMLINUX_SYMBOL_STR(pci_bus_assign_resources) },
	{ 0xae972095, __VMLINUX_SYMBOL_STR(pci_create_root_bus) },
	{ 0x25a8d34c, __VMLINUX_SYMBOL_STR(pci_add_resource) },
	{ 0xeb6bf216, __VMLINUX_SYMBOL_STR(pci_msi_create_irq_domain) },
	{ 0xbfce9685, __VMLINUX_SYMBOL_STR(handle_edge_irq) },
	{ 0x55c2e849, __VMLINUX_SYMBOL_STR(x86_vector_domain) },
	{ 0x8e2db255, __VMLINUX_SYMBOL_STR(irq_domain_alloc_fwnode) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x23aca8b4, __VMLINUX_SYMBOL_STR(vmbus_allocate_mmio) },
	{ 0xde211d43, __VMLINUX_SYMBOL_STR(vmbus_open) },
	{ 0xfa508aac, __VMLINUX_SYMBOL_STR(pci_remove_root_bus) },
	{ 0xf4545bc6, __VMLINUX_SYMBOL_STR(pci_stop_root_bus) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xdb44917a, __VMLINUX_SYMBOL_STR(irq_domain_free_fwnode) },
	{ 0x9579070b, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0x38a71b7e, __VMLINUX_SYMBOL_STR(pci_free_resource_list) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xca6b180e, __VMLINUX_SYMBOL_STR(vmbus_close) },
	{ 0xdb2f6047, __VMLINUX_SYMBOL_STR(vmbus_free_mmio) },
	{ 0xd3db077a, __VMLINUX_SYMBOL_STR(irq_domain_get_irq_data) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x5b294e32, __VMLINUX_SYMBOL_STR(apic) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xc1301868, __VMLINUX_SYMBOL_STR(pci_stop_and_remove_bus_device) },
	{ 0xb3db90a8, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb254538c, __VMLINUX_SYMBOL_STR(vmbus_recvpacket_raw) },
	{ 0x5790e7a0, __VMLINUX_SYMBOL_STR(pci_unlock_rescan_remove) },
	{ 0xcbd38fc9, __VMLINUX_SYMBOL_STR(pci_scan_child_bus) },
	{ 0xddbeeecc, __VMLINUX_SYMBOL_STR(pci_lock_rescan_remove) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xb8e4c26e, __VMLINUX_SYMBOL_STR(vmbus_sendpacket) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f60e697, __VMLINUX_SYMBOL_STR(pci_msi_unmask_irq) },
	{ 0x1a25cd8a, __VMLINUX_SYMBOL_STR(hv_do_hypercall) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x7d7d63df, __VMLINUX_SYMBOL_STR(cpumask_next_and) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x25a0a3d2, __VMLINUX_SYMBOL_STR(vmbus_cpu_number_to_vp_number) },
	{ 0x63c24c22, __VMLINUX_SYMBOL_STR(msi_desc_to_pci_dev) },
	{ 0x27b07f10, __VMLINUX_SYMBOL_STR(irqd_cfg) },
	{ 0x3dc20e52, __VMLINUX_SYMBOL_STR(pci_msi_mask_irq) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:1df6c444444400449d52802e27ede19f");
