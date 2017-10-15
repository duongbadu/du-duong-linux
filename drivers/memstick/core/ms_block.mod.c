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
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xf999fc01, __VMLINUX_SYMBOL_STR(memstick_unregister_driver) },
	{ 0xdcfac479, __VMLINUX_SYMBOL_STR(memstick_register_driver) },
	{ 0x5d820a02, __VMLINUX_SYMBOL_STR(memstick_init_req_sg) },
	{ 0xd60a2756, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0x55f5d42f, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbf8dbf61, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x8ab31c7, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0xaf4065f1, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x8f0e685d, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xa8a1b9f3, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xaa5e85a7, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x347f2aee, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x95434e28, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb7733cf0, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xdd668c53, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x2af4ea72, __VMLINUX_SYMBOL_STR(__blk_end_request) },
	{ 0xc9e23d4f, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x3b29f5ee, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4c1140e5, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x638dc58a, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0x42be8502, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x1b1e1088, __VMLINUX_SYMBOL_STR(sg_nents) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7f7c3fb1, __VMLINUX_SYMBOL_STR(memstick_new_req) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xdc07e67e, __VMLINUX_SYMBOL_STR(memstick_init_req) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x5d9779d9, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x375ab9d0, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2f4aac0c, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x7631b005, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x220438c8, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xdd10838a, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=memstick";

