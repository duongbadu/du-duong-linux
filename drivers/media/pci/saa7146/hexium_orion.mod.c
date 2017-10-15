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
	{ 0x8ccd0787, __VMLINUX_SYMBOL_STR(saa7146_unregister_extension) },
	{ 0xdcba7443, __VMLINUX_SYMBOL_STR(saa7146_register_extension) },
	{ 0xcef270fe, __VMLINUX_SYMBOL_STR(saa7146_register_device) },
	{ 0x453972f6, __VMLINUX_SYMBOL_STR(saa7146_vv_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x7bfb6b4a, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0xb7354081, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xf0d93697, __VMLINUX_SYMBOL_STR(saa7146_i2c_adapter_prepare) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7fb7a600, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x158b68b7, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x2911fb9a, __VMLINUX_SYMBOL_STR(saa7146_vv_release) },
	{ 0xf2203801, __VMLINUX_SYMBOL_STR(saa7146_unregister_device) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,saa7146_vv";

MODULE_ALIAS("pci:v00001131d00007146sv00000000sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000017C8sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000017C8sd00002101bc*sc*i*");
