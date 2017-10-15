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
	{ 0xbe143cdd, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7bfe2589, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xa675804c, __VMLINUX_SYMBOL_STR(utf8s_to_utf16s) },
	{ 0xb94faf2d, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x83e36a72, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xd06a38ab, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x91ac13cb, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x79ca54ae, __VMLINUX_SYMBOL_STR(d_find_alias) },
	{ 0x3096be16, __VMLINUX_SYMBOL_STR(names_cachep) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37419981, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xe8862337, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0x1beb8937, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4ffdc56f, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0xb783584c, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0xb9b98d30, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0xe0859073, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x37186724, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x71c8dcb0, __VMLINUX_SYMBOL_STR(d_move) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xf0113640, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1f60d125, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x85e34a7e, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x551c4540, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0xd11a3290, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x82a27d45, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2e971c64, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xba0580a5, __VMLINUX_SYMBOL_STR(fat_search_long) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x800fb92b, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe77d047, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x832f62eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xc222c577, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0xfe90add2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb7f1981b, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0x6a10f726, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x8ab48e28, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0xb02ed764, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0x1db6d6d6, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0x205b304b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xeca51f35, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x19e48aea, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0x14c735a0, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x558a3913, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fat";

