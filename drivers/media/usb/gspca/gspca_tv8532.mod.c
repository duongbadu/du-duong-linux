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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8ffc04a2, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0xc46a177b, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x6e83af5d, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x6046cabc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x3d3368c9, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa08a521a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2637dcb6, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0xc291a39e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,videodev,usbcore";

MODULE_ALIAS("usb:v046Dp0920d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0921d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p808Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0923p010Fd*dc*dsc*dp*ic*isc*ip*in*");
