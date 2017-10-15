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
	{ 0xf1f5d4da, __VMLINUX_SYMBOL_STR(usb_hcd_pci_pm_ops) },
	{ 0xed1ccfef, __VMLINUX_SYMBOL_STR(usb_hcd_pci_shutdown) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xcc76961b, __VMLINUX_SYMBOL_STR(xhci_init_driver) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x54ef1a5e, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd51e534b, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0xe164565, __VMLINUX_SYMBOL_STR(xhci_gen_setup) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa5e75e9a, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0x7312d0d9, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x83d60a8b, __VMLINUX_SYMBOL_STR(usb_create_shared_hcd) },
	{ 0x85986804, __VMLINUX_SYMBOL_STR(usb_hcd_pci_probe) },
	{ 0x27c1e63f, __VMLINUX_SYMBOL_STR(usb_amd_find_chipset_info) },
	{ 0x15bd72b2, __VMLINUX_SYMBOL_STR(xhci_dbg_trace) },
	{ 0xaec29114, __VMLINUX_SYMBOL_STR(pci_d3cold_disable) },
	{ 0xd169f3f9, __VMLINUX_SYMBOL_STR(xhci_suspend) },
	{ 0xbffafd8a, __VMLINUX_SYMBOL_STR(usb_enable_intel_xhci_ports) },
	{ 0x14db2458, __VMLINUX_SYMBOL_STR(xhci_resume) },
	{ 0x4a7eac0c, __VMLINUX_SYMBOL_STR(usb_hcd_pci_remove) },
	{ 0x8a11728d, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xbd963fc1, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xfaa06405, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0xb5c529e3, __VMLINUX_SYMBOL_STR(usb_hcd_is_primary_hcd) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x34a8da5f, __VMLINUX_SYMBOL_STR(__tracepoint_xhci_dbg_quirks) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,xhci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i30*");
