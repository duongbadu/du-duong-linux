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
	{ 0xdc65fad8, __VMLINUX_SYMBOL_STR(comedi_pci_detach) },
	{ 0x5a68e721, __VMLINUX_SYMBOL_STR(comedi_pci_auto_unconfig) },
	{ 0xa56a2e55, __VMLINUX_SYMBOL_STR(comedi_pci_driver_unregister) },
	{ 0x139f38a8, __VMLINUX_SYMBOL_STR(comedi_pci_driver_register) },
	{ 0x3549385e, __VMLINUX_SYMBOL_STR(subdev_8255_init) },
	{ 0x4b89fda2, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0xc13c0f76, __VMLINUX_SYMBOL_STR(comedi_8254_subdevice_init) },
	{ 0xabf00247, __VMLINUX_SYMBOL_STR(comedi_8254_init) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0xf244c12, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0x21ba274c, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0x7839d10, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x4111a89b, __VMLINUX_SYMBOL_STR(pci_release_region) },
	{ 0xd9c66860, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x20461418, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,comedi_8255,comedi,comedi_8254";

MODULE_ALIAS("pci:v000013FEd00001730sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001733sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001734sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001735sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001736sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001739sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001753sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001754sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001756sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001762sv*sd*bc*sc*i*");
