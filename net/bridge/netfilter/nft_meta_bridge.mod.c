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
	{ 0xb80e8358, __VMLINUX_SYMBOL_STR(nft_meta_policy) },
	{ 0xe6d47ef9, __VMLINUX_SYMBOL_STR(nft_meta_get_dump) },
	{ 0x6c0da9de, __VMLINUX_SYMBOL_STR(nft_meta_set_validate) },
	{ 0xfa2efffd, __VMLINUX_SYMBOL_STR(nft_meta_set_dump) },
	{ 0x33a36508, __VMLINUX_SYMBOL_STR(nft_meta_set_destroy) },
	{ 0xa5559521, __VMLINUX_SYMBOL_STR(nft_meta_set_init) },
	{ 0xe5d22afc, __VMLINUX_SYMBOL_STR(nft_meta_set_eval) },
	{ 0x1716f75a, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x9a28dc46, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xa970152d, __VMLINUX_SYMBOL_STR(nft_validate_register_store) },
	{ 0x1e6b75a3, __VMLINUX_SYMBOL_STR(nft_parse_register) },
	{ 0xc96f5fe7, __VMLINUX_SYMBOL_STR(nft_meta_get_init) },
	{ 0xf326bdae, __VMLINUX_SYMBOL_STR(nft_meta_get_eval) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_meta,nf_tables";

