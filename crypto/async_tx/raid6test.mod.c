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
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa99b39c2, __VMLINUX_SYMBOL_STR(prandom_bytes) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2de45378, __VMLINUX_SYMBOL_STR(async_raid6_datap_recov) },
	{ 0xa74b8cef, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0xb5a7a71b, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xa484b162, __VMLINUX_SYMBOL_STR(async_syndrome_val) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3b881fbb, __VMLINUX_SYMBOL_STR(async_raid6_2data_recov) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_raid6_recov,async_pq,async_xor";

