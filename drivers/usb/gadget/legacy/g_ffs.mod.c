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
	{ 0x4a492ac9, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x354a9f40, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x8af83372, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x52405fd, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe6b1b614, __VMLINUX_SYMBOL_STR(ffs_name_dev) },
	{ 0x68f95abc, __VMLINUX_SYMBOL_STR(ffs_single_dev) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x981a520d, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x68470fd0, __VMLINUX_SYMBOL_STR(usb_remove_function) },
	{ 0xe759c924, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x50c3a39d, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6a2d993a, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xc3db2be5, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x67212fa0, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x4dc3cebc, __VMLINUX_SYMBOL_STR(rndis_borrow_net) },
	{ 0xb19c2244, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xcbd16521, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x3a25ecb7, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x2f896c5, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xd15c9b9a, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xb1aadab1, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x77117d54, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x6995d72b, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0x83e50e85, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_fs,libcomposite,usb_f_rndis,u_ether";

