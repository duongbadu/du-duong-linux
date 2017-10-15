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
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x89d78c38, __VMLINUX_SYMBOL_STR(lm3533_ctrlbank_enable) },
	{ 0xdbc67559, __VMLINUX_SYMBOL_STR(lm3533_ctrlbank_set_max_current) },
	{ 0xc6487114, __VMLINUX_SYMBOL_STR(devm_led_classdev_register) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9bc846ed, __VMLINUX_SYMBOL_STR(lm3533_ctrlbank_get_brightness) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x407345da, __VMLINUX_SYMBOL_STR(lm3533_ctrlbank_get_pwm) },
	{ 0xcd5dbb6e, __VMLINUX_SYMBOL_STR(lm3533_ctrlbank_set_pwm) },
	{ 0x5f005368, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xa954f555, __VMLINUX_SYMBOL_STR(lm3533_read) },
	{ 0x4d27cebc, __VMLINUX_SYMBOL_STR(lm3533_write) },
	{ 0x6f414325, __VMLINUX_SYMBOL_STR(lm3533_ctrlbank_set_brightness) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xca3770f4, __VMLINUX_SYMBOL_STR(lm3533_update) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7cb7979b, __VMLINUX_SYMBOL_STR(lm3533_ctrlbank_disable) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lm3533-ctrlbank,led-class,lm3533-core";

