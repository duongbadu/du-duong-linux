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
	{ 0xe7ecb490, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x76657b8f, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xfafbd3ef, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xb76b88a1, __VMLINUX_SYMBOL_STR(wl1251_free_hw) },
	{ 0x303f6394, __VMLINUX_SYMBOL_STR(sdio_writeb_readb) },
	{ 0x46375c9b, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xd06ad6b6, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x13243d4b, __VMLINUX_SYMBOL_STR(wl1251_get_platform_data) },
	{ 0xf45d8b26, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xbc477a2, __VMLINUX_SYMBOL_STR(irq_set_irq_type) },
	{ 0x6611a0de, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0xe3a9c524, __VMLINUX_SYMBOL_STR(wl1251_init_ieee80211) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbe5fd4bf, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5fd71960, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x18494b7a, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x5f0d70e4, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xb3262e02, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x8a9afde3, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0xbcc58e38, __VMLINUX_SYMBOL_STR(wl1251_alloc_hw) },
	{ 0x43bb34ad, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x6d2f6571, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x691ad3c2, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,mac80211,wl1251";

MODULE_ALIAS("sdio:c*v104Cd9066*");
