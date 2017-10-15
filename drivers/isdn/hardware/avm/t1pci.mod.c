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
	{ 0x4403fcf, __VMLINUX_SYMBOL_STR(unregister_capi_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9f823278, __VMLINUX_SYMBOL_STR(register_capi_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x19ed0f02, __VMLINUX_SYMBOL_STR(attach_capi_ctr) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x9625ce8e, __VMLINUX_SYMBOL_STR(b1dmactl_proc_fops) },
	{ 0xe20ef4a3, __VMLINUX_SYMBOL_STR(b1dma_reset_ctr) },
	{ 0x379d664, __VMLINUX_SYMBOL_STR(b1dma_load_firmware) },
	{ 0xac0028de, __VMLINUX_SYMBOL_STR(b1dma_send_message) },
	{ 0x2e161aa1, __VMLINUX_SYMBOL_STR(b1dma_release_appl) },
	{ 0x26913369, __VMLINUX_SYMBOL_STR(b1dma_register_appl) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd6f9f1ea, __VMLINUX_SYMBOL_STR(b1dma_interrupt) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x3471b5eb, __VMLINUX_SYMBOL_STR(t1pci_detect) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x828b7cab, __VMLINUX_SYMBOL_STR(avmcard_dma_alloc) },
	{ 0xbec97a44, __VMLINUX_SYMBOL_STR(b1_alloc_card) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3b7c7c25, __VMLINUX_SYMBOL_STR(b1_free_card) },
	{ 0xadb3fc42, __VMLINUX_SYMBOL_STR(avmcard_dma_free) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x150ad92b, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x5c919bd0, __VMLINUX_SYMBOL_STR(detach_capi_ctr) },
	{ 0xd8c74b0d, __VMLINUX_SYMBOL_STR(b1dma_reset) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1dma,b1";

MODULE_ALIAS("pci:v00001244d00001200sv*sd*bc*sc*i*");
