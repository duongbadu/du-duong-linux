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
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xee93522c, __VMLINUX_SYMBOL_STR(hisax_register) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd16a8ea5, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xa08a521a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7f4f2ce, __VMLINUX_SYMBOL_STR(hisax_unregister) },
	{ 0xc2e0ec20, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf230ac21, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x8e4ada5f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x23495edc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x33076644, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x14f9e09b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,hisax";

MODULE_ALIAS("usb:v0959p2BD0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p1688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B0p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp0846d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp0847d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B0p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Dp1005d*dc*dsc*dp*ic*isc*ip*in*");
