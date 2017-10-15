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
	{ 0x11b9c9ee, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0xe15a6bab, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4dd5e461, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc495fc55, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc983eb33, __VMLINUX_SYMBOL_STR(media_device_unregister_entity) },
	{ 0x9ffeaad6, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0x99ac7aed, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0x445b1e88, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0xfdc36d88, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xeaf3e8de, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xf7f33d69, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0x6046cabc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x94f3fb04, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x85bead9b, __VMLINUX_SYMBOL_STR(v4l2_mc_create_media_graph) },
	{ 0x2a926f88, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x7fd55c87, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xe003fc2f, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0x41d1998a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb692874f, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x133c17ee, __VMLINUX_SYMBOL_STR(media_entity_setup_link) },
	{ 0xc84853b7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x75ee9182, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x9909196e, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x2a4ce24, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb9efed09, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x7ed67c84, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x754535eb, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe946559d, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc4e4e2c9, __VMLINUX_SYMBOL_STR(media_entity_pads_init) },
	{ 0xd16a8ea5, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xb9572f1f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x624ee6bc, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x6d9ac51f, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x2505955f, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xabdb8cde, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xc737270c, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x428d328c, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x521eaffa, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x7aadcef4, __VMLINUX_SYMBOL_STR(media_device_register_entity) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0xf5786987, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xebb608f8, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xcb7a3b5a, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe930a907, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0x8e5aa57f, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0x4561d8e5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x88b6b96a, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf721c45b, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xd2663e21, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x2f87e238, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xc291a39e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xed68cdfd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xf9c60fc2, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x12464bf7, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x8ed02e65, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0xc2aaef52, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xd7286d17, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x170b0a8e, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xe4cb1047, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0x6b7bd392, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,em28xx,videodev,media,v4l2-common,videobuf2-vmalloc,usbcore,videobuf2-core";


MODULE_INFO(srcversion, "544E0738F74C3073B3CB409");
