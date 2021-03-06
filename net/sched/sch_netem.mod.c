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
	{ 0x88e4f1b6, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xd6ab2b13, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x4832ac59, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x9e763530, __VMLINUX_SYMBOL_STR(reciprocal_value) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xdb4f9416, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xa535028c, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x5e33ad82, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0xdf2c2742, __VMLINUX_SYMBOL_STR(rb_last) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7eb0a794, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x6bffb32, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc89db623, __VMLINUX_SYMBOL_STR(skb_orphan_partial) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x224e0487, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0x1ad7cadc, __VMLINUX_SYMBOL_STR(kfree_skb_list) },
	{ 0xc1c83e1a, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x93f01cc8, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x53a2f594, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xf5f4f28d, __VMLINUX_SYMBOL_STR(rtnl_kfree_skbs) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x4c27d655, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x3431c461, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0x217a6406, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4f66d59, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

