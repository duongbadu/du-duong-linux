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
	{ 0x93e0f7b8, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbece73e1, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xd383f368, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc3c04dfc, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x83e36a72, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x6d356209, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x4873d52a, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x91ac13cb, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x25748f39, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37419981, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x40a29f24, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x59f63a68, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x8f51b207, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x1acc8c30, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xad7c1de1, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x921cacd9, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa83aca8d, __VMLINUX_SYMBOL_STR(mpage_writepages) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27fb5b2, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x85e34a7e, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xb03444c3, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xc0a6cfdc, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0xd11a3290, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x37fbc45d, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x1caf6493, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0xd9e1ddf7, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbae2d30e, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0x26786563, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x2e971c64, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x878ed3ab, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9bad216c, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x832f62eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x8f8440d5, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xfe90add2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x66c86e4, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb7f1981b, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0x66d9b3e, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x28b2ba37, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x76669fc, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x205b304b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x8c8ee6d4, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xec02826b, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x7f79deeb, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x14c735a0, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x1da80d08, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x558a3913, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x925b291a, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x62aa7d47, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0x874c6d7b, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-itu-t";

