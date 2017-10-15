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
	{ 0x6404b346, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xf817ef2e, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x772c7e1a, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0xbc8c8bf6, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0x402aaab3, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0xb03a8adc, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0x9e140986, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0x84cf5e77, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0x3af7962d, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0x83434605, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0x9cf63a5a, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0x60bd9f99, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd995e933, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0x35632a29, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x301e37e6, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xe069b80a, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xaf6d9c28, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xcfe1cf59, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd7529b36, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";

