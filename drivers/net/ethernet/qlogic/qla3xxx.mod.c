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
	{ 0xdde2bdc4, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xc0563b79, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xc3f8e54c, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x46219c36, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf38d4801, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf79361d3, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xecbc1203, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x68b47ff2, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x2a9835fd, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xd2c48dba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x577835d2, __VMLINUX_SYMBOL_STR(__napi_complete) },
	{ 0x9a19e77a, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xe67fa7c3, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x36b9f401, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xa38acbf6, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xb766cb3d, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1e1555f9, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xddb893d2, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x375bad8c, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x8e4ada5f, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2460c724, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9f83b3c1, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa2574c36, __VMLINUX_SYMBOL_STR(netdev_printk) },
	{ 0x1b66c649, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc1586756, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc724a9ea, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xcba9e5eb, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x709d2ebf, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x15d93988, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x6bacd73c, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001077d00003022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00003032sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CA7136F3A25FE4C9378122A");
