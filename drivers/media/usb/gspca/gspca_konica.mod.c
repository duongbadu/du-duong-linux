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
	{ 0x4d8d913f, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0xc46a177b, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x6e83af5d, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x6046cabc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x3d3368c9, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0xad37e919, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa08a521a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x14f9e09b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x2637dcb6, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0xc291a39e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x72459d01, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xa45560de, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x33076644, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,usbcore,videodev";

MODULE_ALIAS("usb:v04C8p0720d*dc*dsc*dp*ic*isc*ip*in*");
