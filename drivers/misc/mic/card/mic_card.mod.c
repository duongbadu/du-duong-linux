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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd421145c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x26f3d3bd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x818da066, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x7df382b3, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0xa23d6e7a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x2e68d7df, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x89831b48, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x2fcc3381, __VMLINUX_SYMBOL_STR(vop_unregister_device) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7bec7143, __VMLINUX_SYMBOL_STR(scif_register_device) },
	{ 0xe25493d4, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x6d8a95e0, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x9dc19d15, __VMLINUX_SYMBOL_STR(mbus_register_device) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4f524134, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6fbfbafe, __VMLINUX_SYMBOL_STR(mbus_unregister_device) },
	{ 0xfc96733d, __VMLINUX_SYMBOL_STR(vop_register_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xec853f1d, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xcb7e8cbb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x2f7fe70f, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x981e093, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x43c24eef, __VMLINUX_SYMBOL_STR(scif_unregister_device) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vop_bus,scif_bus,mic_bus";

