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
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x363b6579, __VMLINUX_SYMBOL_STR(uart_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xfaa85653, __VMLINUX_SYMBOL_STR(uart_register_driver) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb2cbccd9, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xabbcef6d, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x90ab75a0, __VMLINUX_SYMBOL_STR(pcim_iomap_regions_request_all) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd7f68d61, __VMLINUX_SYMBOL_STR(uart_write_wakeup) },
	{ 0x5d88b68d, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xf9fb73c3, __VMLINUX_SYMBOL_STR(uart_insert_char) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x247c30a2, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x2085f2ba, __VMLINUX_SYMBOL_STR(uart_add_one_port) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x5641485b, __VMLINUX_SYMBOL_STR(tty_termios_encode_baud_rate) },
	{ 0x1a249530, __VMLINUX_SYMBOL_STR(uart_update_timeout) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x41a89e76, __VMLINUX_SYMBOL_STR(uart_get_divisor) },
	{ 0xa1fcbec3, __VMLINUX_SYMBOL_STR(uart_get_baud_rate) },
	{ 0xde8714c9, __VMLINUX_SYMBOL_STR(uart_remove_one_port) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000011FEd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000045sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000047sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000067sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000068sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000072sv*sd*bc*sc*i*");
