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
	{ 0xa0d64330, __VMLINUX_SYMBOL_STR(nf_log_unregister) },
	{ 0xedbb6d30, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2673717, __VMLINUX_SYMBOL_STR(nf_log_register) },
	{ 0xdca0af25, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x39e61495, __VMLINUX_SYMBOL_STR(nf_logger_request_module) },
	{ 0x875e3ed8, __VMLINUX_SYMBOL_STR(nf_log_set) },
	{ 0x7ca3235d, __VMLINUX_SYMBOL_STR(nf_log_unset) },
	{ 0xc6d71142, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

