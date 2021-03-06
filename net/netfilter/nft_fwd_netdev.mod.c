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
	{ 0x1716f75a, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x9a28dc46, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x7ecffddf, __VMLINUX_SYMBOL_STR(nf_dup_netdev_egress) },
	{ 0x85430a76, __VMLINUX_SYMBOL_STR(nft_validate_register_load) },
	{ 0x1e6b75a3, __VMLINUX_SYMBOL_STR(nft_parse_register) },
	{ 0x4a258f7c, __VMLINUX_SYMBOL_STR(nft_dump_register) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_dup_netdev";

