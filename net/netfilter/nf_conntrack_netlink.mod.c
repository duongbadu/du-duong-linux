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
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xedbb6d30, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xae185487, __VMLINUX_SYMBOL_STR(nfnl_ct_hook) },
	{ 0xaa7f882c, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xdca0af25, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2f8d94f0, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0xc16094f6, __VMLINUX_SYMBOL_STR(nf_conntrack_eventmask_report) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd3ab3c2f, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0xb6689d5e, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x171b33bf, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x5055a616, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x7aabe874, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xc115eed2, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0xa550ddc, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x28eff409, __VMLINUX_SYMBOL_STR(nf_conntrack_hash) },
	{ 0x4289b80c, __VMLINUX_SYMBOL_STR(nf_conntrack_lock) },
	{ 0x1497885b, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xfdf530a0, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x35632a29, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x527e2b01, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0x24b330a1, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xcfe36344, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x6f6f1e02, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5aecbdde, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0xc9d9e8c1, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xa55fe3f2, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x86fbcefe, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0x1623bf37, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7fd2e75c, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xec8beba6, __VMLINUX_SYMBOL_STR(nf_ct_expect_hash) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0x49c47258, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xd83395c2, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x691a2f7, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf5c4850b, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x7e58d843, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8fa755d8, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x217a6406, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0xb2a190ff, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0x6f50d23, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xe35ba408, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6a18dc58, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0x632f3445, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x8ba06b9a, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x91237c63, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x59308f55, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0x487551de, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xd32178d3, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x50ef474c, __VMLINUX_SYMBOL_STR(nf_ct_tcp_seqadj_set) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";

