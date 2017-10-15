#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x7189115b, __VMLINUX_SYMBOL_STR(__vmbus_driver_register) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x36e3c4d4, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xc2b17fbe, __VMLINUX_SYMBOL_STR(split_page) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x63eeffc9, __VMLINUX_SYMBOL_STR(vmbus_recvpacket) },
	{ 0xcde03c4b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x507de8c6, __VMLINUX_SYMBOL_STR(add_memory) },
	{ 0x9c2de449, __VMLINUX_SYMBOL_STR(memory_add_physaddr_to_nid) },
	{ 0x17994d70, __VMLINUX_SYMBOL_STR(memhp_auto_online) },
	{ 0x18d50120, __VMLINUX_SYMBOL_STR(__online_page_free) },
	{ 0x6974f766, __VMLINUX_SYMBOL_STR(__online_page_increment_counters) },
	{ 0xffe2194a, __VMLINUX_SYMBOL_STR(__online_page_set_limits) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xa770832, __VMLINUX_SYMBOL_STR(register_memory_notifier) },
	{ 0x1eb0c05, __VMLINUX_SYMBOL_STR(set_online_page_callback) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xde211d43, __VMLINUX_SYMBOL_STR(vmbus_open) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x878cd015, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb8e4c26e, __VMLINUX_SYMBOL_STR(vmbus_sendpacket) },
	{ 0x26520970, __VMLINUX_SYMBOL_STR(vm_memory_committed) },
	{ 0x785a93b4, __VMLINUX_SYMBOL_STR(si_mem_available) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x26e298e0, __VMLINUX_SYMBOL_STR(unregister_memory_notifier) },
	{ 0x5071c9c0, __VMLINUX_SYMBOL_STR(restore_online_page_callback) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x28d5e754, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xca6b180e, __VMLINUX_SYMBOL_STR(vmbus_close) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:dc7450528589e2468057a307dc18a502");
