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
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x709500bc, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0xf24e394c, __VMLINUX_SYMBOL_STR(usb_add_gadget_udc) },
	{ 0x59688cf7, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xd16b6bce, __VMLINUX_SYMBOL_STR(usb_ep_set_maxpacket_limit) },
	{ 0xd06ad6b6, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x4f7926e4, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xe346b3da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xfc5a3dec, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x13054b3a, __VMLINUX_SYMBOL_STR(usb_get_phy) },
	{ 0x47611c55, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x31fcb6f6, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa4744dba, __VMLINUX_SYMBOL_STR(usb_gadget_giveback_request) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x73aef5a0, __VMLINUX_SYMBOL_STR(usb_put_phy) },
	{ 0xf3dd3ec1, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_unregister) },
	{ 0xa761413b, __VMLINUX_SYMBOL_STR(usb_del_gadget_udc) },
	{ 0xb84dafa5, __VMLINUX_SYMBOL_STR(usb_gadget_vbus_disconnect) },
	{ 0x4a1f8026, __VMLINUX_SYMBOL_STR(usb_gadget_vbus_connect) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x25800911, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core";

