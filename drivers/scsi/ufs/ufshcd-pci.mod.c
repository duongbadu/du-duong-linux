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
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd4825f5d, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0x880c04cb, __VMLINUX_SYMBOL_STR(ufshcd_init) },
	{ 0x2cbfb9a1, __VMLINUX_SYMBOL_STR(ufshcd_alloc_host) },
	{ 0xabbcef6d, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x4e9fb65d, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xd7a02085, __VMLINUX_SYMBOL_STR(ufshcd_remove) },
	{ 0xe7dfd697, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x14b11c56, __VMLINUX_SYMBOL_STR(ufshcd_shutdown) },
	{ 0xf11c10d, __VMLINUX_SYMBOL_STR(ufshcd_system_suspend) },
	{ 0xdba4d679, __VMLINUX_SYMBOL_STR(ufshcd_system_resume) },
	{ 0x3621ccea, __VMLINUX_SYMBOL_STR(ufshcd_runtime_suspend) },
	{ 0xe81af39a, __VMLINUX_SYMBOL_STR(ufshcd_runtime_resume) },
	{ 0x14efefc5, __VMLINUX_SYMBOL_STR(ufshcd_runtime_idle) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ufshcd";

MODULE_ALIAS("pci:v0000144Dd0000C00Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F21393DE2136B801DBCA0A3");
