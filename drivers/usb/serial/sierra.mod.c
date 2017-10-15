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
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x81739d96, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x5fe87294, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x8d8e124b, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xd16a8ea5, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5d88b68d, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x88fb3331, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x21ec714b, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0x4395953e, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xf230ac21, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xc213f651, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x257fa436, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x31cc1a58, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x33076644, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc3b334bf, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0x37e78cc8, __VMLINUX_SYMBOL_STR(usb_serial_port_softint) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5c8175f9, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0xc2e0ec20, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94e31f6d, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xa08a521a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x708bd29c, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xb65d4b36, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x14f9e09b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial,usbcore";

MODULE_ALIAS("usb:v0F3Dp0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p1B1Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p211Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p1E1Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0224d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0023d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p0025d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6805d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6808d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6809d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6816d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6834d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6838d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6850d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6851d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6852d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6853d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6855d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6856d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6859d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p685Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6880d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6890d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6891d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6892d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p68ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*icFFiscFFipFFin*");
