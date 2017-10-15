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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x4dd5e461, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xaae5524c, __VMLINUX_SYMBOL_STR(cx88_newstation) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9ffeaad6, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x6046cabc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x94f3fb04, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x2a926f88, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x7fd55c87, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x41d1998a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xeb9bb34b, __VMLINUX_SYMBOL_STR(cx88_sram_channel_setup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x1aa30d24, __VMLINUX_SYMBOL_STR(cx88_sram_channel_dump) },
	{ 0x75ee9182, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x2efafb36, __VMLINUX_SYMBOL_STR(cx88_set_tvaudio) },
	{ 0x4216fc84, __VMLINUX_SYMBOL_STR(cx88_sram_channels) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd1805152, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb9efed09, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x7ed67c84, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28d5e754, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xe946559d, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xb9572f1f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x6d9ac51f, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x25f53a08, __VMLINUX_SYMBOL_STR(cx88_set_stereo) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x66cac49f, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0xfc4fc0ce, __VMLINUX_SYMBOL_STR(cx88_risc_buffer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x521eaffa, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xd7d773ca, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x708b36f8, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x98379f1c, __VMLINUX_SYMBOL_STR(cx88_ir_start) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xf5786987, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xebb608f8, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x4d749df5, __VMLINUX_SYMBOL_STR(cx88_set_tvnorm) },
	{ 0xcb7a3b5a, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4561d8e5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xbbf2b466, __VMLINUX_SYMBOL_STR(cx88_ir_stop) },
	{ 0x2f607af4, __VMLINUX_SYMBOL_STR(cx88_get_stereo) },
	{ 0x47f2a270, __VMLINUX_SYMBOL_STR(cx88_core_get) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb13bb23, __VMLINUX_SYMBOL_STR(cx88_core_irq) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x904b8696, __VMLINUX_SYMBOL_STR(cx88_audio_thread) },
	{ 0xf721c45b, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x8a11728d, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xb931f352, __VMLINUX_SYMBOL_STR(cx88_core_put) },
	{ 0x2f87e238, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xce5a46f5, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x6706aa6b, __VMLINUX_SYMBOL_STR(cx88_vdev_init) },
	{ 0xc56839ae, __VMLINUX_SYMBOL_STR(cx88_shutdown) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xed68cdfd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xf4bec36a, __VMLINUX_SYMBOL_STR(cx88_set_scale) },
	{ 0x6be94d28, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0x63c0f2d7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0x7642ed3c, __VMLINUX_SYMBOL_STR(cx88_print_irqbits) },
	{ 0xf24edb37, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xc2aaef52, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x45629194, __VMLINUX_SYMBOL_STR(cx88_wakeup) },
	{ 0xc10e355d, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0xd7286d17, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x68656b9e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x30c05e0a, __VMLINUX_SYMBOL_STR(cx88_reset) },
	{ 0xc89fb7ca, __VMLINUX_SYMBOL_STR(vb2_dma_sg_memops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe1abda02, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x6b7bd392, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,cx88xx,v4l2-common,videobuf2-core,videobuf2-dma-sg";

MODULE_ALIAS("pci:v000014F1d00008800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "58D09B2C6C5BC8175E3056C");
