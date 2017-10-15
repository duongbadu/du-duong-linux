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
	{ 0x8e26fccf, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xa9e40b00, __VMLINUX_SYMBOL_STR(ldlm_lock_decref) },
	{ 0xde7cdec6, __VMLINUX_SYMBOL_STR(class_disconnect) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeceac781, __VMLINUX_SYMBOL_STR(cfs_fail_val) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3450c289, __VMLINUX_SYMBOL_STR(libcfs_kkuc_group_rem) },
	{ 0x8da9ad2f, __VMLINUX_SYMBOL_STR(ptlrpc_req_finished) },
	{ 0x727585b5, __VMLINUX_SYMBOL_STR(class_exp2obd) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x26f3d3bd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8010a55a, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0xdf2789c0, __VMLINUX_SYMBOL_STR(cfs_curproc_cap_pack) },
	{ 0xd3dae408, __VMLINUX_SYMBOL_STR(ldlm_it2str) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0x33684ad8, __VMLINUX_SYMBOL_STR(class_find_client_obd) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1a5ecd95, __VMLINUX_SYMBOL_STR(fld_client_debugfs_fini) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x89831b48, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x97dc0659, __VMLINUX_SYMBOL_STR(class_export_get) },
	{ 0x7041c655, __VMLINUX_SYMBOL_STR(lprocfs_obd_cleanup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4ba1f569, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x7bbf8001, __VMLINUX_SYMBOL_STR(RMF_MDT_BODY) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x33bc642d, __VMLINUX_SYMBOL_STR(ldebugfs_seq_create) },
	{ 0x3b709cd7, __VMLINUX_SYMBOL_STR(lprocfs_single_release) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6ceb5f89, __VMLINUX_SYMBOL_STR(req_capsule_server_get) },
	{ 0x865483a9, __VMLINUX_SYMBOL_STR(libcfs_kvzalloc) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1f60d125, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x1d3727ed, __VMLINUX_SYMBOL_STR(fld_client_init) },
	{ 0xf2003cac, __VMLINUX_SYMBOL_STR(lprocfs_obd_setup) },
	{ 0x143efa99, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x8c2bacdc, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xc4147359, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x7f7dccfb, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x5415903d, __VMLINUX_SYMBOL_STR(class_connect) },
	{ 0xd0772e5e, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3567bf09, __VMLINUX_SYMBOL_STR(fld_client_fini) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341df6c4, __VMLINUX_SYMBOL_STR(class_conn2export) },
	{ 0x6fcb7042, __VMLINUX_SYMBOL_STR(lprocfs_counter_add) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xcb7e8cbb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xfe90add2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xcf61bacb, __VMLINUX_SYMBOL_STR(__cfs_fail_check_set) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0xd25cdb9c, __VMLINUX_SYMBOL_STR(fld_client_lookup) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0x753e06e5, __VMLINUX_SYMBOL_STR(fget) },
	{ 0xbd3fd3b6, __VMLINUX_SYMBOL_STR(libcfs_kkuc_group_add) },
	{ 0x7fda989d, __VMLINUX_SYMBOL_STR(cfs_fail_loc) },
	{ 0xfaec2aee, __VMLINUX_SYMBOL_STR(class_register_type) },
	{ 0xe56d529, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xb7f01ef2, __VMLINUX_SYMBOL_STR(fld_client_add_target) },
	{ 0xc4791990, __VMLINUX_SYMBOL_STR(class_export_put) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x742559b1, __VMLINUX_SYMBOL_STR(class_unregister_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptlrpc,obdclass,libcfs,fld";


MODULE_INFO(srcversion, "E7BDCD74DAA9A2A8C9BA27D");
