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
	{ 0x85f99891, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x97e4bdef, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_unregister_dev) },
	{ 0x1fa541d7, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_recv_frame) },
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xf0ffbcfa, __VMLINUX_SYMBOL_STR(nfcmrvl_parse_dt) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x640dcd8f, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe0b74ff0, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x5c33997c, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_register_dev) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfcmrvl";

MODULE_ALIAS("i2c:nfcmrvl_i2c");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-i2c");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-i2cC*");
