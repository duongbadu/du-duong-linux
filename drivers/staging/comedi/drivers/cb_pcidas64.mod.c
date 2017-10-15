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
	{ 0xbb52fc7f, __VMLINUX_SYMBOL_STR(range_bipolar10) },
	{ 0x5a68e721, __VMLINUX_SYMBOL_STR(comedi_pci_auto_unconfig) },
	{ 0xa56a2e55, __VMLINUX_SYMBOL_STR(comedi_pci_driver_unregister) },
	{ 0x139f38a8, __VMLINUX_SYMBOL_STR(comedi_pci_driver_register) },
	{ 0xa1a53096, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0x558f5670, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0x3549385e, __VMLINUX_SYMBOL_STR(subdev_8255_init) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5d5cd9b, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x5c0c7194, __VMLINUX_SYMBOL_STR(subdev_8255_mm_init) },
	{ 0x4b89fda2, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xecbc1203, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xf244c12, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0x8233dec1, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0x17ff8ca7, __VMLINUX_SYMBOL_STR(comedi_buf_read_samples) },
	{ 0x5e4c0942, __VMLINUX_SYMBOL_STR(comedi_nsamples_left) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x21ba274c, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0xe48afe7a, __VMLINUX_SYMBOL_STR(comedi_pci_disable) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x5b320789, __VMLINUX_SYMBOL_STR(comedi_timeout) },
	{ 0x98f3ee9a, __VMLINUX_SYMBOL_STR(comedi_dio_insn_config) },
	{ 0x7839d10, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x20461418, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi,comedi_pci,comedi_8255";

MODULE_ALIAS("pci:v00001307d0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000067sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000068sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000006Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000079sv*sd*bc*sc*i*");
