#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x67a4b66, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0x737db660, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0x65078795, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0x16cff7c0, __VMLINUX_SYMBOL_STR(devm_iio_device_match) },
	{ 0x5fb6aaa2, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x273af48e, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0x3ed1042, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0xcc5d47f4, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x1eacd129, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcfc2cae8, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x78c9b7fc, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0x22c51ac3, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kfifo_buf,industrialio";

