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
	{ 0x216b2a54, __VMLINUX_SYMBOL_STR(get_acl) },
	{ 0x95ae3c6f, __VMLINUX_SYMBOL_STR(forget_cached_acl) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x8a7fdeb3, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0x5d66079c, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xec98c7f2, __VMLINUX_SYMBOL_STR(xdr_stream_pos) },
	{ 0xc0bdf0b8, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0x2005ab0b, __VMLINUX_SYMBOL_STR(nfs_close_context) },
	{ 0xd100fff1, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x6497da95, __VMLINUX_SYMBOL_STR(nfs_try_mount) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x2be8b5b4, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0x2fe59e33, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0xb225c6, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0xe8fcbee7, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0xc51cc646, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0xf228a905, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0x6566cd99, __VMLINUX_SYMBOL_STR(nfs_sops) },
	{ 0x1ca44b14, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0xda70192, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0x204822b6, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6daf086d, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0x98b0ece8, __VMLINUX_SYMBOL_STR(nfs_init_timeout_values) },
	{ 0x1c56824c, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0x36f88e89, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0x6de52ac2, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0xff659a33, __VMLINUX_SYMBOL_STR(nfs_fs_type) },
	{ 0x7da83a10, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0x12099557, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x269eb7b0, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8616e034, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0x3af0f101, __VMLINUX_SYMBOL_STR(rpc_bind_new_program) },
	{ 0x46d5fecd, __VMLINUX_SYMBOL_STR(nfs_zap_acl_cache) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9466485e, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0x879dde92, __VMLINUX_SYMBOL_STR(posix_acl_equiv_mode) },
	{ 0x97ce1389, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0x153d0db9, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x7e941b20, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0x7665f7db, __VMLINUX_SYMBOL_STR(nfsacl_encode) },
	{ 0x62e32ce8, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0xae12fd7b, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0xeced7021, __VMLINUX_SYMBOL_STR(nfs_file_operations) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x8e126118, __VMLINUX_SYMBOL_STR(nfs_get_client) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4b09416e, __VMLINUX_SYMBOL_STR(nfs_revalidate_inode) },
	{ 0xf5a5bb52, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3d66210c, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8e813b12, __VMLINUX_SYMBOL_STR(posix_acl_from_mode) },
	{ 0x4c00b27b, __VMLINUX_SYMBOL_STR(nfsacl_decode) },
	{ 0x567540e0, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0x3aa58df9, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7f6fc212, __VMLINUX_SYMBOL_STR(nfs_init_client) },
	{ 0xcaa1c33f, __VMLINUX_SYMBOL_STR(nfs_create_server) },
	{ 0xbc86487f, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0x3618f7e6, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0xb2efb703, __VMLINUX_SYMBOL_STR(nfs_submount) },
	{ 0xd3edf574, __VMLINUX_SYMBOL_STR(forget_all_cached_acls) },
	{ 0xf3ba48f1, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xc8bf916f, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0x804d57c7, __VMLINUX_SYMBOL_STR(nfs_access_zap_cache) },
	{ 0xdbd64179, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0xf9e7ed6b, __VMLINUX_SYMBOL_STR(nfs_dentry_operations) },
	{ 0x1c53386f, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0x7614e146, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0xc39ede69, __VMLINUX_SYMBOL_STR(nlmclnt_proc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xa8f585ee, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,nfs_acl,lockd";

