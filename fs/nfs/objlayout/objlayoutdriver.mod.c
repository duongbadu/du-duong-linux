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
	{ 0x5bfac336, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x13c4724f, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x6044a70b, __VMLINUX_SYMBOL_STR(ore_read) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x7d5c7fe9, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xd780ffe9, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0x4f3cb893, __VMLINUX_SYMBOL_STR(ore_put_io_state) },
	{ 0xaf5a4e30, __VMLINUX_SYMBOL_STR(ore_write) },
	{ 0x6daf086d, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xa7ef6ffa, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x307751bb, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xa5d15954, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0x8b2da835, __VMLINUX_SYMBOL_STR(osduld_info_lookup) },
	{ 0x148d08f7, __VMLINUX_SYMBOL_STR(pnfs_generic_sync) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x26c20de3, __VMLINUX_SYMBOL_STR(ore_check_io) },
	{ 0x4ec74210, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf989ff22, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xe018bf28, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x70e6a057, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x28806871, __VMLINUX_SYMBOL_STR(ore_verify_layout) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x168f7377, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf4fded96, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x53efe980, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x77d7ee61, __VMLINUX_SYMBOL_STR(nfs_pgio_current_mirror) },
	{ 0xf8c24dec, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0xf467845b, __VMLINUX_SYMBOL_STR(ore_get_rw_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8e8bf6e0, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xf3ba48f1, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xf02baecf, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x52d56a6b, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x5cb45915, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x997e459c, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,sunrpc,libore,nfs,osd";

