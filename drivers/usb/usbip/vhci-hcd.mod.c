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
	{ 0x9b857d68, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0x364a22c7, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x6d5ccc26, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7312d0d9, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xfaa06405, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x779a18af, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x6c81bcd2, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xef9ca767, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0xeee28f2d, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x5b4e7d39, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0xf1e83d47, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x70fe334f, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbd963fc1, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xa509a8e2, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0xa7f2c432, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x28d5e754, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xa8f61e6e, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xf2b20f2e, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x52b6f720, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0x45ec6617, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0x6d8a95e0, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x143efa99, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x7f7dccfb, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x66e35306, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x64b3628f, __VMLINUX_SYMBOL_STR(usbip_pad_iso) },
	{ 0xc9292a47, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x99d65ca3, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x617ce82, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x2ede59d3, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3928a1f7, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf4fded96, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xb0a9253a, __VMLINUX_SYMBOL_STR(platform_bus) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd7ffcee, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0x888b627f, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xc0663ee1, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0xd6b53aa5, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0x3d996bc3, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0x6a20cc7a, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core,usbcore,usb-common";


MODULE_INFO(srcversion, "759F85BA553CED6955BBD83");
