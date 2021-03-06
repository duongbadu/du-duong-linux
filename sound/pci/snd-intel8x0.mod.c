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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5fde815b, __VMLINUX_SYMBOL_STR(snd_ac97_tune_hardware) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xbdb6d803, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x98058e4f, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0x319768de, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0x3ecd2d52, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xe3bde5bb, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9229299e, __VMLINUX_SYMBOL_STR(snd_pci_quirk_lookup) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x15d93988, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9e913c1, __VMLINUX_SYMBOL_STR(snd_pcm_alt_chmaps) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xec4df693, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x4a3c460f, __VMLINUX_SYMBOL_STR(snd_ac97_pcm_assign) },
	{ 0xa78b399e, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x57caaafe, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0xdd32b4b, __VMLINUX_SYMBOL_STR(snd_ac97_get_short_name) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xeec8156c, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x3791bf52, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd7347ecc, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0xe0ab8897, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5ec06e10, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x996d50b6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe05a21af, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x945ee69d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x9889615b, __VMLINUX_SYMBOL_STR(param_ops_bint) },
	{ 0xbadd7edf, __VMLINUX_SYMBOL_STR(snd_ac97_suspend) },
	{ 0x475a381f, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x2207df9e, __VMLINUX_SYMBOL_STR(snd_ac97_update_power) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7843294d, __VMLINUX_SYMBOL_STR(snd_ac97_pcm_double_rate_rules) },
	{ 0xa04897e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xa9d50ee, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x88b19837, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x836349f, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0xd665b7e1, __VMLINUX_SYMBOL_STR(snd_ac97_update_bits) },
	{ 0x8fcce6f9, __VMLINUX_SYMBOL_STR(snd_ac97_set_rate) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a9835fd, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb146a16c, __VMLINUX_SYMBOL_STR(snd_ac97_pcm_open) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xea7c17a, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0xe27be7e9, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xeefe1446, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x4c509aca, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0x1baab8d, __VMLINUX_SYMBOL_STR(snd_pcm_limit_hw_rates) },
	{ 0x6ad0b4cb, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x957bad34, __VMLINUX_SYMBOL_STR(snd_ac97_resume) },
	{ 0x30294a90, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x76f4ed74, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xddadf55e, __VMLINUX_SYMBOL_STR(snd_ac97_pcm_close) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-ac97-codec,snd-pcm,snd";

MODULE_ALIAS("pci:v00008086d00002415sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002425sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002445sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002485sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007195sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000006Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000008Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000026Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007445sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005455sv*sd*bc*sc*i*");
