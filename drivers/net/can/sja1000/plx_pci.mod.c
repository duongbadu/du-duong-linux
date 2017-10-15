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
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf964974e, __VMLINUX_SYMBOL_STR(register_sja1000dev) },
	{ 0x709892d4, __VMLINUX_SYMBOL_STR(alloc_sja1000dev) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x79bf7af1, __VMLINUX_SYMBOL_STR(free_sja1000dev) },
	{ 0x94e22041, __VMLINUX_SYMBOL_STR(unregister_sja1000dev) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3791bf52, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x30294a90, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sja1000";

MODULE_ALIAS("pci:v0000144Ad00007841sv*sd*bc02sc80i00*");
MODULE_ALIAS("pci:v0000144Ad00007841sv*sd*bc07sc80i00*");
MODULE_ALIAS("pci:v000010B5d00009050sv000012FEsd00000004bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012FEsd0000010Bbc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012FEsd00000501bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd00000009bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd0000000Ebc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd00000200bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv*sd00002540bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00003432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001498d0000032Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012C4sd00000900bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv0000E1C5sd00000301bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00000100sv*sd*bc*sc*i*");
