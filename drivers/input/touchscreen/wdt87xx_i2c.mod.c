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
	{ 0xdbe10ac3, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2f81ced5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xa8f61e6e, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe0ed97fc, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x1bed39b3, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xf0edc15f, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x173a582b, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x76515bbb, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x503a8f1a, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x754535eb, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x23aa7ef4, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xe0b74ff0, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xad37e919, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x49ebfdb5, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x19ce2683, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x70fe334f, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x85f99891, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:WDHT0001:*");
MODULE_ALIAS("i2c:wdt87xx_i2c");

MODULE_INFO(srcversion, "6FF8B1750775CF7AAC3887A");
