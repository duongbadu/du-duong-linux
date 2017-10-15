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
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x714d038f, __VMLINUX_SYMBOL_STR(iscsit_unregister_transport) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xf361c03a, __VMLINUX_SYMBOL_STR(iscsit_register_transport) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x907df803, __VMLINUX_SYMBOL_STR(rdma_event_msg) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xb23ce60e, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0xc4643a2c, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0x2595b55e, __VMLINUX_SYMBOL_STR(rdma_create_id) },
	{ 0xd0d20369, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x8092e3b2, __VMLINUX_SYMBOL_STR(iscsit_set_unsoliticed_dataout) },
	{ 0x21d6e646, __VMLINUX_SYMBOL_STR(iscsit_process_nop_out) },
	{ 0x5d56b936, __VMLINUX_SYMBOL_STR(iscsit_setup_nop_out) },
	{ 0xed6a9180, __VMLINUX_SYMBOL_STR(iscsit_sequence_cmd) },
	{ 0xa6ef69b4, __VMLINUX_SYMBOL_STR(iscsit_process_scsi_cmd) },
	{ 0xff6f16f7, __VMLINUX_SYMBOL_STR(iscsit_setup_scsi_cmd) },
	{ 0xd1c2b92, __VMLINUX_SYMBOL_STR(iscsit_handle_task_mgt_cmd) },
	{ 0xc75c88cc, __VMLINUX_SYMBOL_STR(iscsit_process_text_cmd) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x545ea7ad, __VMLINUX_SYMBOL_STR(iscsit_setup_text_cmd) },
	{ 0x401df114, __VMLINUX_SYMBOL_STR(iscsit_find_cmd_from_itt) },
	{ 0x968e73b7, __VMLINUX_SYMBOL_STR(iscsit_handle_logout_cmd) },
	{ 0xd9b570da, __VMLINUX_SYMBOL_STR(iscsit_check_dataout_payload) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x58a0af18, __VMLINUX_SYMBOL_STR(iscsit_check_dataout_hdr) },
	{ 0x67401ffc, __VMLINUX_SYMBOL_STR(iscsit_allocate_cmd) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd222ed35, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0x2b226525, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0xf6b41035, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x74b0ed2, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x5860c9b4, __VMLINUX_SYMBOL_STR(transport_send_check_condition_and_sense) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe86fe345, __VMLINUX_SYMBOL_STR(iscsit_cause_connection_reinstatement) },
	{ 0xe5840ec6, __VMLINUX_SYMBOL_STR(ib_wc_status_msg) },
	{ 0x1b228b47, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0xf6ed3334, __VMLINUX_SYMBOL_STR(ib_event_msg) },
	{ 0xa00259e9, __VMLINUX_SYMBOL_STR(rdma_accept) },
	{ 0x7512ed9, __VMLINUX_SYMBOL_STR(__ib_alloc_pd) },
	{ 0xf46a47ed, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0xf1d07104, __VMLINUX_SYMBOL_STR(ib_alloc_cq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf483ae8e, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0x41753fd6, __VMLINUX_SYMBOL_STR(iscsit_build_reject) },
	{ 0x24c03fd6, __VMLINUX_SYMBOL_STR(iscsit_build_task_mgt_rsp) },
	{ 0x33e93c93, __VMLINUX_SYMBOL_STR(iscsit_build_logout_rsp) },
	{ 0x8b575b0b, __VMLINUX_SYMBOL_STR(iscsit_build_text_rsp) },
	{ 0x73555383, __VMLINUX_SYMBOL_STR(iscsit_build_nopin_rsp) },
	{ 0xc8c0d5fd, __VMLINUX_SYMBOL_STR(iscsit_build_rsp_pdu) },
	{ 0x207e208d, __VMLINUX_SYMBOL_STR(ib_drain_qp) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd99127f9, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x89ed80d1, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0x7f1ac199, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x21907cfa, __VMLINUX_SYMBOL_STR(ib_free_cq) },
	{ 0xf33a5122, __VMLINUX_SYMBOL_STR(iscsit_logout_post_handler) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xf572af1a, __VMLINUX_SYMBOL_STR(iscsit_tmr_post_handler) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe65dac8f, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_signature_init) },
	{ 0x63457ac9, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_post) },
	{ 0xb5dbd64e, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_init) },
	{ 0x71b761e1, __VMLINUX_SYMBOL_STR(ib_check_mr_status) },
	{ 0x3f5b916e, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0x41bcc057, __VMLINUX_SYMBOL_STR(iscsit_release_cmd) },
	{ 0x6c21d876, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0xb2bbbf75, __VMLINUX_SYMBOL_STR(iscsit_stop_dataout_timer) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x80887775, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_destroy_signature) },
	{ 0x1ed223bb, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_destroy) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iscsi_target_mod,rdma_cm,target_core_mod,ib_core";


MODULE_INFO(srcversion, "035F203F0E1292571F520B1");
