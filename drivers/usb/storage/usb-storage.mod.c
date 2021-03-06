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
	{ 0xb4eeda8e, __VMLINUX_SYMBOL_STR(scsi_get_host_dev) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa7f6378e, __VMLINUX_SYMBOL_STR(sg_miter_skip) },
	{ 0x6a21d741, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x2cfe65ab, __VMLINUX_SYMBOL_STR(usb_sg_wait) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x292bea26, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x8f0e685d, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x1b1e1088, __VMLINUX_SYMBOL_STR(sg_nents) },
	{ 0xf3979d5a, __VMLINUX_SYMBOL_STR(usb_reset_endpoint) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf230ac21, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7304e203, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x55502139, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x307751bb, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x1c041f90, __VMLINUX_SYMBOL_STR(scsi_eh_restore_cmnd) },
	{ 0x6eed342d, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x73adc347, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x42be8502, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x28d5e754, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x4c1140e5, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0x297c6c94, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xa08a521a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xa3a62368, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd4034828, __VMLINUX_SYMBOL_STR(system_freezable_wq) },
	{ 0xc52400cb, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x53f8bd6c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x1cd1a42a, __VMLINUX_SYMBOL_STR(blk_queue_update_dma_alignment) },
	{ 0x638dc58a, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x3d6cbcd5, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x6bf52bf2, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xa8a1b9f3, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x14f9e09b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6d00344, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x59b9d8d6, __VMLINUX_SYMBOL_STR(usb_sg_cancel) },
	{ 0x878cd015, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc99f8145, __VMLINUX_SYMBOL_STR(scsi_eh_prep_cmnd) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x21ec714b, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0x2fe4dd84, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_no_suspend) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8d92885c, __VMLINUX_SYMBOL_STR(usb_sg_init) },
	{ 0x76909022, __VMLINUX_SYMBOL_STR(scsi_report_bus_reset) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefdc5bff, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa45560de, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc2e0ec20, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x94e31f6d, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xc3ca0be3, __VMLINUX_SYMBOL_STR(scsi_report_device_reset) },
	{ 0x33076644, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,usbcore";

MODULE_ALIAS("usb:v03EBp2002d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EEp6906d0003dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0107d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p070Cd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p4002d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F3p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp6205d0003dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p001Cd0113dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0419p0100d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0419pAACEd0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0419pAAF5d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0419pAAF6d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0420p0001d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0019d059[2-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0019d0610dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0019d060*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p042Ed0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0433d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0434d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0444d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0446d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p044Ed0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p047Cd0610dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p047Cd03[7-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p047Cd060*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p047Cd0[4-5]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0492d045[2-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0492d04[6-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0492d0[5-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0492d[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p0495d0370dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p04B9d0350dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p05AFd0742dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p06AAd1110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p5416d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0457p0150d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0457p0151d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045EpFFFFd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046BpFF40d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0480pD010d0[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0480pD010d[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0100d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0101d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0103d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0107d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A4p0004d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p3010d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B0p0301d0010dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B3p4001d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0601d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0602d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0100d2210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0100d220*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0100d2[0-1]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0100d[0-1]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CEp0002d026Cdc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp0901d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp0901d01*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp0D05d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp2372d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp2373d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0001d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0002d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0006d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0006d0205dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0007d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0007d01*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0009d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p000Ad0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p000Bd0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p000Cd0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0101d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p507Cd0220dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5136d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp80C2d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0115d0133dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA140d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1801d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1804d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1807d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1905d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1911d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d010[6-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d0450dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d01[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d04[0-4]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d0[2-3]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d0610dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d060*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0010d05*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0025d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Cd050[1-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Cd2000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Cd05[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Cd0[6-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Cd1*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Dd0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed010[6-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed0310dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed01[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed030*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed02*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Ed0500dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp006Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp016Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp02A5d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp2020d0210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp2020d020*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp2020d0[0-1]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Bp0000d0[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Bp0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v058Fp6387d0141dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d2210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d220*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d2[0-1]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d[0-1]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Bp0001d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Bp0040d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp0643d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp0651d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0060d110[4-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0060d1110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp120Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DCpB002d011[0-3]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DCpB002d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DCpB002d00*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p0701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p0702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p0723d9451dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0636p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p0000d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Fp8000d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp1063d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp2317d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp2507d000[1-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp2507d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp2507d00[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp3507d000[1-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp3507d010[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp3507d00[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0686p4011d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0686p4017d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0693p0005d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Bp3004d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CAp2003d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Bp3203d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Bp32BBd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Bp3203d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0727p0306d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0001d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0002d0009dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0100d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07ABpFCCDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AFp0004d013[0-3]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AFp0004d01[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AFp0005d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA4A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CFp1001d[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CFp1167d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0839p000Ad0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0840p0082d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0840p0084d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0840p0085d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v084BpA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v084Dp0011d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0851p1542d0002dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0851p1543d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0026d013[0-3]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0026d01[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0028d013[0-3]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0028d01[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08BDp1100d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp3103d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Ap1001d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Ap1050d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Ap1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Cp1132d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Cp6000d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0004d1000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp2011d0101dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp20FFd0101dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6971d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7401d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7501d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7701d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7706d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7901d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A01d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A05d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8300d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8302d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8304d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pC100d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD057d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD058d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD157d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD257d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD357d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p2300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3010d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p1060d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p410Ad000[1-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p410Ad00[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p410Ad0[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p410Ad[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p5200d000[1-9]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p5200d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p5200d00[1-9]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D96p5200d01*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DC4p0073d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DD8p1060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DD8pD202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DDAp0001d0012dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DDAp0301d0012dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E21p0520d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ED1p6660d0300dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ED1p6660d0[1-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EA0p2168d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EA0p6828d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ED1p7636d0103dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F19p0103d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F19p0105d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p042Ed0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCAp8004d0201dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCEpD008d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCEpD0E1d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCEpE030d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCEpE031d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FCEpE092d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1019p0C55d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1019p0C55d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1019p0C55d00*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p070Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10D6p2200d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1186p3E04d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0FFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1210p0003d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1001d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1003d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1004d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1401d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1402d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1403d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1404d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1405d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1406d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1407d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1408d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1409d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Ad0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Bd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Cd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Dd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Ed0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p140Fd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1410d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1411d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1412d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1413d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1414d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1415d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1416d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1417d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1418d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1419d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Ad0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Bd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Cd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Dd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Ed0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p141Fd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1420d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1421d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1422d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1423d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1424d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1425d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1426d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1427d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1428d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1429d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Ad0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Bd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Cd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Dd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Ed0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p142Fd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1430d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1431d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1432d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1433d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1434d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1435d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1436d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1437d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1438d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p1439d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Ad0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Bd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Cd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Dd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Ed0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D1p143Fd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v132Bp000Bd0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1370p6828d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3609d0209dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FEp3600d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6600d0201dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d011[4-6]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp2329d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp2566d0114dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp9561d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0007d013[0-3]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0007d01[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1652p6600d0201dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v174Cp55AAd0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0400d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1822p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1908p1315d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1908p1320d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1908p3335d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2p1225d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B1Cp1AB5d0200dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1DE1pC102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1E68p001Bd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1E74p4621d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2027pA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2116p0320d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p3010d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p6426d0101dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2735p100Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3340pFFFFd0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4102p1020d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4102p1059d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4146pBA01d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vC251p4003d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vED06p4500d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vED10p7636d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p2312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p3320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pA0A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc03ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc04ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc05ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc02ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc04ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc05ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc01ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc02ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc03ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc04ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc05ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
