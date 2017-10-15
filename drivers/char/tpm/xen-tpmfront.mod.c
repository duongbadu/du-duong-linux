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
	{ 0xd8224863, __VMLINUX_SYMBOL_STR(xenbus_unregister_driver) },
	{ 0xc542299, __VMLINUX_SYMBOL_STR(__xenbus_register_frontend) },
	{ 0x85cb2c45, __VMLINUX_SYMBOL_STR(xen_has_pv_devices) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x46e46121, __VMLINUX_SYMBOL_STR(tpm_chip_register) },
	{ 0x7f19b4a4, __VMLINUX_SYMBOL_STR(tpm_get_timeouts) },
	{ 0x7d4a6c1e, __VMLINUX_SYMBOL_STR(xenbus_dev_error) },
	{ 0x8c06a108, __VMLINUX_SYMBOL_STR(xenbus_transaction_start) },
	{ 0xca81ea9a, __VMLINUX_SYMBOL_STR(xenbus_transaction_end) },
	{ 0x73013896, __VMLINUX_SYMBOL_STR(xenbus_printf) },
	{ 0xe41534ce, __VMLINUX_SYMBOL_STR(bind_evtchn_to_irqhandler) },
	{ 0xcd29df99, __VMLINUX_SYMBOL_STR(xenbus_alloc_evtchn) },
	{ 0x5577d14b, __VMLINUX_SYMBOL_STR(xenbus_grant_ring) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2dd7bcb3, __VMLINUX_SYMBOL_STR(tpmm_chip_alloc) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2d33b1db, __VMLINUX_SYMBOL_STR(xenbus_dev_fatal) },
	{ 0xc5f24540, __VMLINUX_SYMBOL_STR(xenbus_switch_state) },
	{ 0x964add15, __VMLINUX_SYMBOL_STR(xenbus_scanf) },
	{ 0xba8a0660, __VMLINUX_SYMBOL_STR(xenbus_frontend_closed) },
	{ 0xd38c99f1, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x95de5f4f, __VMLINUX_SYMBOL_STR(tpm_calc_ordinal_duration) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x47d96815, __VMLINUX_SYMBOL_STR(wait_for_tpm_stat) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x209ec764, __VMLINUX_SYMBOL_STR(xen_event_channel_op_compat) },
	{ 0x45d14bdf, __VMLINUX_SYMBOL_STR(hypercall_page) },
	{ 0xe50d64b2, __VMLINUX_SYMBOL_STR(tpm_chip_unregister) },
	{ 0x7712771a, __VMLINUX_SYMBOL_STR(unbind_from_irqhandler) },
	{ 0xedbc6f67, __VMLINUX_SYMBOL_STR(gnttab_end_foreign_access) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";

