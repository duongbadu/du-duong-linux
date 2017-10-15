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
	{ 0x4a7eac0c, __VMLINUX_SYMBOL_STR(usb_hcd_pci_remove) },
	{ 0x85986804, __VMLINUX_SYMBOL_STR(usb_hcd_pci_probe) },
	{ 0x6853bb42, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x5185e020, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x821bd900, __VMLINUX_SYMBOL_STR(ohci_resume) },
	{ 0xc5205bd7, __VMLINUX_SYMBOL_STR(ohci_suspend) },
	{ 0xb4c85e3d, __VMLINUX_SYMBOL_STR(ohci_init_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0xda7e816c, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x929bc3ef, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x401db6aa, __VMLINUX_SYMBOL_STR(ohci_restart) },
	{ 0x333901b3, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd87fc0a0, __VMLINUX_SYMBOL_STR(usb_amd_prefetch_quirk) },
	{ 0x27c1e63f, __VMLINUX_SYMBOL_STR(usb_amd_find_chipset_info) },
	{ 0xa84796f2, __VMLINUX_SYMBOL_STR(ohci_setup) },
	{ 0xf0e0d135, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,ohci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i10*");
MODULE_ALIAS("pci:v0000104Ad0000CC01sv*sd*bc*sc*i*");
