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
	{ 0x6c118537, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x758a8717, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x13b3be83, __VMLINUX_SYMBOL_STR(qlt_lport_register) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x74b0ed2, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x6e8896ab, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x273aec30, __VMLINUX_SYMBOL_STR(transport_deregister_session_configfs) },
	{ 0xd222ed35, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x9f4fd552, __VMLINUX_SYMBOL_STR(target_alloc_session) },
	{ 0x946aad, __VMLINUX_SYMBOL_STR(qlt_put_sess) },
	{ 0x2b226525, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0xa2aadf9f, __VMLINUX_SYMBOL_STR(qlt_rdy_to_xfer) },
	{ 0xfc608d5c, __VMLINUX_SYMBOL_STR(qlt_abort_cmd) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x96e1abc5, __VMLINUX_SYMBOL_STR(btree_init) },
	{ 0x182048e8, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0xddf5ae1f, __VMLINUX_SYMBOL_STR(transport_generic_request_failure) },
	{ 0xe32b84f9, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0xce12d037, __VMLINUX_SYMBOL_STR(btree_insert) },
	{ 0xcd5d4ef9, __VMLINUX_SYMBOL_STR(btree_update) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x3e54b244, __VMLINUX_SYMBOL_STR(btree_lookup) },
	{ 0x76a90a88, __VMLINUX_SYMBOL_STR(qlt_stop_phase2) },
	{ 0x45b7d6a0, __VMLINUX_SYMBOL_STR(btree_destroy) },
	{ 0xfb25ce06, __VMLINUX_SYMBOL_STR(btree_get_prev) },
	{ 0x12ea3c14, __VMLINUX_SYMBOL_STR(btree_remove) },
	{ 0x6536953b, __VMLINUX_SYMBOL_STR(btree_last) },
	{ 0xf331236f, __VMLINUX_SYMBOL_STR(btree_geo32) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x49b688e4, __VMLINUX_SYMBOL_STR(qlt_lport_deregister) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd4bd1a35, __VMLINUX_SYMBOL_STR(target_depend_item) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x6a94b2c5, __VMLINUX_SYMBOL_STR(target_undepend_item) },
	{ 0x7e9d4ed7, __VMLINUX_SYMBOL_STR(target_show_dynamic_sessions) },
	{ 0x3f5b916e, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0xdad6450d, __VMLINUX_SYMBOL_STR(qlt_free_mcmd) },
	{ 0xbb547fab, __VMLINUX_SYMBOL_STR(qlt_free_cmd) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x4ba3f9d8, __VMLINUX_SYMBOL_STR(qlt_xmit_response) },
	{ 0x2820b66d, __VMLINUX_SYMBOL_STR(qlt_xmit_tm_rsp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6c21d876, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0xaf922645, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0xa4fc745c, __VMLINUX_SYMBOL_STR(fc_vport_create) },
	{ 0xc87e619e, __VMLINUX_SYMBOL_STR(fc_vport_terminate) },
	{ 0x53f8bd6c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x3ab9364d, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x971af21b, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9a01dcb9, __VMLINUX_SYMBOL_STR(qlt_enable_vha) },
	{ 0xb4b76fc0, __VMLINUX_SYMBOL_STR(qlt_stop_phase1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,qla2xxx,scsi_mod,scsi_transport_fc";

