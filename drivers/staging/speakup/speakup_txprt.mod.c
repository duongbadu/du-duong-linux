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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa80bce21, __VMLINUX_SYMBOL_STR(spk_var_store) },
	{ 0x65fb52a5, __VMLINUX_SYMBOL_STR(spk_var_show) },
	{ 0x276dd5de, __VMLINUX_SYMBOL_STR(spk_synth_is_alive_restart) },
	{ 0x4429c1ee, __VMLINUX_SYMBOL_STR(spk_synth_flush) },
	{ 0xedd4f174, __VMLINUX_SYMBOL_STR(spk_do_catch_up) },
	{ 0xd22b384, __VMLINUX_SYMBOL_STR(spk_synth_immediate) },
	{ 0xe7cd4558, __VMLINUX_SYMBOL_STR(spk_serial_release) },
	{ 0xca33a036, __VMLINUX_SYMBOL_STR(spk_serial_synth_probe) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8241b551, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xcbb9133a, __VMLINUX_SYMBOL_STR(synth_remove) },
	{ 0xe3b5bd6d, __VMLINUX_SYMBOL_STR(synth_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=speakup";


MODULE_INFO(srcversion, "00CD2E824B23BCB5CEC323E");
