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
	{ 0x2058d508, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x223d5b81, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x7e9b6d0e, __VMLINUX_SYMBOL_STR(rtsx_usb_switch_clock) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x39e652b4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x8b76a14b, __VMLINUX_SYMBOL_STR(memstick_add_host) },
	{ 0x5cbe052f, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x3eb722d2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4224408d, __VMLINUX_SYMBOL_STR(memstick_alloc_host) },
	{ 0x44d8432f, __VMLINUX_SYMBOL_STR(rtsx_usb_transfer_data) },
	{ 0xcae155fa, __VMLINUX_SYMBOL_STR(rtsx_usb_card_exclusive_check) },
	{ 0x928f21e3, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_write_register) },
	{ 0x42b70bf2, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_read_register) },
	{ 0xe8a747dc, __VMLINUX_SYMBOL_STR(rtsx_usb_get_rsp) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xf6ed7868, __VMLINUX_SYMBOL_STR(memstick_detect_change) },
	{ 0xb169dd1e, __VMLINUX_SYMBOL_STR(rtsx_usb_write_register) },
	{ 0x6a033262, __VMLINUX_SYMBOL_STR(rtsx_usb_read_register) },
	{ 0x6f7596b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x9c6411f, __VMLINUX_SYMBOL_STR(schedule_timeout_idle) },
	{ 0x2d0da66f, __VMLINUX_SYMBOL_STR(rtsx_usb_send_cmd) },
	{ 0xaf4f3ecc, __VMLINUX_SYMBOL_STR(rtsx_usb_add_cmd) },
	{ 0x2ed9019d, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x1bf77161, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x8b29fe37, __VMLINUX_SYMBOL_STR(memstick_free_host) },
	{ 0x767ee952, __VMLINUX_SYMBOL_STR(memstick_remove_host) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbdcea7b4, __VMLINUX_SYMBOL_STR(memstick_next_req) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa526ecce, __VMLINUX_SYMBOL_STR(memstick_suspend_host) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x134a4303, __VMLINUX_SYMBOL_STR(memstick_resume_host) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_usb,memstick";

MODULE_ALIAS("platform:rtsx_usb_ms");
