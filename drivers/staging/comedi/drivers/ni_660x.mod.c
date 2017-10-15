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
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x67fe46c2, __VMLINUX_SYMBOL_STR(ni_tio_cmd) },
	{ 0x8e403ed, __VMLINUX_SYMBOL_STR(ni_tio_acknowledge) },
	{ 0x5e7c0ea9, __VMLINUX_SYMBOL_STR(mite_request_channel) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xc185cc0a, __VMLINUX_SYMBOL_STR(ni_tio_init_counter) },
	{ 0x311115b5, __VMLINUX_SYMBOL_STR(ni_tio_cmdtest) },
	{ 0x14265aa8, __VMLINUX_SYMBOL_STR(ni_tio_insn_config) },
	{ 0x38c96fdd, __VMLINUX_SYMBOL_STR(ni_tio_insn_write) },
	{ 0xbf1a821e, __VMLINUX_SYMBOL_STR(ni_tio_insn_read) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x4b89fda2, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0xcfb23143, __VMLINUX_SYMBOL_STR(ni_gpct_device_construct) },
	{ 0xab8226, __VMLINUX_SYMBOL_STR(mite_alloc_ring) },
	{ 0xbf4bd7c7, __VMLINUX_SYMBOL_STR(mite_attach) },
	{ 0x8233dec1, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0xf244c12, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0x21ba274c, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe48afe7a, __VMLINUX_SYMBOL_STR(comedi_pci_disable) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xc527f0cf, __VMLINUX_SYMBOL_STR(mite_detach) },
	{ 0x97596b62, __VMLINUX_SYMBOL_STR(mite_free_ring) },
	{ 0x2efb043e, __VMLINUX_SYMBOL_STR(ni_gpct_device_destroy) },
	{ 0x26dac479, __VMLINUX_SYMBOL_STR(mite_release_channel) },
	{ 0x49469cce, __VMLINUX_SYMBOL_STR(ni_tio_set_mite_channel) },
	{ 0xfb9633d3, __VMLINUX_SYMBOL_STR(ni_tio_cancel) },
	{ 0x1ea7f1a0, __VMLINUX_SYMBOL_STR(comedi_buf_read_n_available) },
	{ 0x1122876f, __VMLINUX_SYMBOL_STR(mite_sync_dma) },
	{ 0x8d15f858, __VMLINUX_SYMBOL_STR(mite_buf_change) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa1a53096, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0xf372b285, __VMLINUX_SYMBOL_STR(ni_tio_handle_interrupt) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x20461418, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,ni_tiocmd,mite,ni_tio,comedi";

MODULE_ALIAS("pci:v00001093d00001310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002C60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002CC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001E40sv*sd*bc*sc*i*");
