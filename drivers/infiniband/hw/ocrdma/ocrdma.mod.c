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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x34aedf5e, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd421145c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xbab62e22, __VMLINUX_SYMBOL_STR(be_roce_mcc_cmd) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x779a18af, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x9644b8cf, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0x80acdda4, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa23d6e7a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x33be0bd3, __VMLINUX_SYMBOL_STR(be_roce_register_driver) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e68d7df, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x872aee7c, __VMLINUX_SYMBOL_STR(ib_get_cached_gid) },
	{ 0xbb5bfe52, __VMLINUX_SYMBOL_STR(ib_alloc_device) },
	{ 0x8bda83ff, __VMLINUX_SYMBOL_STR(ib_dealloc_device) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x50d1f870, __VMLINUX_SYMBOL_STR(pgprot_writecombine) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x99b9cf9a, __VMLINUX_SYMBOL_STR(rdma_addr_find_l2_eth_by_grh) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbd481813, __VMLINUX_SYMBOL_STR(ib_umem_get) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x5f9e0b69, __VMLINUX_SYMBOL_STR(be_roce_unregister_driver) },
	{ 0x18bc1272, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x6291a87a, __VMLINUX_SYMBOL_STR(ib_dispatch_event) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x3d6cbcd5, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x8cc9b684, __VMLINUX_SYMBOL_STR(ib_umem_page_count) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x5944d015, __VMLINUX_SYMBOL_STR(__cachemode2pte_tbl) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x19f08c83, __VMLINUX_SYMBOL_STR(ib_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xdabe707, __VMLINUX_SYMBOL_STR(ib_unregister_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x29b91655, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xa97e9510, __VMLINUX_SYMBOL_STR(ib_sg_to_pages) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x580148bb, __VMLINUX_SYMBOL_STR(ib_modify_qp_is_ok) },
	{ 0x7ae64cc9, __VMLINUX_SYMBOL_STR(zgid) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x287d24e9, __VMLINUX_SYMBOL_STR(ib_umem_release) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=be2net,ib_core";


MODULE_INFO(srcversion, "329009CE3B694BFE1505DFF");
