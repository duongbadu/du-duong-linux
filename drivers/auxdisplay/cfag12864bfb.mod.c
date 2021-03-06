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
	{ 0x73bb6a00, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0xc16173ab, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x3221853a, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0xa36925d7, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0xa0043546, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0xecb2e5d, __VMLINUX_SYMBOL_STR(cfag12864b_disable) },
	{ 0x6d8a95e0, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x668e03a0, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xe942b025, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x7cebd20f, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x3389f926, __VMLINUX_SYMBOL_STR(cfag12864b_enable) },
	{ 0x2ff9464, __VMLINUX_SYMBOL_STR(cfag12864b_isinited) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x67052448, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc2c0edbe, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0xc48e9d95, __VMLINUX_SYMBOL_STR(cfag12864b_buffer) },
	{ 0x83358d05, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x162302d6, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x4611fcec, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sysimgblt,syscopyarea,sysfillrect,fb_sys_fops,cfag12864b";

