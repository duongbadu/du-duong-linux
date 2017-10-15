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
	{ 0x5a68e721, __VMLINUX_SYMBOL_STR(comedi_pci_auto_unconfig) },
	{ 0xa56a2e55, __VMLINUX_SYMBOL_STR(comedi_pci_driver_unregister) },
	{ 0x139f38a8, __VMLINUX_SYMBOL_STR(comedi_pci_driver_register) },
	{ 0x3549385e, __VMLINUX_SYMBOL_STR(subdev_8255_init) },
	{ 0x5d5cd9b, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0x4b89fda2, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0xabf00247, __VMLINUX_SYMBOL_STR(comedi_8254_init) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf244c12, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0x8233dec1, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0x21ba274c, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0x558f5670, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0xa1a53096, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0xfde3eb7b, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x17ff8ca7, __VMLINUX_SYMBOL_STR(comedi_buf_read_samples) },
	{ 0x5e4c0942, __VMLINUX_SYMBOL_STR(comedi_nsamples_left) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x362ea12, __VMLINUX_SYMBOL_STR(comedi_8254_cascade_ns_to_timer) },
	{ 0xdc65fad8, __VMLINUX_SYMBOL_STR(comedi_pci_detach) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3465f508, __VMLINUX_SYMBOL_STR(comedi_8254_pacer_enable) },
	{ 0x9b9257fc, __VMLINUX_SYMBOL_STR(comedi_8254_update_divisors) },
	{ 0x5b320789, __VMLINUX_SYMBOL_STR(comedi_timeout) },
	{ 0x20461418, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,comedi_8255,comedi,comedi_8254";

MODULE_ALIAS("pci:v00001307d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Bsv*sd*bc*sc*i*");
