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
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x42a4669b, __VMLINUX_SYMBOL_STR(snd_mpu401_uart_new) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf1e83d47, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa78b399e, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xdb08400b, __VMLINUX_SYMBOL_STR(pnp_unregister_driver) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc3e9ed92, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0x6d8a95e0, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xafbca1f, __VMLINUX_SYMBOL_STR(pnp_register_driver) },
	{ 0x475a381f, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x1e88c3c5, __VMLINUX_SYMBOL_STR(pnp_get_resource) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x633dc174, __VMLINUX_SYMBOL_STR(param_ops_long) },
	{ 0xe27be7e9, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xeefe1446, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-mpu401-uart,snd";

MODULE_ALIAS("pnp:dPNPb006*");
MODULE_ALIAS("acpi*:PNPB006:*");
