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
	{ 0xd498b757, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xedbb6d30, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x5a70dea, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x3ff6208e, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdca0af25, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x8d2dcfbd, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x66e29a4b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xaec14692, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xcfe36344, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1f203348, __VMLINUX_SYMBOL_STR(get_net_ns_by_fd) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x61f2a7af, __VMLINUX_SYMBOL_STR(setup_udp_tunnel_sock) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd980759f, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7f7dccfb, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x6d5ccc26, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb6a7be05, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x72f71476, __VMLINUX_SYMBOL_STR(udp_tunnel_xmit_skb) },
	{ 0x258e3070, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfe72bc4f, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x5b56e022, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x70c6ac5d, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x902c1a49, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x351ded96, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0xe0729564, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc32ed92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x217a6406, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa86987d4, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x709d2ebf, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udp_tunnel";

