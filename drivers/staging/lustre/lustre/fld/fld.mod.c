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
	{ 0x3f35a11d, __VMLINUX_SYMBOL_STR(RQF_FLD_READ) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8da9ad2f, __VMLINUX_SYMBOL_STR(ptlrpc_req_finished) },
	{ 0x9660ace0, __VMLINUX_SYMBOL_STR(RMF_FLD_MDFLD) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x26f3d3bd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xda24d491, __VMLINUX_SYMBOL_STR(obd_put_request_slot) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0xfdf7f267, __VMLINUX_SYMBOL_STR(ldebugfs_register) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x89831b48, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x97dc0659, __VMLINUX_SYMBOL_STR(class_export_get) },
	{ 0x301aa045, __VMLINUX_SYMBOL_STR(ptlrpc_request_set_replen) },
	{ 0x496327dd, __VMLINUX_SYMBOL_STR(ldebugfs_add_vars) },
	{ 0xef1aeca9, __VMLINUX_SYMBOL_STR(RMF_FLD_OPC) },
	{ 0xeba989c7, __VMLINUX_SYMBOL_STR(ptlrpc_request_alloc_pack) },
	{ 0x3b709cd7, __VMLINUX_SYMBOL_STR(lprocfs_single_release) },
	{ 0xbd096246, __VMLINUX_SYMBOL_STR(ptlrpc_at_set_req_timeout) },
	{ 0x6ceb5f89, __VMLINUX_SYMBOL_STR(req_capsule_server_get) },
	{ 0x8fd1152e, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x8e9abe4d, __VMLINUX_SYMBOL_STR(RMF_GENERIC_DATA) },
	{ 0x6320d207, __VMLINUX_SYMBOL_STR(obd_get_request_slot) },
	{ 0x18bc1272, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xc3b160b4, __VMLINUX_SYMBOL_STR(debugfs_lustre_root) },
	{ 0x75c3b293, __VMLINUX_SYMBOL_STR(class_exp2cliimp) },
	{ 0x1543bdb3, __VMLINUX_SYMBOL_STR(ldebugfs_remove) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xcb7e8cbb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0xc797730a, __VMLINUX_SYMBOL_STR(ptlrpc_queue_wait) },
	{ 0xbf2270a3, __VMLINUX_SYMBOL_STR(req_capsule_client_get) },
	{ 0x30ca8f39, __VMLINUX_SYMBOL_STR(req_capsule_set_size) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x515f93b, __VMLINUX_SYMBOL_STR(RQF_FLD_QUERY) },
	{ 0xc4791990, __VMLINUX_SYMBOL_STR(class_export_put) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptlrpc,obdclass,libcfs";


MODULE_INFO(srcversion, "2EA324BF7F518494ECBC44C");
