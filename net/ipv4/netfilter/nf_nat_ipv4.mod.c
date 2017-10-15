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
	{ 0xc65d7941, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0xa29ac80a, __VMLINUX_SYMBOL_STR(nf_ct_kill_acct) },
	{ 0x5b56e022, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xfd9d03f0, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7899cb2f, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x7ec3d770, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd03c7700, __VMLINUX_SYMBOL_STR(secure_ipv4_port_ephemeral) },
	{ 0x4aebb369, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x28e73eb5, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0xd2c4db32, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xd400a071, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0x2e37a24d, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x75ebf818, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x87ff2e28, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xa3c421e3, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0xdcc3ff2f, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0xeb23ac6a, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0x6fde6720, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";

