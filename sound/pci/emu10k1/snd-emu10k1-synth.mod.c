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
	{ 0xa8c8033d, __VMLINUX_SYMBOL_STR(snd_emux_new) },
	{ 0x95d789c9, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_alloc) },
	{ 0x31afed91, __VMLINUX_SYMBOL_STR(snd_emux_register) },
	{ 0x6fddd584, __VMLINUX_SYMBOL_STR(snd_emu10k1_memblk_map) },
	{ 0x282c68ed, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_alloc) },
	{ 0x9bc03530, __VMLINUX_SYMBOL_STR(__snd_seq_driver_register) },
	{ 0x515bcb10, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_bzero) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd7aa144a, __VMLINUX_SYMBOL_STR(snd_emux_free) },
	{ 0x9aeca05c, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_write) },
	{ 0x937ea45c, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_free) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x579ece82, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_free) },
	{ 0x412dd24b, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_copy_from_user) },
	{ 0x9eabc92e, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_read) },
	{ 0xabab66d0, __VMLINUX_SYMBOL_STR(snd_seq_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-emux-synth,snd-emu10k1,snd-seq-device";

