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
	{ 0x26c3642f, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x51a9e541, __VMLINUX_SYMBOL_STR(cdc_ncm_change_mtu) },
	{ 0xc3f8e54c, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x19751f3b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xee69603b, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x9950bba7, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x11a10b0c, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xeccacba4, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xed037bf9, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe961b256, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0xd16a8ea5, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x96a0ccb0, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0x58e23ba7, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0xa154f95c, __VMLINUX_SYMBOL_STR(cdc_ncm_select_altsetting) },
	{ 0x3865c41b, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xb3aa7f9, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x891db17d, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
	{ 0x94e31f6d, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x708bd29c, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x5df0a1c6, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0xad7bb2e2, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0x8fb8d133, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xe0729564, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xaa8d877b, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8e4ada5f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x5c4b909b, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_ndp16) },
	{ 0x4b03c596, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_nth16) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x23495edc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xcba9e5eb, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xcf23dab6, __VMLINUX_SYMBOL_STR(cdc_ncm_fill_tx_frame) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ncm,usbcore,cdc-wdm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");
