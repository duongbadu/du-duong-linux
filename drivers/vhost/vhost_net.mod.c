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
	{ 0xfeb7f2bb, __VMLINUX_SYMBOL_STR(vhost_vq_avail_empty) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6d5ccc26, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0x669daaef, __VMLINUX_SYMBOL_STR(vhost_dev_check_owner) },
	{ 0xf2606361, __VMLINUX_SYMBOL_STR(vhost_poll_start) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xefcabe22, __VMLINUX_SYMBOL_STR(vhost_chr_poll) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x34056ccc, __VMLINUX_SYMBOL_STR(vhost_dev_cleanup) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x6ebb4bbb, __VMLINUX_SYMBOL_STR(vhost_log_access_ok) },
	{ 0x2dfc5f1a, __VMLINUX_SYMBOL_STR(vhost_enable_notify) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x592cfbdd, __VMLINUX_SYMBOL_STR(vhost_dev_has_owner) },
	{ 0x502820b8, __VMLINUX_SYMBOL_STR(vhost_poll_flush) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x3666bfbc, __VMLINUX_SYMBOL_STR(vq_iotlb_prefetch) },
	{ 0x4f596959, __VMLINUX_SYMBOL_STR(vhost_disable_notify) },
	{ 0x7834179d, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x142d4b3b, __VMLINUX_SYMBOL_STR(vhost_dev_ioctl) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x1b4ce9ac, __VMLINUX_SYMBOL_STR(vhost_log_write) },
	{ 0xfae78dea, __VMLINUX_SYMBOL_STR(vhost_chr_read_iter) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdcaff72c, __VMLINUX_SYMBOL_STR(vhost_get_vq_desc) },
	{ 0xc2115909, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x3240fe43, __VMLINUX_SYMBOL_STR(vhost_chr_write_iter) },
	{ 0xc3954ec2, __VMLINUX_SYMBOL_STR(vhost_dev_set_owner) },
	{ 0x503e2586, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal_n) },
	{ 0xbe40d9aa, __VMLINUX_SYMBOL_STR(vhost_dev_reset_owner_prepare) },
	{ 0x7f7dccfb, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0x36ee9607, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal) },
	{ 0x2516f7f2, __VMLINUX_SYMBOL_STR(vhost_discard_vq_desc) },
	{ 0x57c5f6d2, __VMLINUX_SYMBOL_STR(tun_get_socket) },
	{ 0x410333a, __VMLINUX_SYMBOL_STR(vhost_poll_queue) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x1e53ccf3, __VMLINUX_SYMBOL_STR(vhost_poll_stop) },
	{ 0x7a6088f6, __VMLINUX_SYMBOL_STR(vhost_vq_init_access) },
	{ 0x2ccc12f9, __VMLINUX_SYMBOL_STR(vhost_poll_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x366bdd2c, __VMLINUX_SYMBOL_STR(iov_iter_init) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb840a9ca, __VMLINUX_SYMBOL_STR(vhost_dev_reset_owner) },
	{ 0xf4e8fd19, __VMLINUX_SYMBOL_STR(vhost_has_work) },
	{ 0x4115b0b5, __VMLINUX_SYMBOL_STR(vhost_dev_init) },
	{ 0x753e06e5, __VMLINUX_SYMBOL_STR(fget) },
	{ 0xa425bde3, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xff2be877, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x907a48ef, __VMLINUX_SYMBOL_STR(vhost_dev_stop) },
	{ 0xbc771f11, __VMLINUX_SYMBOL_STR(vhost_vq_access_ok) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3817642, __VMLINUX_SYMBOL_STR(vhost_vring_ioctl) },
	{ 0x1d04b131, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xd4e9518a, __VMLINUX_SYMBOL_STR(vhost_init_device_iotlb) },
	{ 0xbf20dedf, __VMLINUX_SYMBOL_STR(macvtap_get_socket) },
	{ 0x5fd73e73, __VMLINUX_SYMBOL_STR(sched_clock_cpu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vhost,tun,macvtap";


MODULE_INFO(srcversion, "FA570E21EE83DF6FDAF2DC3");
