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
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe9adaf82, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x292bea26, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x755cedde, __VMLINUX_SYMBOL_STR(scsi_bios_ptable) },
	{ 0xe044f3cd, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x868acba5, __VMLINUX_SYMBOL_STR(get_options) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x7304e203, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x58005e30, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x150ad92b, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0xa3a62368, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd596082c, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1efbe2, __VMLINUX_SYMBOL_STR(scsi_register) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x64df17c6, __VMLINUX_SYMBOL_STR(scsi_unregister) },
	{ 0xdc56d18f, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x87c9739c, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xefdc5bff, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x29b1f651, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,scsi_mod";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3736C88pb859CAD20pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8DACB57Epb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa182BDAFEpbC80D106Fpc*pd*");
