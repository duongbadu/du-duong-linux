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
	{ 0xc3db2be5, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x791ab8e9, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_reset) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x77117d54, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6a2d993a, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x981a520d, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xe759c924, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x6995d72b, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0x20db6c5e, __VMLINUX_SYMBOL_STR(usb_gadget_set_selfpowered) },
	{ 0x83e50e85, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x50c3a39d, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x67212fa0, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0xb1aadab1, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x354a9f40, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core";

