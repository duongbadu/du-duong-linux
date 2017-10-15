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
	{ 0xed68cdfd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x7fd55c87, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xd7286d17, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xd19a4905, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0x634d760c, __VMLINUX_SYMBOL_STR(v4l2_m2m_reqbufs) },
	{ 0x237dfbf, __VMLINUX_SYMBOL_STR(v4l2_m2m_job_finish) },
	{ 0x837362e9, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_init) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7ceeef89, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamon) },
	{ 0xe946559d, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeaf3e8de, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xc6fca5ad, __VMLINUX_SYMBOL_STR(v4l2_m2m_release) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8384062a, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x41d1998a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x17eb0eee, __VMLINUX_SYMBOL_STR(v4l2_m2m_init) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc495fc55, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xc84853b7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x31fcb6f6, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x47611c55, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x6d9ac51f, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2dcf5653, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_remove) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x622b0f73, __VMLINUX_SYMBOL_STR(v4l2_m2m_poll) },
	{ 0x4e7247b0, __VMLINUX_SYMBOL_STR(v4l2_m2m_mmap) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbc7a8d09, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xa37688e4, __VMLINUX_SYMBOL_STR(v4l2_m2m_get_vq) },
	{ 0x9d26e944, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xcb7a3b5a, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa22ebfdf, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_queue) },
	{ 0x6b7bd392, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x4713f924, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0x3ca30a13, __VMLINUX_SYMBOL_STR(v4l2_m2m_querybuf) },
	{ 0x5fd69fb1, __VMLINUX_SYMBOL_STR(v4l2_m2m_qbuf) },
	{ 0x1efea22a, __VMLINUX_SYMBOL_STR(v4l2_m2m_dqbuf) },
	{ 0x34260534, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamoff) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xd7d773ca, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x1b083095, __VMLINUX_SYMBOL_STR(v4l2_m2m_next_buf) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,v4l2-mem2mem,v4l2-common,videobuf2-core,videobuf2-dma-contig";

