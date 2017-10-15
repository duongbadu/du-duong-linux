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
	{ 0xbcfa1ef3, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0x6d890d6e, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xcfb3763f, __VMLINUX_SYMBOL_STR(usb_stor_control_msg) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc17c40c5, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1653e6a5, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0xd97c69f8, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x33293f6e, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0xb0161d1e, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xfabc1534, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x30aebd93, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d4b1b61, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x597746f3, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage,usbcore";

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");
