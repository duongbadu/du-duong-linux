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
	{ 0x5dc934ea, __VMLINUX_SYMBOL_STR(ni_tio_write) },
	{ 0x5b15adf2, __VMLINUX_SYMBOL_STR(mite_dma_arm) },
	{ 0xf3960df9, __VMLINUX_SYMBOL_STR(mite_dma_disarm) },
	{ 0x5e97c9d, __VMLINUX_SYMBOL_STR(ni_tio_set_gate_src) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc1687d7b, __VMLINUX_SYMBOL_STR(ni_tio_get_soft_copy) },
	{ 0x6bf52bf2, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xbea5ec0d, __VMLINUX_SYMBOL_STR(mite_prep_dma) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc237c1ae, __VMLINUX_SYMBOL_STR(mite_ack_linkc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x751c2e2f, __VMLINUX_SYMBOL_STR(ni_tio_read) },
	{ 0x6b3bf8eb, __VMLINUX_SYMBOL_STR(comedi_buf_write_alloc) },
	{ 0xf92e95e3, __VMLINUX_SYMBOL_STR(ni_tio_set_bits) },
	{ 0xc55b899b, __VMLINUX_SYMBOL_STR(mite_done) },
	{ 0x1058943e, __VMLINUX_SYMBOL_STR(ni_tio_arm) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ni_tio,mite,comedi";

