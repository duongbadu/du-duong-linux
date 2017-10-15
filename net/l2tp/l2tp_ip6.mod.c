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
	{ 0x4403d421, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xcfe3cb4, __VMLINUX_SYMBOL_STR(inet6_hash) },
	{ 0x71bc2760, __VMLINUX_SYMBOL_STR(compat_ipv6_getsockopt) },
	{ 0x8b30bc14, __VMLINUX_SYMBOL_STR(compat_ipv6_setsockopt) },
	{ 0x7da10652, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0xaa9a3277, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0x7a8573bd, __VMLINUX_SYMBOL_STR(l2tp_ioctl) },
	{ 0xf8b8edbe, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x52d9e0fb, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd5aa09cf, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xcc559d99, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xa4ca95cd, __VMLINUX_SYMBOL_STR(compat_sock_common_getsockopt) },
	{ 0xb0b637a4, __VMLINUX_SYMBOL_STR(compat_sock_common_setsockopt) },
	{ 0xfff83154, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x8f8634f6, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x79024b1b, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x2c4d5bc7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xc6781b43, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x2a4095e0, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xecdaa784, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xf3b81ea7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xd0542f8c, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x60d1bb89, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xc1eea8a1, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x8e27d0ef, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x47679a71, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0x1a2e3b4c, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xb2db284, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x19bbc157, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x685ec44a, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc2082581, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x16d55ce0, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x4f84f7a3, __VMLINUX_SYMBOL_STR(__ip6_datagram_connect) },
	{ 0xc314d3c3, __VMLINUX_SYMBOL_STR(__udp_disconnect) },
	{ 0x3e3a89fc, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x69ad5e07, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x7a8c0f53, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0xba7ed0ac, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0xf8668d51, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x7470cbcd, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0xc049fc74, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x3f3d2197, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0x5b56e022, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x6f6c7d9e, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xffb74af4, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0x8177b814, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0x8bf773c6, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc599e55e, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0xdc386bde, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x39505f81, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x357d74d1, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0x5f887304, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xad4c4cc5, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xcb670cb8, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xfe2af5c5, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0xe8b8d84c, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xa45a461, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xc232c229, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x73b1d14d, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x654ae439, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x86cb5820, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xc32ed92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x114ecc46, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x5c42024c, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x299d84a6, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "DBF5C55E85BA0C6FB361D31");
