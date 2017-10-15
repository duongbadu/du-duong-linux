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
	{ 0x612738fc, __VMLINUX_SYMBOL_STR(comedi_pcmcia_disable) },
	{ 0x22310f38, __VMLINUX_SYMBOL_STR(comedi_pcmcia_auto_unconfig) },
	{ 0x985c82db, __VMLINUX_SYMBOL_STR(comedi_pcmcia_driver_unregister) },
	{ 0xc3eb3da5, __VMLINUX_SYMBOL_STR(comedi_pcmcia_driver_register) },
	{ 0x3549385e, __VMLINUX_SYMBOL_STR(subdev_8255_init) },
	{ 0x4b89fda2, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x8458269d, __VMLINUX_SYMBOL_STR(comedi_pcmcia_enable) },
	{ 0x9e37eea2, __VMLINUX_SYMBOL_STR(comedi_to_pcmcia_dev) },
	{ 0xc08562f0, __VMLINUX_SYMBOL_STR(comedi_pcmcia_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pcmcia,comedi_8255,comedi";

MODULE_ALIAS("pcmcia:m010Bc475Cf*fn*pfn*pa*pb*pc*pd*");
