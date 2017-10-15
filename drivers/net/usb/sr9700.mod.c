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
	{ 0x9e43dc7c, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x9f225a6a, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x8ba424b7, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x106100c9, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x85830a51, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x49cb1b16, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x26c3642f, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x726a352, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xc3f8e54c, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xee69603b, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x9950bba7, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x11a10b0c, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xb3aa7f9, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x3865c41b, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xeccacba4, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xed037bf9, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb4e62fe9, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xc383b13b, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x39a38c89, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf3ae06e6, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x6bffb32, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xde1c02b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xaa8d877b, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0xae76e686, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xcba9e5eb, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xd976d6bd, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x6d51f9b5, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe0729564, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x9a136f45, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x3dc65257, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x23495edc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xa1a8236f, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,usbcore,mii";

MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
