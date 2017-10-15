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
	{ 0x5c6a3a83, __VMLINUX_SYMBOL_STR(RQF_SEQ_QUERY) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8da9ad2f, __VMLINUX_SYMBOL_STR(ptlrpc_req_finished) },
	{ 0x26f3d3bd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xfdf7f267, __VMLINUX_SYMBOL_STR(ldebugfs_register) },
	{ 0x11495519, __VMLINUX_SYMBOL_STR(lprocfs_write_helper) },
	{ 0x1dc2051d, __VMLINUX_SYMBOL_STR(RMF_SEQ_OPC) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x89831b48, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x97dc0659, __VMLINUX_SYMBOL_STR(class_export_get) },
	{ 0x301aa045, __VMLINUX_SYMBOL_STR(ptlrpc_request_set_replen) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x496327dd, __VMLINUX_SYMBOL_STR(ldebugfs_add_vars) },
	{ 0xeba989c7, __VMLINUX_SYMBOL_STR(ptlrpc_request_alloc_pack) },
	{ 0x3b709cd7, __VMLINUX_SYMBOL_STR(lprocfs_single_release) },
	{ 0xbd096246, __VMLINUX_SYMBOL_STR(ptlrpc_at_set_req_timeout) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x6ceb5f89, __VMLINUX_SYMBOL_STR(req_capsule_server_get) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2585a629, __VMLINUX_SYMBOL_STR(RMF_SEQ_RANGE) },
	{ 0xc3b160b4, __VMLINUX_SYMBOL_STR(debugfs_lustre_root) },
	{ 0x75c3b293, __VMLINUX_SYMBOL_STR(class_exp2cliimp) },
	{ 0x1543bdb3, __VMLINUX_SYMBOL_STR(ldebugfs_remove) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xcb7e8cbb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xcf61bacb, __VMLINUX_SYMBOL_STR(__cfs_fail_check_set) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0xc797730a, __VMLINUX_SYMBOL_STR(ptlrpc_queue_wait) },
	{ 0x7fda989d, __VMLINUX_SYMBOL_STR(cfs_fail_loc) },
	{ 0xbf2270a3, __VMLINUX_SYMBOL_STR(req_capsule_client_get) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xc4791990, __VMLINUX_SYMBOL_STR(class_export_put) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptlrpc,libcfs,obdclass";


MODULE_INFO(srcversion, "76A68017EC08907ED27EF29");
