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
	{ 0xd29b009f, __VMLINUX_SYMBOL_STR(crc_itu_t_table) },
	{ 0x6d356209, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x58b71172, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x71a153a0, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaf0d619f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x768985a3, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5c03b673, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x73e1c5ce, __VMLINUX_SYMBOL_STR(rt2x00usb_regbusy_read) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc648b928, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa36a90a2, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x362d270a, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00usb,usbcore,crc-itu-t";

MODULE_ALIAS("usb:v07B8pB21Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0722d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1723d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1724d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631pC019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0137d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v178Dp02BEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1472p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p4600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2573d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2671d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0812p3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6196d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6229d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6238d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p4471d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p90ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p31F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6933p5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB50d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7167p3840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3415d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9F85446F07F5403DAED4125");
