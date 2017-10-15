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
	{ 0xd7a9660c, __VMLINUX_SYMBOL_STR(ife_validate_meta_u32) },
	{ 0xf4ed0b32, __VMLINUX_SYMBOL_STR(ife_release_meta_gen) },
	{ 0x80094485, __VMLINUX_SYMBOL_STR(ife_alloc_meta_u32) },
	{ 0x1fa44fb2, __VMLINUX_SYMBOL_STR(ife_get_meta_u32) },
	{ 0x356cd9a6, __VMLINUX_SYMBOL_STR(unregister_ife_op) },
	{ 0x65f41e81, __VMLINUX_SYMBOL_STR(register_ife_op) },
	{ 0xcd80840f, __VMLINUX_SYMBOL_STR(ife_check_meta_u32) },
	{ 0x76c9b375, __VMLINUX_SYMBOL_STR(ife_encode_meta_u32) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=act_ife";

