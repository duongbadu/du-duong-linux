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
	{ 0xa45a461, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x114ecc46, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x86cb5820, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xa8c83a9e, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x4403d421, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xb1af6da0, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0x4afe73ed, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x5b56e022, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x5c42024c, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x885b9e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xc2082581, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xcb670cb8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xcc559d99, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x4406b0fc, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x16d55ce0, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xb0b637a4, __VMLINUX_SYMBOL_STR(compat_sock_common_setsockopt) },
	{ 0xd0542f8c, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xd5aa09cf, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xf8b8edbe, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xc32ed92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x52d9e0fb, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xa4ca95cd, __VMLINUX_SYMBOL_STR(compat_sock_common_getsockopt) },
	{ 0xf3b81ea7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xcb751a35, __VMLINUX_SYMBOL_STR(compat_ip_getsockopt) },
	{ 0xdc386bde, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0xad4c4cc5, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xff3fcdb, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xc232c229, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2c4d5bc7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xecdaa784, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x79024b1b, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xd2eaf036, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x39505f81, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xc9f41eda, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x73b1d14d, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x67e45ca2, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xce36025d, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0x685ec44a, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x1cbc3d98, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x82e79af3, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2a4095e0, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1a2e3b4c, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x326b7b4a, __VMLINUX_SYMBOL_STR(compat_ip_setsockopt) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x70c6ac5d, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x8f8634f6, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x654ae439, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xcc0a765b, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69ad5e07, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xc314d3c3, __VMLINUX_SYMBOL_STR(__udp_disconnect) },
	{ 0x1c7c0431, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0xfff83154, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x7b9de9f2, __VMLINUX_SYMBOL_STR(__ip4_datagram_connect) },
	{ 0xb418ee71, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x299d84a6, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc47bfbf5, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0xa8903f9c, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0x5f887304, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "280DE2EA2B67556AA144FAD");
