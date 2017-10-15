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
	{ 0x8c8ca271, __VMLINUX_SYMBOL_STR(lwtunnel_encap_del_ops) },
	{ 0x37a3ac3d, __VMLINUX_SYMBOL_STR(lwtunnel_encap_add_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf67d707a, __VMLINUX_SYMBOL_STR(nla_get_labels) },
	{ 0x9d9c2043, __VMLINUX_SYMBOL_STR(lwtunnel_state_alloc) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x9e09dd85, __VMLINUX_SYMBOL_STR(nla_put_labels) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x7f552fbb, __VMLINUX_SYMBOL_STR(neigh_xmit) },
	{ 0x258e3070, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x323e837b, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc24ce00c, __VMLINUX_SYMBOL_STR(mpls_pkt_too_big) },
	{ 0xb6f326e3, __VMLINUX_SYMBOL_STR(mpls_dev_mtu) },
	{ 0x4ab23172, __VMLINUX_SYMBOL_STR(mpls_output_possible) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mpls_router";

