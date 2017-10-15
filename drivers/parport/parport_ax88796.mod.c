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
	{ 0xee0372f2, __VMLINUX_SYMBOL_STR(parport_ieee1284_read_byte) },
	{ 0x1c97677, __VMLINUX_SYMBOL_STR(parport_ieee1284_read_nibble) },
	{ 0x5e660e4, __VMLINUX_SYMBOL_STR(parport_ieee1284_write_compat) },
	{ 0xf8696cc9, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_write_addr) },
	{ 0x5f3b3d7d, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_read_data) },
	{ 0xdea1ee16, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_write_data) },
	{ 0xf71ae730, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_read_addr) },
	{ 0xc2477a0, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_write_addr) },
	{ 0x9535b4a, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_read_data) },
	{ 0x2aecf57f, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_write_data) },
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xfa8c0175, __VMLINUX_SYMBOL_STR(parport_announce_port) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5e3a3912, __VMLINUX_SYMBOL_STR(parport_irq_handler) },
	{ 0xefe4e5a8, __VMLINUX_SYMBOL_STR(parport_register_port) },
	{ 0x47611c55, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x9a2d64a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x99b16f8c, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x40046ba6, __VMLINUX_SYMBOL_STR(parport_remove_port) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

