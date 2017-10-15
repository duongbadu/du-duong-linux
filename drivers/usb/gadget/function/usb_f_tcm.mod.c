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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbab767b0, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_ss) },
	{ 0x6dbdf0fe, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0xe1380788, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x6e8896ab, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x3a53b0d2, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xd8d32b10, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x3f5b916e, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3ab9364d, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x6c21d876, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x3c01002c, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0x11d1f6a0, __VMLINUX_SYMBOL_STR(configfs_undepend_item) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x7dd43efd, __VMLINUX_SYMBOL_STR(percpu_ida_free) },
	{ 0x758a8717, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x971af21b, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9402a6a5, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0x182048e8, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0x1a69a2d4, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0xb90255e1, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xe0875eb1, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x77117d54, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf99dfbac, __VMLINUX_SYMBOL_STR(unregister_gadget_item) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x95936806, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x57b5861b, __VMLINUX_SYMBOL_STR(percpu_ida_alloc) },
	{ 0x2279f23c, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xcf927287, __VMLINUX_SYMBOL_STR(usb_composite_setup_continue) },
	{ 0x3e046816, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5860c9b4, __VMLINUX_SYMBOL_STR(transport_send_check_condition_and_sense) },
	{ 0x6c118537, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0xf9e2bbb2, __VMLINUX_SYMBOL_STR(transport_init_se_cmd) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x22600edc, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5162f30b, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9f4fd552, __VMLINUX_SYMBOL_STR(target_alloc_session) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3e154e34, __VMLINUX_SYMBOL_STR(configfs_depend_item_unlocked) },
	{ 0x2ca590b8, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x377f092, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x74b0ed2, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3f0f863f, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,target_core_mod,udc-core,scsi_mod";

