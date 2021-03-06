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
	{ 0x14956723, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x58eb057e, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0xf85a1154, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xdbd8bf86, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0xd383f368, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc3c04dfc, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x83e36a72, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x7c2a2ecc, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xb17c1f8c, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xea3f725d, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0xb4168f60, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x6ade7a46, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xeffcb588, __VMLINUX_SYMBOL_STR(end_buffer_write_sync) },
	{ 0x47071dc0, __VMLINUX_SYMBOL_STR(block_invalidatepage) },
	{ 0x896e3190, __VMLINUX_SYMBOL_STR(generic_fh_to_parent) },
	{ 0xb9964c0c, __VMLINUX_SYMBOL_STR(block_is_partially_uptodate) },
	{ 0xf9d7c962, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x7d5c7fe9, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xc5254d32, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0x7710af35, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x8f8f5d98, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xcdcc9b8, __VMLINUX_SYMBOL_STR(buffer_migrate_page) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0x611c34d0, __VMLINUX_SYMBOL_STR(add_to_page_cache_lru) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37419981, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x40a29f24, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x59f63a68, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe067da59, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x91db993c, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x261fc937, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0xacd66825, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x375a4ec5, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0xbef763cf, __VMLINUX_SYMBOL_STR(blk_get_backing_dev_info) },
	{ 0x8f51b207, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x72bb9751, __VMLINUX_SYMBOL_STR(iov_iter_fault_in_readable) },
	{ 0xd14b3db0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x75b3dff3, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd20f3020, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0x8e915202, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0x1acc8c30, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xe8ef0ff0, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xec4fa741, __VMLINUX_SYMBOL_STR(d_add_ci) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x921cacd9, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x581631c0, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1f441b3b, __VMLINUX_SYMBOL_STR(write_inode_now) },
	{ 0x812de36c, __VMLINUX_SYMBOL_STR(file_remove_privs) },
	{ 0x225d7e1d, __VMLINUX_SYMBOL_STR(ilookup5_nowait) },
	{ 0x2aa8f02c, __VMLINUX_SYMBOL_STR(__page_cache_alloc) },
	{ 0xf0113640, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1f60d125, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x840d38d7, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x20d4bfdb, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0x9bc9fd8e, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x85e34a7e, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xe018bf28, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xc0a6cfdc, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x8c2bacdc, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xc4147359, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xd11a3290, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xd1924f6c, __VMLINUX_SYMBOL_STR(balance_dirty_pages_ratelimited) },
	{ 0x377113de, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0x61b88f56, __VMLINUX_SYMBOL_STR(mark_buffer_async_write) },
	{ 0x25ceae38, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x7171121c, __VMLINUX_SYMBOL_STR(overflowgid) },
	{ 0x82a27d45, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xcc82add3, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x37fbc45d, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x37323075, __VMLINUX_SYMBOL_STR(free_buffer_head) },
	{ 0x884ca09, __VMLINUX_SYMBOL_STR(sync_blockdev) },
	{ 0xd9e1ddf7, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xff3f7fd2, __VMLINUX_SYMBOL_STR(create_empty_buffers) },
	{ 0x46a845c9, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x26786563, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x2e971c64, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x3d1391e2, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0xe521d99e, __VMLINUX_SYMBOL_STR(unmap_underlying_metadata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x800fb92b, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x77f1257f, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdc730ba0, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x832f62eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xdb6a85e2, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xac45f9db, __VMLINUX_SYMBOL_STR(I_BDEV) },
	{ 0x4b5df2c6, __VMLINUX_SYMBOL_STR(blockdev_superblock) },
	{ 0xfe90add2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x5ae91082, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4cbeb477, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x7d7356b3, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb7f1981b, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xe1a03687, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x6e9d28b0, __VMLINUX_SYMBOL_STR(generic_error_remove_page) },
	{ 0x6a10f726, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xd76d3f52, __VMLINUX_SYMBOL_STR(end_buffer_read_sync) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x506959d7, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xf69fa163, __VMLINUX_SYMBOL_STR(__set_page_dirty_buffers) },
	{ 0x66d9b3e, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x28b2ba37, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xa425bde3, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xd28f6f95, __VMLINUX_SYMBOL_STR(iov_iter_copy_from_user_atomic) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xcb84681f, __VMLINUX_SYMBOL_STR(iov_iter_single_seg_count) },
	{ 0x76669fc, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x205b304b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x8c8ee6d4, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xec02826b, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0x290849a9, __VMLINUX_SYMBOL_STR(generic_fh_to_dentry) },
	{ 0x7f79deeb, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x81e88feb, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x4b0a9dea, __VMLINUX_SYMBOL_STR(alloc_page_buffers) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xf617f330, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x62aa7d47, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0x59a7f113, __VMLINUX_SYMBOL_STR(noop_backing_dev_info) },
	{ 0xdad3b092, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0D7ACE93F603E9350827FB8");
