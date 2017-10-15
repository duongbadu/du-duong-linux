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
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x25c38f96, __VMLINUX_SYMBOL_STR(saa7134_vb2_buffer_queue) },
	{ 0xd07808c9, __VMLINUX_SYMBOL_STR(saa7134_ts_buffer_prepare) },
	{ 0xf558f937, __VMLINUX_SYMBOL_STR(saa7134_ts_buffer_init) },
	{ 0xed68cdfd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x7fd55c87, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x47c024e6, __VMLINUX_SYMBOL_STR(saa7134_ts_queue_setup) },
	{ 0xebb608f8, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xf721c45b, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xb9efed09, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xd7286d17, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x94f3fb04, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x75ee9182, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x4dd5e461, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xb9572f1f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xa11d7096, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x637755f9, __VMLINUX_SYMBOL_STR(saa7134_s_frequency) },
	{ 0x84217d7a, __VMLINUX_SYMBOL_STR(saa7134_g_frequency) },
	{ 0x35f28eaf, __VMLINUX_SYMBOL_STR(saa7134_s_tuner) },
	{ 0x996ab6d, __VMLINUX_SYMBOL_STR(saa7134_g_tuner) },
	{ 0x32ad021c, __VMLINUX_SYMBOL_STR(saa7134_s_input) },
	{ 0xec2b7632, __VMLINUX_SYMBOL_STR(saa7134_g_input) },
	{ 0x86d491d8, __VMLINUX_SYMBOL_STR(saa7134_enum_input) },
	{ 0x50e0196d, __VMLINUX_SYMBOL_STR(saa7134_querystd) },
	{ 0xed004ba5, __VMLINUX_SYMBOL_STR(saa7134_s_std) },
	{ 0x8c8d37d2, __VMLINUX_SYMBOL_STR(saa7134_g_std) },
	{ 0xc2aaef52, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x2a926f88, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x521eaffa, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xa4c726e8, __VMLINUX_SYMBOL_STR(vb2_ioctl_expbuf) },
	{ 0x7ed67c84, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x2f87e238, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x11b9c9ee, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0xaf016cb, __VMLINUX_SYMBOL_STR(saa7134_querycap) },
	{ 0xdf5ff1ff, __VMLINUX_SYMBOL_STR(saa7134_ts_unregister) },
	{ 0x2291cf6e, __VMLINUX_SYMBOL_STR(saa7134_ts_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x41d1998a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x6b7bd392, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0xc89fb7ca, __VMLINUX_SYMBOL_STR(vb2_dma_sg_memops) },
	{ 0x63c0f2d7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0xc291a39e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x485d24cf, __VMLINUX_SYMBOL_STR(saa7134_boards) },
	{ 0xbcce1256, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xf3c1f7ec, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcb7a3b5a, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x82b3cd7e, __VMLINUX_SYMBOL_STR(saa7134_ts_start_streaming) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x74e0e575, __VMLINUX_SYMBOL_STR(saa7134_ts_stop_streaming) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf7f33d69, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xbc7a8d09, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xe946559d, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7134,videobuf2-v4l2,videodev,videobuf2-dma-sg";

