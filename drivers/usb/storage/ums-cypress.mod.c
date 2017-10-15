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
	{ 0x6d890d6e, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x1bc3edc2, __VMLINUX_SYMBOL_STR(usb_stor_sense_invalidCDB) },
	{ 0xc17c40c5, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0x1c041f90, __VMLINUX_SYMBOL_STR(scsi_eh_restore_cmnd) },
	{ 0xe133c95e, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1653e6a5, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0xd31caada, __VMLINUX_SYMBOL_STR(usb_stor_transparent_scsi_command) },
	{ 0xd97c69f8, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x33293f6e, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0xb0161d1e, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xfabc1534, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x30aebd93, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc99f8145, __VMLINUX_SYMBOL_STR(scsi_eh_prep_cmnd) },
	{ 0x2d4b1b61, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x98bd8eb5, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage,scsi_mod,usbcore";

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");
