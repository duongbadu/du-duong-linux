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
	{ 0xd19a4905, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0xf271d013, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x876cbefa, __VMLINUX_SYMBOL_STR(mc13xxx_irq_request) },
	{ 0x9807d25f, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x19e0f9a3, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0x356461c8, __VMLINUX_SYMBOL_STR(rtc_time64_to_tm) },
	{ 0xddce76a5, __VMLINUX_SYMBOL_STR(mc13xxx_irq_status) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4f2250ba, __VMLINUX_SYMBOL_STR(rtc_tm_to_time64) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbcb7214d, __VMLINUX_SYMBOL_STR(mc13xxx_reg_write) },
	{ 0x72e3ea33, __VMLINUX_SYMBOL_STR(mc13xxx_reg_read) },
	{ 0x4d7de214, __VMLINUX_SYMBOL_STR(mc13xxx_irq_free) },
	{ 0xbfe61ddb, __VMLINUX_SYMBOL_STR(mc13xxx_unlock) },
	{ 0xd439dbbc, __VMLINUX_SYMBOL_STR(mc13xxx_irq_unmask) },
	{ 0xc3df617e, __VMLINUX_SYMBOL_STR(mc13xxx_irq_mask) },
	{ 0xdf080492, __VMLINUX_SYMBOL_STR(mc13xxx_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mc13xxx-core";

MODULE_ALIAS("platform:mc13783-rtc");
MODULE_ALIAS("platform:mc13892-rtc");
MODULE_ALIAS("platform:mc34708-rtc");
