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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xa9e40b00, __VMLINUX_SYMBOL_STR(ldlm_lock_decref) },
	{ 0xde7cdec6, __VMLINUX_SYMBOL_STR(class_disconnect) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x727585b5, __VMLINUX_SYMBOL_STR(class_exp2obd) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa68312cd, __VMLINUX_SYMBOL_STR(lu_context_key_quiesce_many) },
	{ 0x1e5d9300, __VMLINUX_SYMBOL_STR(cl_page_size) },
	{ 0x80fc0ab6, __VMLINUX_SYMBOL_STR(lu_object_header_fini) },
	{ 0x9a19e717, __VMLINUX_SYMBOL_STR(cl_io_submit_sync) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0xf0bc9c3e, __VMLINUX_SYMBOL_STR(lu_context_exit) },
	{ 0xf3a81b3, __VMLINUX_SYMBOL_STR(cl_io_init) },
	{ 0x8f61e80, __VMLINUX_SYMBOL_STR(cl_lock_slice_add) },
	{ 0x7d46a4d3, __VMLINUX_SYMBOL_STR(cl_io_commit_async) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0xa034fdc, __VMLINUX_SYMBOL_STR(cl_2queue_disown) },
	{ 0xa7e16614, __VMLINUX_SYMBOL_STR(lu_kmem_init) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0x917721a1, __VMLINUX_SYMBOL_STR(cl_object_find) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd81864e6, __VMLINUX_SYMBOL_STR(class_name2obd) },
	{ 0x3b37a9c, __VMLINUX_SYMBOL_STR(lu_kmem_fini) },
	{ 0xdd082173, __VMLINUX_SYMBOL_STR(cl_object_header_init) },
	{ 0xd14b3db0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x9b45e81b, __VMLINUX_SYMBOL_STR(cl_env_get) },
	{ 0x41292f22, __VMLINUX_SYMBOL_STR(cl_lock_request) },
	{ 0x370b610d, __VMLINUX_SYMBOL_STR(lu_object_init) },
	{ 0x4650db35, __VMLINUX_SYMBOL_STR(lu_context_enter) },
	{ 0xcaf860aa, __VMLINUX_SYMBOL_STR(obdo_to_ioobj) },
	{ 0x7ca7e4c4, __VMLINUX_SYMBOL_STR(lu_context_key_revive_many) },
	{ 0xef76f858, __VMLINUX_SYMBOL_STR(block_debug_setup) },
	{ 0x5b230aaf, __VMLINUX_SYMBOL_STR(cl_io_fini) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x419e0629, __VMLINUX_SYMBOL_STR(lu_site_init_finish) },
	{ 0x7cf2b13a, __VMLINUX_SYMBOL_STR(lu_device_fini) },
	{ 0x5ab642a2, __VMLINUX_SYMBOL_STR(lu_device_init) },
	{ 0x1e5a49aa, __VMLINUX_SYMBOL_STR(cl_page_put) },
	{ 0x27ad708, __VMLINUX_SYMBOL_STR(lu_context_key_register_many) },
	{ 0x75b335b2, __VMLINUX_SYMBOL_STR(cl_2queue_fini) },
	{ 0xf0113640, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbd6dd481, __VMLINUX_SYMBOL_STR(cl_env_put) },
	{ 0x810ba3f2, __VMLINUX_SYMBOL_STR(cl_page_slice_add) },
	{ 0xefd7f840, __VMLINUX_SYMBOL_STR(lu_context_key_degister_many) },
	{ 0x9bc9fd8e, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x5fe97b73, __VMLINUX_SYMBOL_STR(block_debug_check) },
	{ 0x35e2c97b, __VMLINUX_SYMBOL_STR(cl_index) },
	{ 0x405f0cd0, __VMLINUX_SYMBOL_STR(lu_object_add_top) },
	{ 0x5455f5a6, __VMLINUX_SYMBOL_STR(cl_object_put) },
	{ 0x5415903d, __VMLINUX_SYMBOL_STR(class_connect) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x82a27d45, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x25b51b74, __VMLINUX_SYMBOL_STR(cl_page_own) },
	{ 0x42884a2f, __VMLINUX_SYMBOL_STR(cl_lock_release) },
	{ 0xf888c185, __VMLINUX_SYMBOL_STR(cl_page_delete) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2fb9b3d3, __VMLINUX_SYMBOL_STR(cl_page_find) },
	{ 0xec524633, __VMLINUX_SYMBOL_STR(lu_env_fini) },
	{ 0x6f05d3cc, __VMLINUX_SYMBOL_STR(lu_site_purge) },
	{ 0xa0ac1bca, __VMLINUX_SYMBOL_STR(lu_object_fini) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd153c0dd, __VMLINUX_SYMBOL_STR(cl_2queue_discard) },
	{ 0x3a5929fc, __VMLINUX_SYMBOL_STR(cl_site_fini) },
	{ 0x341df6c4, __VMLINUX_SYMBOL_STR(class_conn2export) },
	{ 0x6fcb7042, __VMLINUX_SYMBOL_STR(lprocfs_counter_add) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x84c6fd73, __VMLINUX_SYMBOL_STR(cl_page_clip) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x640884dc, __VMLINUX_SYMBOL_STR(lu_context_key_get) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0xb5326333, __VMLINUX_SYMBOL_STR(cl_page_list_add) },
	{ 0x334a59b7, __VMLINUX_SYMBOL_STR(cl_2queue_init) },
	{ 0xec8fa9a7, __VMLINUX_SYMBOL_STR(lu_env_init) },
	{ 0xfaec2aee, __VMLINUX_SYMBOL_STR(class_register_type) },
	{ 0xa044d5f0, __VMLINUX_SYMBOL_STR(lu_object_add) },
	{ 0xc2424858, __VMLINUX_SYMBOL_STR(cl_site_init) },
	{ 0x5b9f87d0, __VMLINUX_SYMBOL_STR(cl_lock_at) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x742559b1, __VMLINUX_SYMBOL_STR(class_unregister_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptlrpc,obdclass,libcfs";


MODULE_INFO(srcversion, "4EEFD52AB72B69A10AAAFBE");
