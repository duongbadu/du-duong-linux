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
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd8224863, __VMLINUX_SYMBOL_STR(xenbus_unregister_driver) },
	{ 0xc542299, __VMLINUX_SYMBOL_STR(__xenbus_register_frontend) },
	{ 0x4deee11, __VMLINUX_SYMBOL_STR(xen_pci_frontend) },
	{ 0x85cb2c45, __VMLINUX_SYMBOL_STR(xen_has_pv_devices) },
	{ 0xa11b55b2, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xca81ea9a, __VMLINUX_SYMBOL_STR(xenbus_transaction_end) },
	{ 0x73013896, __VMLINUX_SYMBOL_STR(xenbus_printf) },
	{ 0x8c06a108, __VMLINUX_SYMBOL_STR(xenbus_transaction_start) },
	{ 0xe41534ce, __VMLINUX_SYMBOL_STR(bind_evtchn_to_irqhandler) },
	{ 0xcd29df99, __VMLINUX_SYMBOL_STR(xenbus_alloc_evtchn) },
	{ 0x5577d14b, __VMLINUX_SYMBOL_STR(xenbus_grant_ring) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x7d4a6c1e, __VMLINUX_SYMBOL_STR(xenbus_dev_error) },
	{ 0x539f157b, __VMLINUX_SYMBOL_STR(pci_xen_swiotlb_init_late) },
	{ 0x5e51cd74, __VMLINUX_SYMBOL_STR(swiotlb_nr_tbl) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc5f24540, __VMLINUX_SYMBOL_STR(xenbus_switch_state) },
	{ 0x2d33b1db, __VMLINUX_SYMBOL_STR(xenbus_dev_fatal) },
	{ 0x964add15, __VMLINUX_SYMBOL_STR(xenbus_scanf) },
	{ 0xd72feba2, __VMLINUX_SYMBOL_STR(xenbus_read_driver_state) },
	{ 0xa1325cd9, __VMLINUX_SYMBOL_STR(pci_find_bus) },
	{ 0x38a71b7e, __VMLINUX_SYMBOL_STR(pci_free_resource_list) },
	{ 0xbcf3cee3, __VMLINUX_SYMBOL_STR(pci_bus_add_devices) },
	{ 0x5e9a198d, __VMLINUX_SYMBOL_STR(pci_walk_bus) },
	{ 0xaf386c2a, __VMLINUX_SYMBOL_STR(pci_scan_root_bus) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xd94743ef, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x25a8d34c, __VMLINUX_SYMBOL_STR(pci_add_resource) },
	{ 0x150ad92b, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xce272aab, __VMLINUX_SYMBOL_STR(pci_scan_single_device) },
	{ 0x929bc3ef, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xb3db90a8, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x209ec764, __VMLINUX_SYMBOL_STR(xen_event_channel_op_compat) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x84060081, __VMLINUX_SYMBOL_STR(xen_poll_irq_timeout) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8cda8029, __VMLINUX_SYMBOL_STR(xen_clear_irq_pending) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x45d14bdf, __VMLINUX_SYMBOL_STR(hypercall_page) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x42e2e38c, __VMLINUX_SYMBOL_STR(pci_claim_resource) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xedbc6f67, __VMLINUX_SYMBOL_STR(gnttab_end_foreign_access) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd979b09c, __VMLINUX_SYMBOL_STR(xenbus_free_evtchn) },
	{ 0x7712771a, __VMLINUX_SYMBOL_STR(unbind_from_irqhandler) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5790e7a0, __VMLINUX_SYMBOL_STR(pci_unlock_rescan_remove) },
	{ 0x3e66e86b, __VMLINUX_SYMBOL_STR(pci_remove_bus) },
	{ 0xd38c99f1, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc1301868, __VMLINUX_SYMBOL_STR(pci_stop_and_remove_bus_device) },
	{ 0xddbeeecc, __VMLINUX_SYMBOL_STR(pci_lock_rescan_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

