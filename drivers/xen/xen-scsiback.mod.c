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
	{ 0x3e3bcce9, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6c118537, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0xd8224863, __VMLINUX_SYMBOL_STR(xenbus_unregister_driver) },
	{ 0x758a8717, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x981336cb, __VMLINUX_SYMBOL_STR(__xenbus_register_backend) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x3f5b916e, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1def880e, __VMLINUX_SYMBOL_STR(bind_interdomain_evtchn_to_irq) },
	{ 0x52817224, __VMLINUX_SYMBOL_STR(xenbus_map_ring_valloc) },
	{ 0xf7016530, __VMLINUX_SYMBOL_STR(xenbus_gather) },
	{ 0xd38c99f1, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xf235d69, __VMLINUX_SYMBOL_STR(xenbus_dev_is_online) },
	{ 0xfe2d570, __VMLINUX_SYMBOL_STR(xenbus_directory) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb99d5837, __VMLINUX_SYMBOL_STR(xenbus_read) },
	{ 0x964add15, __VMLINUX_SYMBOL_STR(xenbus_scanf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5860c9b4, __VMLINUX_SYMBOL_STR(transport_send_check_condition_and_sense) },
	{ 0xa9047342, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0xf4fded96, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x57b5861b, __VMLINUX_SYMBOL_STR(percpu_ida_alloc) },
	{ 0x9bc9fd8e, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x345775e9, __VMLINUX_SYMBOL_STR(gnttab_map_refs) },
	{ 0xa1374974, __VMLINUX_SYMBOL_STR(put_zone_device_page) },
	{ 0xce104fcc, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x2e5691c4, __VMLINUX_SYMBOL_STR(gnttab_unmap_refs) },
	{ 0x55526907, __VMLINUX_SYMBOL_STR(xen_features) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x2d33b1db, __VMLINUX_SYMBOL_STR(xenbus_dev_fatal) },
	{ 0x7d4a6c1e, __VMLINUX_SYMBOL_STR(xenbus_dev_error) },
	{ 0xc5f24540, __VMLINUX_SYMBOL_STR(xenbus_switch_state) },
	{ 0x73013896, __VMLINUX_SYMBOL_STR(xenbus_printf) },
	{ 0xe32b84f9, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x62b008eb, __VMLINUX_SYMBOL_STR(gnttab_alloc_pages) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x7b30dd50, __VMLINUX_SYMBOL_STR(xenbus_unmap_ring_vfree) },
	{ 0x7712771a, __VMLINUX_SYMBOL_STR(unbind_from_irqhandler) },
	{ 0x6c21d876, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x7dd43efd, __VMLINUX_SYMBOL_STR(percpu_ida_free) },
	{ 0x74b0ed2, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x86623fd7, __VMLINUX_SYMBOL_STR(notify_remote_via_irq) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x67bdc73d, __VMLINUX_SYMBOL_STR(gnttab_free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3ab9364d, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xcef51982, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x971af21b, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9f4fd552, __VMLINUX_SYMBOL_STR(target_alloc_session) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6e8896ab, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,scsi_mod";

