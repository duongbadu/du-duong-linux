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
	{ 0x818da066, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x89831b48, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xcb7e8cbb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xaf6bec40, __VMLINUX_SYMBOL_STR(usb_hc_died) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd6b53aa5, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0x7e64181d, __VMLINUX_SYMBOL_STR(usb_calc_bus_time) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa7f2c432, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc9292a47, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5b4e7d39, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc0663ee1, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x26f3d3bd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xa23d6e7a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xfe202a7f, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x7312d0d9, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x6c81bcd2, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x333901b3, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbd963fc1, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xfaa06405, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0xe25493d4, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

