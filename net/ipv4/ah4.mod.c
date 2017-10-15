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
	{ 0x5475b389, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xc89a06b2, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x8131a3bc, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xe3923141, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x8e4270f6, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x9d2211b4, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xe07f6fb4, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xb16c89d8, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe5e15807, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xc32ed92, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x258e3070, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x9b7514ea, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb5f23168, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x18ed1608, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xeafce277, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5a8156f0, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd6770494, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x207217d0, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x8c7eef6, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x8bc94d5, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

