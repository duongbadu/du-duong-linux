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
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x326d0cee, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xc431cf86, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x8ea75191, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0xd498b757, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x86bb46a3, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x110e180a, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x5a70dea, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xac66ba98, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x19b97b95, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x66e29a4b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x99670ebc, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x9d7d788d, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9a928a70, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x82d910e0, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x654ae439, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xcdb04102, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x3a9ffc5f, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x351ded96, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0x8c7eef6, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xd6770494, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x24e1a8e1, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xd53a912e, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x48c9705e, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xdb09f934, __VMLINUX_SYMBOL_STR(ip_md_tunnel_xmit) },
	{ 0x5a5023b8, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x787e4277, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x8a0cbed1, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x32b531aa, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x8ac247cc, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xd2999bc5, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";

