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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x85c06a73, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x2dff6be0, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x42239132, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x11b969af, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x3edc7686, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0xd41ff142, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0x68f772fb, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0x4aebb369, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xc6d71142, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xa8138584, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xedbb6d30, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x4dacb974, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x8487a7ca, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc317a085, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x9f2fd348, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0xc2325ae0, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0xdc1cdb1f, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xe4d62036, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x3898f9fa, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x6e87b8c6, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0xdca0af25, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x70739ef1, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x44bab4ad, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x279bf389, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0xe2a50d80, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0x1d375529, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x96aba385, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x301e37e6, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x55597097, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x7fd2e75c, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x487551de, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";

