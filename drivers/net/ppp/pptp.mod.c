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
	{ 0x52d9e0fb, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x90aecff0, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x6b709279, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x24627b79, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xe5cc4489, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xf083efec, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x2c4d5bc7, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x23892551, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xd1fa164a, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0xecdaa784, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xf3b81ea7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xd90fe468, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0x1a2e3b4c, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x4bff4342, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x685ec44a, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xdb7ddb58, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x73b1d14d, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0xf4ff0dcf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4db0a157, __VMLINUX_SYMBOL_STR(ppp_register_channel) },
	{ 0x4afe73ed, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xa45a461, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xc232c229, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x5b56e022, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x13c2e425, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0x217207fa, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1e6fda6e, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x2262cf77, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x70c6ac5d, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc32ed92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8f029df2, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc2082581, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xca7b3033, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xa870c7e, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9b2a002b, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x616afe29, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,gre,ppp_generic";

