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
	{ 0x326d0cee, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xc431cf86, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x8ea75191, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0xd498b757, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x86bb46a3, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x110e180a, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x5a70dea, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xac66ba98, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x8131a3bc, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x66e29a4b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x8e4270f6, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x9d7d788d, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9a928a70, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x6a9d308b, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x82d910e0, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x5475b389, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x654ae439, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xd6770494, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x207217d0, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x8c7eef6, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x8bc94d5, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x24e1a8e1, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xd53a912e, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xfe72bc4f, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x37bd84b3, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x2d8880a6, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5b56e022, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x85adab61, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0xf9503407, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x787e4277, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x8a0cbed1, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x32b531aa, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x8ac247cc, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel";

