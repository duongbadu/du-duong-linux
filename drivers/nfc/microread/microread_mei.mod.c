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
	{ 0xaa0e2c32, __VMLINUX_SYMBOL_STR(nfc_mei_phy_free) },
	{ 0xcbcd7005, __VMLINUX_SYMBOL_STR(mei_cldev_get_drvdata) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x68a536b, __VMLINUX_SYMBOL_STR(mei_phy_ops) },
	{ 0xf5cd8729, __VMLINUX_SYMBOL_STR(microread_probe) },
	{ 0x4da59105, __VMLINUX_SYMBOL_STR(__mei_cldev_driver_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb05f07ec, __VMLINUX_SYMBOL_STR(mei_cldev_driver_unregister) },
	{ 0xc00dc0b2, __VMLINUX_SYMBOL_STR(nfc_mei_phy_alloc) },
	{ 0x966d12a4, __VMLINUX_SYMBOL_STR(microread_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mei_phy,mei,microread";

MODULE_ALIAS("mei:microread:0bb17a78-2a8e-4c50-94d4-50266723775c:*:*");
