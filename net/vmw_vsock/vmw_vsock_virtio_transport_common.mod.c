#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa45a461, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x3ecbb76f, __VMLINUX_SYMBOL_STR(__vsock_create) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc79d5ef, __VMLINUX_SYMBOL_STR(vm_sockets_get_local_cid) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x885b9e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2a1314cc, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x6e0992d1, __VMLINUX_SYMBOL_STR(vsock_stream_has_space) },
	{ 0x713cfb07, __VMLINUX_SYMBOL_STR(vsock_core_get_transport) },
	{ 0xd64b2aec, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xe5750ee, __VMLINUX_SYMBOL_STR(vsock_find_connected_socket) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x94493b31, __VMLINUX_SYMBOL_STR(vsock_stream_has_data) },
	{ 0xc232c229, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xf40e9158, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xee6dc507, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0xad5f0017, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0x15c0c57c, __VMLINUX_SYMBOL_STR(vsock_addr_init) },
	{ 0x2e4d11e8, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x32df8d3c, __VMLINUX_SYMBOL_STR(vsock_find_bound_socket) },
	{ 0xdc909ca8, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4dae5252, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x61520529, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0x37835914, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x816fb992, __VMLINUX_SYMBOL_STR(vsock_remove_sock) },
	{ 0xff2be877, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x8d32b478, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x1ceb0f14, __VMLINUX_SYMBOL_STR(vsock_insert_connected) },
	{ 0xe2412a00, __VMLINUX_SYMBOL_STR(vsock_enqueue_accept) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vsock";

