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
	{ 0xb29781c2, __VMLINUX_SYMBOL_STR(usb_function_deactivate) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4dd5e461, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbab767b0, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_ss) },
	{ 0x6dbdf0fe, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xe1380788, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0xc495fc55, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x3a53b0d2, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xd8d32b10, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0xf6b605ed, __VMLINUX_SYMBOL_STR(v4l2_event_queue) },
	{ 0x14a9b623, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x3c01002c, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0xeaf3e8de, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x7fd55c87, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x41d1998a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xb231c8fd, __VMLINUX_SYMBOL_STR(config_item_init_type_name) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9d1d8d, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0x1a69a2d4, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb90255e1, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xc84853b7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x95aaa781, __VMLINUX_SYMBOL_STR(usb_function_activate) },
	{ 0x2a4ce24, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x77117d54, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5f005368, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc770bcca, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe946559d, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xf5ab0d69, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x11292a5f, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x624ee6bc, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x6d9ac51f, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4d8512ca, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x95936806, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xa3d13970, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x2279f23c, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xcf927287, __VMLINUX_SYMBOL_STR(usb_composite_setup_continue) },
	{ 0xce3d337b, __VMLINUX_SYMBOL_STR(usb_ep_dequeue) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x86b18ea4, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0xcb7a3b5a, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcef51982, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x22600edc, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x5377e556, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0xe6392c67, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5162f30b, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x165298f7, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xed68cdfd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x7e9b8c97, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x377f092, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x653168df, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0x65ef0fe5, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0xbc7a8d09, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xa0e7c1ca, __VMLINUX_SYMBOL_STR(config_group_find_item) },
	{ 0xdc852fd7, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0xd7286d17, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x33a33984, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x6b7bd392, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,videodev,udc-core,videobuf2-core,videobuf2-v4l2,videobuf2-vmalloc";

