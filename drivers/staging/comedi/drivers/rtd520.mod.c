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
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe48afe7a, __VMLINUX_SYMBOL_STR(comedi_pci_disable) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xc13c0f76, __VMLINUX_SYMBOL_STR(comedi_8254_subdevice_init) },
	{ 0x176c5c3c, __VMLINUX_SYMBOL_STR(comedi_8254_mm_init) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x5d5cd9b, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0x4b89fda2, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xecbc1203, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0xf244c12, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0x8233dec1, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0x21ba274c, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xa1a53096, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0x558f5670, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0x98f3ee9a, __VMLINUX_SYMBOL_STR(comedi_dio_insn_config) },
	{ 0x5b320789, __VMLINUX_SYMBOL_STR(comedi_timeout) },
	{ 0x7839d10, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0x20461418, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,comedi_8254,comedi";

MODULE_ALIAS("pci:v00001435d00007520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001435d00004520sv*sd*bc*sc*i*");
