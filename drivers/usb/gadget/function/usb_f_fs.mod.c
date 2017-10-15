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
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x3a53b0d2, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xd8d32b10, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3c01002c, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x4b269510, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xfe2b74cc, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xd06a38ab, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x885b9e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6e6cc8a0, __VMLINUX_SYMBOL_STR(dup_iter) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x40a29f24, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x9d1d8d, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0x7e97c644, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x1a69a2d4, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb90255e1, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xd14b3db0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2359346, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0x8a0b12c6, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf53f7689, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x77117d54, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x754535eb, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf99dfbac, __VMLINUX_SYMBOL_STR(unregister_gadget_item) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf5ab0d69, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xd67364f7, __VMLINUX_SYMBOL_STR(eventfd_ctx_fdget) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x95936806, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x615b4c40, __VMLINUX_SYMBOL_STR(__wake_up_locked) },
	{ 0xc900b81, __VMLINUX_SYMBOL_STR(usb_ep_clear_halt) },
	{ 0xb1229060, __VMLINUX_SYMBOL_STR(use_mm) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x2279f23c, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xaf6ae696, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0xce3d337b, __VMLINUX_SYMBOL_STR(usb_ep_dequeue) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x53449484, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5162f30b, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa4bc7bb9, __VMLINUX_SYMBOL_STR(kiocb_set_cancel_fn) },
	{ 0x832f62eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xb6fa8d98, __VMLINUX_SYMBOL_STR(usb_ep_fifo_status) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb7f1981b, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0x28b2ba37, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xe26905c8, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xdd30f9ce, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xff2be877, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x377f092, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x205b304b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x8c8ee6d4, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x941f2aaa, __VMLINUX_SYMBOL_STR(eventfd_ctx_put) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x9e82885f, __VMLINUX_SYMBOL_STR(unuse_mm) },
	{ 0x2e9029b3, __VMLINUX_SYMBOL_STR(usb_ep_fifo_flush) },
	{ 0x21a7a56f, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3507bf9c, __VMLINUX_SYMBOL_STR(usb_string_ids_n) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udc-core,libcomposite";

