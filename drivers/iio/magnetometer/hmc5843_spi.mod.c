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
	{ 0x53bb11db, __VMLINUX_SYMBOL_STR(hmc5843_common_resume) },
	{ 0x96d4805d, __VMLINUX_SYMBOL_STR(hmc5843_common_suspend) },
	{ 0x65ab216, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x1c62a17f, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x5316134, __VMLINUX_SYMBOL_STR(hmc5843_common_probe) },
	{ 0xeee20c35, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0x70d104dc, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x7af1f1d2, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xed662ddc, __VMLINUX_SYMBOL_STR(hmc5843_common_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hmc5843_core";

MODULE_ALIAS("spi:hmc5983");
