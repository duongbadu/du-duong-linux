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
	{ 0xe367ca0c, __VMLINUX_SYMBOL_STR(xt_unregister_match) },
	{ 0x22f4fc4e, __VMLINUX_SYMBOL_STR(xt_register_match) },
	{ 0x89b70aed, __VMLINUX_SYMBOL_STR(skb_find_text) },
	{ 0xb1e33f24, __VMLINUX_SYMBOL_STR(textsearch_prepare) },
	{ 0x121d4410, __VMLINUX_SYMBOL_STR(textsearch_destroy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";

