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
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc0563b79, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xc3f8e54c, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x19751f3b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xf38d4801, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x87c9739c, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x30294a90, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x2a9835fd, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x68b47ff2, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x955757b6, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x1b66c649, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x2460c724, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x23495edc, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x16444d73, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x9a19e77a, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x902c1a49, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x36b9f401, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9a136f45, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x56be8a78, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xb4e62fe9, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xcd33c67c, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x15d93988, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x709d2ebf, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x3791bf52, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6bacd73c, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x8a11728d, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x1b119cc7, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x8e4ada5f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001039d00000900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007016sv*sd*bc*sc*i*");
