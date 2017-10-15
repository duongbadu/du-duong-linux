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
	{ 0xed68cdfd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x7fd55c87, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xebb608f8, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xb9efed09, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xd7286d17, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x94f3fb04, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x75ee9182, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x4dd5e461, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xb9572f1f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xa11d7096, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xc2aaef52, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x2a926f88, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x521eaffa, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x7ed67c84, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x2f87e238, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x11b9c9ee, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf721c45b, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x8843e054, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x41d1998a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x6b7bd392, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x2a4ce24, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x6046cabc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xc291a39e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xc84853b7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6d00344, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x33076644, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x617ce82, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf7f33d69, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xe946559d, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x9909196e, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xeaf3e8de, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x3928a1f7, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa08a521a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xc2e0ec20, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf230ac21, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xef8cf622, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x6d9ac51f, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x624ee6bc, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x708b36f8, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcb7a3b5a, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x14f9e09b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,usbcore,videobuf2-vmalloc,videobuf2-core";

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CC5C6346F58A9EA8C6B6E18");
