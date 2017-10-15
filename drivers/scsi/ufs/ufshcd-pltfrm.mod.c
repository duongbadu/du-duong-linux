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
	{ 0x3621ccea, __VMLINUX_SYMBOL_STR(ufshcd_runtime_suspend) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2cbfb9a1, __VMLINUX_SYMBOL_STR(ufshcd_alloc_host) },
	{ 0x31fcb6f6, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xf11c10d, __VMLINUX_SYMBOL_STR(ufshcd_system_suspend) },
	{ 0x880c04cb, __VMLINUX_SYMBOL_STR(ufshcd_init) },
	{ 0xdba4d679, __VMLINUX_SYMBOL_STR(ufshcd_system_resume) },
	{ 0x14b11c56, __VMLINUX_SYMBOL_STR(ufshcd_shutdown) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x14efefc5, __VMLINUX_SYMBOL_STR(ufshcd_runtime_idle) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe81af39a, __VMLINUX_SYMBOL_STR(ufshcd_runtime_resume) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbecdd5b1, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x124ee656, __VMLINUX_SYMBOL_STR(ufshcd_dealloc_host) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47611c55, __VMLINUX_SYMBOL_STR(platform_get_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ufshcd";


MODULE_INFO(srcversion, "CC2FC83FD2A50588E322CA3");
