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
	{ 0x2b5d36a7, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x5ed8384c, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xe5bf9629, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xf8940364, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xcb384961, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x3fe137ba, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xc648b928, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xd589e3ed, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xb3c8e41e, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x400ab4b1, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xf67ca386, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x55572e4b, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x93bcf56b, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xaa0a75dd, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xea6f522f, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xf8ffbb7a, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xd3f48ba5, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x58af0535, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x748c45f2, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x968e952f, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x3eabdb4f, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0xeaf539cd, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x301a4472, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x8b046352, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x24191419, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x5fe31dd9, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0xb45d4bbb, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x30f3c063, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xd9dbf80c, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x768985a3, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x58b71172, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x5c03b673, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x14f9e09b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa36a90a2, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x362d270a, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00usb,usbcore";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E9AC6BB9CE0D2E8FDD62219");
