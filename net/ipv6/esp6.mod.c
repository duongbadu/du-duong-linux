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
	{ 0x1a7d9342, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0xe96d9323, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x51c9a659, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xe3923141, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x7f933852, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x9d2211b4, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xc32ed92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x81fd1a56, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x8b783df3, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x9f254d98, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe5e15807, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x9b7514ea, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb0200569, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x301e37e6, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7c3211d7, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xb795ba89, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0xeafce277, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5a8156f0, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1f54ef6e, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x207217d0, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x2ab5e5ca, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x8bc94d5, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

