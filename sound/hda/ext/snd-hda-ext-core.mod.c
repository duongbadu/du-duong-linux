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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc2d59bbb, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x98058e4f, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc0998f21, __VMLINUX_SYMBOL_STR(snd_hdac_device_exit) },
	{ 0xb69d457, __VMLINUX_SYMBOL_STR(snd_hda_bus_type) },
	{ 0x1a03bd74, __VMLINUX_SYMBOL_STR(snd_hdac_bus_init_cmd_io) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x43d97d3e, __VMLINUX_SYMBOL_STR(snd_hdac_bus_stop_cmd_io) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x65ab216, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x856366e5, __VMLINUX_SYMBOL_STR(snd_hdac_stream_assign) },
	{ 0xb5815e32, __VMLINUX_SYMBOL_STR(snd_hdac_device_init) },
	{ 0x736b90d1, __VMLINUX_SYMBOL_STR(snd_hdac_device_unregister) },
	{ 0xb02c435c, __VMLINUX_SYMBOL_STR(snd_hdac_stream_init) },
	{ 0x7c3a6478, __VMLINUX_SYMBOL_STR(snd_hdac_bus_init) },
	{ 0x8e5984e1, __VMLINUX_SYMBOL_STR(snd_hdac_stream_stop) },
	{ 0xbe798726, __VMLINUX_SYMBOL_STR(snd_hdac_device_register) },
	{ 0x3e05bf46, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xa22cff49, __VMLINUX_SYMBOL_STR(snd_hdac_bus_exit) },
	{ 0xa9d50ee, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb2f1ff96, __VMLINUX_SYMBOL_STR(snd_hdac_bus_stop_chip) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x92d6f964, __VMLINUX_SYMBOL_STR(snd_hdac_stream_release) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-hda-core";

