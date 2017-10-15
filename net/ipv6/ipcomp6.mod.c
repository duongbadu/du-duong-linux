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
	{ 0x2109802f, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x3b6f58f4, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x515ac587, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xe96d9323, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x51c9a659, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xe3923141, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x7f933852, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9d2211b4, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x353af380, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xc6fc4dc5, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x5c3e89c7, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0xf8ebdcb6, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x6cf93fff, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0x88947ce6, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x1f54ef6e, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x207217d0, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x2ab5e5ca, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x8bc94d5, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp,xfrm6_tunnel";

