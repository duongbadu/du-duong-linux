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
	{ 0xf45d8b26, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x18494b7a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x3e28b46f, __VMLINUX_SYMBOL_STR(smscore_start_device) },
	{ 0x46375c9b, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x43bb34ad, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xfafbd3ef, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xd4f0c337, __VMLINUX_SYMBOL_STR(smscore_set_board_id) },
	{ 0x145cb112, __VMLINUX_SYMBOL_STR(smscore_register_device) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbe5fd4bf, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37d91069, __VMLINUX_SYMBOL_STR(smsendian_handle_tx_message) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x11691176, __VMLINUX_SYMBOL_STR(smscore_getbuffer) },
	{ 0xd8c2a90, __VMLINUX_SYMBOL_STR(smscore_onresponse) },
	{ 0x45284ae9, __VMLINUX_SYMBOL_STR(smsendian_handle_rx_message) },
	{ 0x5f0d70e4, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x583faf00, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x691ad3c2, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x6d2f6571, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x6611a0de, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xb3262e02, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xec64774f, __VMLINUX_SYMBOL_STR(smscore_unregister_device) },
	{ 0xc10c8622, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,smsmdtv";

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");
