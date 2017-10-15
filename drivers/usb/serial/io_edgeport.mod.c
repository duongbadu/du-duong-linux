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
	{ 0x35366245, __VMLINUX_SYMBOL_STR(usb_serial_generic_get_icount) },
	{ 0x52f21a3e, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0x81739d96, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x5fe87294, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa3fc4099, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0xa08a521a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x98f42abc, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x46811559, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xcd5d02a1, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x8ea396b9, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xc2e0ec20, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x14f9e09b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x33076644, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xf230ac21, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5d88b68d, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x88fb3331, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial,usbcore";

MODULE_ALIAS("usb:v1608p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p1403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA758d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA794d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA225d*dc*dsc*dp*ic*isc*ip*in*");
