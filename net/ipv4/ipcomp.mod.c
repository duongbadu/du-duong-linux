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
	{ 0x2109802f, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x3b6f58f4, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x515ac587, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x5475b389, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xc89a06b2, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x8131a3bc, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xe3923141, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x8e4270f6, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9d2211b4, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x353af380, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xc6fc4dc5, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xf8ebdcb6, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x88947ce6, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xd6770494, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x207217d0, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x8c7eef6, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x8bc94d5, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";

