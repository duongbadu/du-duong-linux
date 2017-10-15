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
	{ 0x81188c30, __VMLINUX_SYMBOL_STR(match_string) },
	{ 0x9d2f2a64, __VMLINUX_SYMBOL_STR(device_property_read_string) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc2738430, __VMLINUX_SYMBOL_STR(led_trigger_unregister_simple) },
	{ 0x18f62778, __VMLINUX_SYMBOL_STR(led_trigger_register_simple) },
	{ 0x3b1b97a8, __VMLINUX_SYMBOL_STR(led_trigger_blink_oneshot) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

