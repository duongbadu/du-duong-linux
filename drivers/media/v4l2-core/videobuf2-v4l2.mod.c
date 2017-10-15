#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x936480e7, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x699b7748, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0x14a9b623, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0xc7d4f6fe, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0xde423f29, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdfcbe241, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0x5adf19ec, __VMLINUX_SYMBOL_STR(vb2_core_poll) },
	{ 0xff98e247, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0xe5acf2dc, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0x754535eb, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19b3bc6f, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x66cac49f, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x8f1a75fa, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0xfdc6cd13, __VMLINUX_SYMBOL_STR(vb2_write) },
	{ 0xcb7a3b5a, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x520c5047, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0xee490dba, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0x2845484, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0xb7815329, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0x8aaf0053, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0xb2aaaa87, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev";

