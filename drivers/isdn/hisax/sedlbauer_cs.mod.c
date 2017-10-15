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
	{ 0x58005e30, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb9195f38, __VMLINUX_SYMBOL_STR(hisax_init_pcmcia) },
	{ 0xe9adaf82, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0xd596082c, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x29b1f651, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xfc27303b, __VMLINUX_SYMBOL_STR(HiSax_closecard) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,hisax";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbF3612E1Dpc6B95C78Apd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pc397B7E90pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pc2E5C7FCEpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pc8DB143FEpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa81FB79F5pbE4E9BC12pcB391AB4Cpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD79E0B84pb21D083AEpc*pd*");
