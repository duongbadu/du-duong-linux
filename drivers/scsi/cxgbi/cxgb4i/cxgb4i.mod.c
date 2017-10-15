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
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x354a9f40, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x4766e06d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x97989075, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x17408998, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xb0138b28, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x9df93a3b, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0xf643bcb7, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xef346615, __VMLINUX_SYMBOL_STR(cxgbi_attr_is_visible) },
	{ 0x4387d74e, __VMLINUX_SYMBOL_STR(cxgbi_ep_disconnect) },
	{ 0xd5fdd353, __VMLINUX_SYMBOL_STR(cxgbi_ep_poll) },
	{ 0x4706f41a, __VMLINUX_SYMBOL_STR(cxgbi_ep_connect) },
	{ 0x23aa7c, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0x678e6f2a, __VMLINUX_SYMBOL_STR(cxgbi_parse_pdu_itt) },
	{ 0x9516e608, __VMLINUX_SYMBOL_STR(cxgbi_conn_init_pdu) },
	{ 0x1e514efa, __VMLINUX_SYMBOL_STR(cxgbi_conn_xmit_pdu) },
	{ 0xdac470f2, __VMLINUX_SYMBOL_STR(cxgbi_conn_alloc_pdu) },
	{ 0xfa58e7c0, __VMLINUX_SYMBOL_STR(cxgbi_cleanup_task) },
	{ 0xa17bb00a, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x7e06d949, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x201927cf, __VMLINUX_SYMBOL_STR(cxgbi_get_conn_stats) },
	{ 0x46041016, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0xc779e836, __VMLINUX_SYMBOL_STR(cxgbi_set_host_param) },
	{ 0x7bb63500, __VMLINUX_SYMBOL_STR(cxgbi_get_host_param) },
	{ 0xc17152bb, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x4c112cca, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0xc72d3352, __VMLINUX_SYMBOL_STR(cxgbi_get_ep_param) },
	{ 0x65ea2add, __VMLINUX_SYMBOL_STR(cxgbi_set_conn_param) },
	{ 0x721996c8, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x45c062f9, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xc953672, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x919979e9, __VMLINUX_SYMBOL_STR(cxgbi_bind_conn) },
	{ 0xf3b93d93, __VMLINUX_SYMBOL_STR(cxgbi_create_conn) },
	{ 0x25ef1156, __VMLINUX_SYMBOL_STR(cxgbi_destroy_session) },
	{ 0xfd8fd1c9, __VMLINUX_SYMBOL_STR(cxgbi_create_session) },
	{ 0xca75854f, __VMLINUX_SYMBOL_STR(cxgbi_iscsi_cleanup) },
	{ 0x7fdb6004, __VMLINUX_SYMBOL_STR(cxgbi_device_unregister_all) },
	{ 0x66bc4283, __VMLINUX_SYMBOL_STR(cxgb4_unregister_uld) },
	{ 0xf4581c87, __VMLINUX_SYMBOL_STR(cxgb4_register_uld) },
	{ 0x93a5cb73, __VMLINUX_SYMBOL_STR(cxgbi_iscsi_init) },
	{ 0x7a2b207a, __VMLINUX_SYMBOL_STR(cxgbi_sock_closed) },
	{ 0xb38e59cd, __VMLINUX_SYMBOL_STR(cxgbi_ddp_set_one_ppod) },
	{ 0xc0f0aed5, __VMLINUX_SYMBOL_STR(cxgb4_l2t_release) },
	{ 0xa32e5639, __VMLINUX_SYMBOL_STR(cxgbi_sock_purge_wr_queue) },
	{ 0xf0c3cc3a, __VMLINUX_SYMBOL_STR(cxgbi_sock_free_cpl_skbs) },
	{ 0x6649e872, __VMLINUX_SYMBOL_STR(cxgb4_clip_release) },
	{ 0x3aa0f8cc, __VMLINUX_SYMBOL_STR(cxgb4_clip_get) },
	{ 0x6f6ebbe3, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xcf4fc59a, __VMLINUX_SYMBOL_STR(cxgb4_port_idx) },
	{ 0x67287637, __VMLINUX_SYMBOL_STR(cxgb4_port_chan) },
	{ 0xd69a0294, __VMLINUX_SYMBOL_STR(cxgb4_best_mtu) },
	{ 0x6d144ef0, __VMLINUX_SYMBOL_STR(cxgb4_l2t_get) },
	{ 0x9ecd5e4, __VMLINUX_SYMBOL_STR(cxgb4_alloc_atid) },
	{ 0x820c8312, __VMLINUX_SYMBOL_STR(cxgbi_hbas_add) },
	{ 0x1f687489, __VMLINUX_SYMBOL_STR(cxgbi_device_unregister) },
	{ 0x59a4e6cd, __VMLINUX_SYMBOL_STR(cxgbi_device_portmap_create) },
	{ 0xecd6555, __VMLINUX_SYMBOL_STR(cxgbi_ddp_ppm_setup) },
	{ 0xcbfa957a, __VMLINUX_SYMBOL_STR(cxgb4_port_viid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9b8939c8, __VMLINUX_SYMBOL_STR(cxgbi_device_register) },
	{ 0xdea68117, __VMLINUX_SYMBOL_STR(cxgbi_sock_skb_entail) },
	{ 0x606d1d87, __VMLINUX_SYMBOL_STR(cxgb4_pktgl_to_skb) },
	{ 0x745e9fca, __VMLINUX_SYMBOL_STR(cxgbi_sock_act_open_req_arp_failure) },
	{ 0xebae1c1, __VMLINUX_SYMBOL_STR(cxgb4_free_atid) },
	{ 0x57525e15, __VMLINUX_SYMBOL_STR(cxgbi_conn_tx_open) },
	{ 0xd068f0ec, __VMLINUX_SYMBOL_STR(cxgbi_sock_established) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xb0200569, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x50b241cc, __VMLINUX_SYMBOL_STR(cxgbi_conn_pdu_ready) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x2afb9620, __VMLINUX_SYMBOL_STR(cxgb4_l2t_send) },
	{ 0x68167338, __VMLINUX_SYMBOL_STR(cxgb4_select_ntuple) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe883294b, __VMLINUX_SYMBOL_STR(cxgb4_remove_tid) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x83ea4966, __VMLINUX_SYMBOL_STR(cxgbi_sock_fail_act_open) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x48a15334, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_peer_close) },
	{ 0xc30f156, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_abort_rpl) },
	{ 0x7519ae42, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_close_conn_rpl) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3b4a05e, __VMLINUX_SYMBOL_STR(cxgb4_ofld_send) },
	{ 0x335bb65e, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_wr_ack) },
	{ 0x66ba1246, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,libiscsi,libcxgbi,libiscsi_tcp,cxgb4";


MODULE_INFO(srcversion, "FC69CEA24E82C031A280034");
