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
	{ 0x148fbb80, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0x2380e8eb, __VMLINUX_SYMBOL_STR(snd_vx_load_boot_image) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe9adaf82, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe044f3cd, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0xd8d4dc09, __VMLINUX_SYMBOL_STR(snd_vx_resume) },
	{ 0xb4ba1c5e, __VMLINUX_SYMBOL_STR(snd_vx_free_firmware) },
	{ 0x80ae1f80, __VMLINUX_SYMBOL_STR(snd_vx_dsp_boot) },
	{ 0x21023e83, __VMLINUX_SYMBOL_STR(snd_vx_dsp_load) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x58005e30, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0xa78b399e, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xeec8156c, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc3e9ed92, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xcc7917bc, __VMLINUX_SYMBOL_STR(snd_vx_suspend) },
	{ 0xb5e28fa4, __VMLINUX_SYMBOL_STR(snd_vx_check_reg_bit) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xaa6cf8e9, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x475a381f, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xaca77cc0, __VMLINUX_SYMBOL_STR(snd_vx_create) },
	{ 0xf1f04d23, __VMLINUX_SYMBOL_STR(snd_vx_irq_handler) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeb59d6a3, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x226138b0, __VMLINUX_SYMBOL_STR(snd_vx_threaded_irq_handler) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xbc758c25, __VMLINUX_SYMBOL_STR(snd_vx_setup_firmware) },
	{ 0xdc56d18f, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0xe27be7e9, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xccc241a8, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x29b1f651, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,snd-vx-lib,snd";

MODULE_ALIAS("pcmcia:m01F1c0100f*fn*pfn*pa*pb*pc*pd*");
