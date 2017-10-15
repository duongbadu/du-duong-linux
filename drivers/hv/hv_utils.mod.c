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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa323aefd, __VMLINUX_SYMBOL_STR(cn_add_callback) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa675804c, __VMLINUX_SYMBOL_STR(utf8s_to_utf16s) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7189115b, __VMLINUX_SYMBOL_STR(__vmbus_driver_register) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xff5a8cfe, __VMLINUX_SYMBOL_STR(cn_del_callback) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7834179d, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x46a417ca, __VMLINUX_SYMBOL_STR(vmbus_proto_version) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xde211d43, __VMLINUX_SYMBOL_STR(vmbus_open) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xc8de802f, __VMLINUX_SYMBOL_STR(cn_netlink_send) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x56256e8a, __VMLINUX_SYMBOL_STR(orderly_poweroff) },
	{ 0xfde3eb7b, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x63eeffc9, __VMLINUX_SYMBOL_STR(vmbus_recvpacket) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xca6b180e, __VMLINUX_SYMBOL_STR(vmbus_close) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x358fafa5, __VMLINUX_SYMBOL_STR(vmbus_prep_negotiate_resp) },
	{ 0xb8e4c26e, __VMLINUX_SYMBOL_STR(vmbus_sendpacket) },
	{ 0x7a6cdedc, __VMLINUX_SYMBOL_STR(do_settimeofday64) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x1d04b131, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
	{ 0xd3a7daa, __VMLINUX_SYMBOL_STR(vmbus_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:31600b0e13523449818b38d90ced39db");
MODULE_ALIAS("vmbus:30e62795aed07b49adcee80ab0175caf");
MODULE_ALIAS("vmbus:394f16571591784eab55382f3bd5422d");
MODULE_ALIAS("vmbus:e7f4a0a9455a964db8278a841e8c03e6");
MODULE_ALIAS("vmbus:292efa3523ea364296ae3a6ebacba440");
MODULE_ALIAS("vmbus:e34bd134e4dec8419ae76b174977c192");
