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
	{ 0x93e0f7b8, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x58eb057e, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0xdbd8bf86, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0xbece73e1, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xc3c04dfc, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x25748f39, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0x37419981, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x40a29f24, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0xf8157ff6, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x59f63a68, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x921cacd9, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf0113640, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x1f60d125, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x8ab8d75a, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x18a873d0, __VMLINUX_SYMBOL_STR(simple_symlink_inode_operations) },
	{ 0xe018bf28, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x2171c8f, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0xd11a3290, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xb2682405, __VMLINUX_SYMBOL_STR(utf8_to_utf32) },
	{ 0x25ceae38, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x82a27d45, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x46a845c9, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x26786563, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x2e971c64, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9bad216c, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0xdc730ba0, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x832f62eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe1a03687, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x506959d7, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x66d9b3e, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x28b2ba37, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xfcc2a43c, __VMLINUX_SYMBOL_STR(utf32_to_utf8) },
	{ 0x205b304b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x1da80d08, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x925b291a, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

