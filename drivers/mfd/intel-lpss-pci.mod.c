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
	{ 0xb3efccfa, __VMLINUX_SYMBOL_STR(intel_lpss_resume) },
	{ 0x7f5931af, __VMLINUX_SYMBOL_STR(intel_lpss_suspend) },
	{ 0x50f40901, __VMLINUX_SYMBOL_STR(intel_lpss_prepare) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd4825f5d, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x8c49cd18, __VMLINUX_SYMBOL_STR(intel_lpss_probe) },
	{ 0xd4a74794, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xddca3e27, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0x2e521e73, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x395e63ed, __VMLINUX_SYMBOL_STR(intel_lpss_remove) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xe7dfd697, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel-lpss";

MODULE_ALIAS("pci:v00008086d00000AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AAEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AB8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ABEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D29sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A127sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A128sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A12Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A166sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2E6sv*sd*bc*sc*i*");
