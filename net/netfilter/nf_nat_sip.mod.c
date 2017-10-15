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
	{ 0xf817ef2e, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x6404b346, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x97286fa, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0x87ff2e28, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xac927364, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0x15480caf, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0xf08fcaac, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x36a5f0fe, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0xdea8e479, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0x48d6a933, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x60bd9f99, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x35632a29, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbdd6b81c, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0x305773f9, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0xe069b80a, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xaf6d9c28, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd7529b36, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";

