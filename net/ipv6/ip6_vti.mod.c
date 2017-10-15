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
	{ 0x529aa5bd, __VMLINUX_SYMBOL_STR(ip6_tnl_get_link_net) },
	{ 0x499fe138, __VMLINUX_SYMBOL_STR(ip6_tnl_get_iflink) },
	{ 0xd498b757, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x5a70dea, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xac66ba98, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x51c9a659, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x66e29a4b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x7f933852, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x9d7d788d, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x9fc8bcff, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6a9d308b, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0xf38d4801, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xf3434173, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xe3dbf037, __VMLINUX_SYMBOL_STR(xfrm6_rcv_tnl) },
	{ 0x5b7fc2d5, __VMLINUX_SYMBOL_STR(ip6_tnl_rcv_ctl) },
	{ 0x654ae439, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x1f54ef6e, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x207217d0, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x2ab5e5ca, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x8bc94d5, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x2d8880a6, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0xfe72bc4f, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x37bd84b3, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x119f5412, __VMLINUX_SYMBOL_STR(ip6_tnl_xmit_ctl) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x5b56e022, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x85adab61, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0xf9503407, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2a332d3f, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x3662a610, __VMLINUX_SYMBOL_STR(ip6_tnl_get_cap) },
	{ 0x709d2ebf, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd980759f, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xb6a7be05, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tunnel";

