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
	{ 0xdc56d18f, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0xe044f3cd, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x58005e30, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x148fbb80, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5130ab15, __VMLINUX_SYMBOL_STR(init_atmel_card) },
	{ 0xe9adaf82, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0xd596082c, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x29b1f651, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xa2e71945, __VMLINUX_SYMBOL_STR(stop_atmel_card) },
	{ 0x1b119cc7, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x955757b6, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x279e07df, __VMLINUX_SYMBOL_STR(atmel_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,atmel";

MODULE_ALIAS("pcmcia:m0101c0620f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0696f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01BFc3302f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0007f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9EB2DA1FpbC9A0D3F9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pb41B37E1Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pb3675D704pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pb4172E792pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pb917F3D72pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pb5040670Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paABDA4164pbE15ED87Fpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAE49B86Apb1E957CD5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBC477DDEpb502FAE6Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5B878724pb122F1DF6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5B878724pb5FBA533Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paFEA54C90pb1C5B0F68pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb30F38774pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb172D1377pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA407ECDDpb119F6314pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa575C516CpbB1F6DBC4pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB474D43Apb6B1FEC94pc*pd*");
