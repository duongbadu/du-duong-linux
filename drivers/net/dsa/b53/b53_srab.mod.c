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
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa03e0aee, __VMLINUX_SYMBOL_STR(b53_switch_register) },
	{ 0x7ae4ca30, __VMLINUX_SYMBOL_STR(b53_switch_alloc) },
	{ 0x31fcb6f6, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x6371bcbf, __VMLINUX_SYMBOL_STR(dsa_unregister_switch) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b53_common,dsa_core";

MODULE_ALIAS("of:N*T*Cbrcm,bcm53010-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53010-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53011-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53011-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53012-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53012-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53018-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53018-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53019-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53019-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5301x-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5301x-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58522-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58522-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58525-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58525-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58535-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58535-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58622-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58622-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58623-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58623-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58625-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58625-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm88312-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm88312-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,nsp-srab");
MODULE_ALIAS("of:N*T*Cbrcm,nsp-srabC*");
