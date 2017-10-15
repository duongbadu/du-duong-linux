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
	{ 0x5ac12c72, __VMLINUX_SYMBOL_STR(ipack_driver_unregister) },
	{ 0x60aee85, __VMLINUX_SYMBOL_STR(ipack_driver_register) },
	{ 0x5641485b, __VMLINUX_SYMBOL_STR(tty_termios_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xd18d4a9, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc4b5abb, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x13b46120, __VMLINUX_SYMBOL_STR(tty_port_alloc_xmit_buf) },
	{ 0xb4c12ae9, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x9d597271, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x662bc2da, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x14e8cd5b, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x1917625c, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeb6de0f8, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x111f21be, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5d88b68d, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x27329e01, __VMLINUX_SYMBOL_STR(__tty_insert_flip_char) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc7291fa6, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x94175d8, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x386bc055, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x9c09ec6b, __VMLINUX_SYMBOL_STR(tty_port_free_xmit_buf) },
	{ 0x20234724, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipack";

MODULE_ALIAS("ipack:f01v000000F0d00000022*");
MODULE_ALIAS("ipack:f01v000000F0d0000002A*");
MODULE_ALIAS("ipack:f01v000000F0d00000048*");
