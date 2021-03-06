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
	{ 0x93d7f8fb, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x73d5bd61, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x82e03888, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x18aadf51, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x1f883493, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x84994828, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x7728cbe2, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x88969484, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x30ff9113, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0xb157593d, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x9543cab3, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9786232a, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x6a5fa363, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x8bc9dfc3, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0xb4ea942c, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0xe2f59f69, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xdf090af6, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xf4fded96, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd894588, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x12b041c3, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0xe0853eb5, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x8d7bb87a, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xdefd6401, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x633384fc, __VMLINUX_SYMBOL_STR(bio_free_pages) },
	{ 0xb65911f0, __VMLINUX_SYMBOL_STR(bio_alloc_pages) },
	{ 0x5237ca9, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x55e83001, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0xa419174f, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xfef65474, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xb64e4724, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0xb8c3a7, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xd3889a2b, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x46d205f0, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xde619cf6, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xf6170fb4, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xbc8cfa53, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x1c5062e1, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x6c13da9d, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0xd0772e5e, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x143efa99, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x23c695dc, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x991b4bd7, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0xecee27e7, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x1d7fa217, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x610aaa40, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x26cb34a2, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x34ae8b7b, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x977682dd, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0xad220643, __VMLINUX_SYMBOL_STR(md_cluster_ops) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xad6e4bb6, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x3395f8ea, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x906e649d, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xd00a3ff5, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0x4a6e1010, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

