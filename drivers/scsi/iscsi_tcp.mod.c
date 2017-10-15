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
	{ 0x4766e06d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x97989075, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x17408998, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xb0138b28, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x9df93a3b, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0xf643bcb7, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x23aa7c, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xbcf610e3, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0xa17bb00a, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x7e06d949, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x46041016, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x8c23c379, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0xc17152bb, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0xc953672, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xcf3a69e2, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xc2e1a6db, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x45c062f9, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xb6658a0b, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x7375aa76, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xa8a1b9f3, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaa2bcff5, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0x74b72567, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x34bf3c7d, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x47f36e5a, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x15ba61c2, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xe550305, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xf16fd1f7, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0xdcd717e6, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x6eed342d, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x721996c8, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0xe5e15807, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb16c89d8, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0xec29afb1, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x374d305e, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x9f23b2a9, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0x7d3ca88f, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x8ddf2141, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2d95dc7f, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x7f7dccfb, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x57c8a075, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x6d5ccc26, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xf8b8edbe, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xbb8ece8c, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0xabf5ab88, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x9616b034, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0x4c112cca, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0xca2dc7da, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xcaf4997d, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x79bc6f66, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb4538ff3, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0x297cfb07, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0x364a22c7, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x55025c0f, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x82c5d01d, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0x16dd0fa, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0xe033a6ed, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xd4a29826, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,libiscsi,libiscsi_tcp,scsi_transport_iscsi";

