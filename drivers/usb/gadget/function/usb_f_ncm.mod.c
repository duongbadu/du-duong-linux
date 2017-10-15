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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6dbdf0fe, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xe1380788, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x3a53b0d2, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xd8d32b10, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0xb14a99c0, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x3c01002c, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0xae696c19, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0xe418fde4, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x1b125cdd, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0x23495edc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9d1d8d, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0xbba6a3f0, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x1a69a2d4, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0xb90255e1, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x8e4ada5f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x2f896c5, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x62cbd8f2, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xca7b3033, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xa7b1507, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4f7f5835, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x77117d54, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5f005368, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf5ab0d69, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x709d2ebf, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xcbd16521, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x6428425, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x95936806, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xd15c9b9a, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x2279f23c, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x10e99158, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb19c2244, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3a25ecb7, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x22600edc, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5162f30b, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb93d1ed3, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x83ba5fbb, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x2ca590b8, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x377f092, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x74b9f79b, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,udc-core,u_ether";

