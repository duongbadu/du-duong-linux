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
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdc56d18f, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0xe044f3cd, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4d18595d, __VMLINUX_SYMBOL_STR(pcmcia_map_mem_page) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe1d703b8, __VMLINUX_SYMBOL_STR(mtd_device_parse_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9b3965ac, __VMLINUX_SYMBOL_STR(do_map_probe) },
	{ 0xe9adaf82, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x4fbc6c1, __VMLINUX_SYMBOL_STR(pcmcia_request_window) },
	{ 0x881c6f5d, __VMLINUX_SYMBOL_STR(pcmcia_loop_tuple) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x742f5665, __VMLINUX_SYMBOL_STR(pcmcia_parse_tuple) },
	{ 0x29a30e15, __VMLINUX_SYMBOL_STR(pcmcia_fixup_vpp) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x148fbb80, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0x15ea7109, __VMLINUX_SYMBOL_STR(map_destroy) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd2d62912, __VMLINUX_SYMBOL_STR(mtd_device_unregister) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x29b1f651, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,mtd,chipreg";

MODULE_ALIAS("pcmcia:m*c*f01fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb1FED36CDpc36EADD21pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB569A6E5pb36EADD21pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB569A6E5pb8BC54D2Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB569A6E5pb6DF1BE3Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pbD14C9DCFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pbA2D7DEDBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa40ADE711pb145CEA5Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa40ADE711pb42064DDApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa40ADE711pb25EE5CB0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa40ADE711pbDF8506D8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54D0C69CpbAD12C29Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB68968C8pb2DFB47B0pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa7ED2AD87pb675DC3FBpc7AEF3965pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEBF91155pb805360CApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEBF91155pb20B6BF17pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF9876BAFpbAD0B207Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paF9876BAFpbE8D884ADpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa96FD8277pb737A5B05pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa05DDCA47pbE7D67BCApc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa05DDCA47pb7BC32944pc*pd*");
