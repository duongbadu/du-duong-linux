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
	{ 0x60bd9f99, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xbfadb787, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0xa00e53f2, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_add) },
	{ 0x1a1b7e70, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbcc5f381, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0x1623bf37, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0xd83395c2, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xd32178d3, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x24b330a1, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x35632a29, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xbc58febf, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_destroy) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x301e37e6, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x7fd2e75c, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_proto_gre";

