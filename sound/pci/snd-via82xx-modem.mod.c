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
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfa140a09, __VMLINUX_SYMBOL_STR(snd_ac97_write) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xbdb6d803, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x98058e4f, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xe3bde5bb, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x15d93988, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xec4df693, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x57caaafe, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x3dd12a0b, __VMLINUX_SYMBOL_STR(snd_pcm_sgbuf_ops_page) },
	{ 0xeec8156c, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd7347ecc, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0xe0ab8897, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x996d50b6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe05a21af, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x945ee69d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xbadd7edf, __VMLINUX_SYMBOL_STR(snd_ac97_suspend) },
	{ 0x475a381f, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa9d50ee, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x88b19837, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x836349f, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0xcceb9972, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a9835fd, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xea7c17a, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0xe27be7e9, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xeefe1446, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x6ad0b4cb, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x957bad34, __VMLINUX_SYMBOL_STR(snd_ac97_resume) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-ac97-codec,snd-pcm,snd";

MODULE_ALIAS("pci:v00001106d00003068sv*sd*bc*sc*i*");
