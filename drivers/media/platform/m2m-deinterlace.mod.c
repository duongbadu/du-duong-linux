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
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd7286d17, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xc495fc55, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x6b7bd392, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x4713f924, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0xa37688e4, __VMLINUX_SYMBOL_STR(v4l2_m2m_get_vq) },
	{ 0x837362e9, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_init) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x17eb0eee, __VMLINUX_SYMBOL_STR(v4l2_m2m_init) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x41d1998a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc84853b7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xec853f1d, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x622b0f73, __VMLINUX_SYMBOL_STR(v4l2_m2m_poll) },
	{ 0x4e7247b0, __VMLINUX_SYMBOL_STR(v4l2_m2m_mmap) },
	{ 0xa22ebfdf, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d26e944, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_release) },
	{ 0xcb7a3b5a, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x634d760c, __VMLINUX_SYMBOL_STR(v4l2_m2m_reqbufs) },
	{ 0x3ca30a13, __VMLINUX_SYMBOL_STR(v4l2_m2m_querybuf) },
	{ 0x5fd69fb1, __VMLINUX_SYMBOL_STR(v4l2_m2m_qbuf) },
	{ 0x1efea22a, __VMLINUX_SYMBOL_STR(v4l2_m2m_dqbuf) },
	{ 0x7ceeef89, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamon) },
	{ 0x34260534, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamoff) },
	{ 0xd7d773ca, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x1b083095, __VMLINUX_SYMBOL_STR(v4l2_m2m_next_buf) },
	{ 0x6d9ac51f, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x2dcf5653, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_remove) },
	{ 0x237dfbf, __VMLINUX_SYMBOL_STR(v4l2_m2m_job_finish) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2f7fe70f, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xeaf3e8de, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xe946559d, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc6fca5ad, __VMLINUX_SYMBOL_STR(v4l2_m2m_release) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf2-v4l2,videobuf2-dma-contig,v4l2-mem2mem,videobuf2-core";


MODULE_INFO(srcversion, "34500E32B1334F7438E43E2");
