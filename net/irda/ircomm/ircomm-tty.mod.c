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
	{ 0xcd5d02a1, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x977a7a93, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb9394173, __VMLINUX_SYMBOL_STR(irias_delete_value) },
	{ 0x91815586, __VMLINUX_SYMBOL_STR(irda_param_pack) },
	{ 0x26f3d3bd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x9a328c5f, __VMLINUX_SYMBOL_STR(tty_port_close_end) },
	{ 0x763e54a4, __VMLINUX_SYMBOL_STR(irlmp_unregister_client) },
	{ 0x818da066, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xfc3d0904, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x22fc73e9, __VMLINUX_SYMBOL_STR(tty_hung_up_p) },
	{ 0xaf2c529, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x8efb1ee3, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x385847aa, __VMLINUX_SYMBOL_STR(irias_delete_object) },
	{ 0x9d597271, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfba18e64, __VMLINUX_SYMBOL_STR(tty_port_carrier_raised) },
	{ 0xc7291fa6, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0xc6c180ba, __VMLINUX_SYMBOL_STR(tty_port_close_start) },
	{ 0x3921e09d, __VMLINUX_SYMBOL_STR(ircomm_connect_response) },
	{ 0x89831b48, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x46b00fdf, __VMLINUX_SYMBOL_STR(irias_insert_object) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x662bc2da, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x39be2b6a, __VMLINUX_SYMBOL_STR(iriap_getvaluebyclass_request) },
	{ 0x7042bc54, __VMLINUX_SYMBOL_STR(irlmp_register_client) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xec242b93, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x290b95d0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x98a8b3b4, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4b37ea75, __VMLINUX_SYMBOL_STR(ircomm_disconnect_request) },
	{ 0x2b432980, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x297c6c94, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb4c12ae9, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x94a824db, __VMLINUX_SYMBOL_STR(irda_param_extract_all) },
	{ 0x88fb3331, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x386bc055, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d3647c, __VMLINUX_SYMBOL_STR(irlmp_register_service) },
	{ 0x3a2780c2, __VMLINUX_SYMBOL_STR(ircomm_connect_request) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xc076346, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x9a1942fd, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9939c11, __VMLINUX_SYMBOL_STR(irias_add_integer_attrib) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe329462a, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0xcf767f11, __VMLINUX_SYMBOL_STR(iriap_close) },
	{ 0xbe40ace9, __VMLINUX_SYMBOL_STR(irlmp_discovery_request) },
	{ 0x21ef5874, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0xc894bab3, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x94175d8, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xac3dc858, __VMLINUX_SYMBOL_STR(irias_add_octseq_attrib) },
	{ 0x22b60311, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb65d4b36, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x14e8cd5b, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x6447241c, __VMLINUX_SYMBOL_STR(ircomm_control_request) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xcb7e8cbb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x34059627, __VMLINUX_SYMBOL_STR(iriap_open) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcec33e0b, __VMLINUX_SYMBOL_STR(ircomm_close) },
	{ 0x46811559, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xe69c975f, __VMLINUX_SYMBOL_STR(ircomm_open) },
	{ 0x5d88b68d, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x70a3f20f, __VMLINUX_SYMBOL_STR(hashbin_lock_find) },
	{ 0x46c1c4a2, __VMLINUX_SYMBOL_STR(irlmp_unregister_service) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe1ba6308, __VMLINUX_SYMBOL_STR(irias_new_object) },
	{ 0x5a71fe84, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2b1f57b0, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0x9d6520ec, __VMLINUX_SYMBOL_STR(ircomm_flow_request) },
	{ 0x914f838d, __VMLINUX_SYMBOL_STR(ircomm_data_request) },
	{ 0x8629d102, __VMLINUX_SYMBOL_STR(tty_port_raise_dtr_rts) },
	{ 0xde4c6b3c, __VMLINUX_SYMBOL_STR(irlmp_service_to_hint) },
	{ 0x6f0a8b94, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0xffb1d47c, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9ccbdfca, __VMLINUX_SYMBOL_STR(hashbin_insert) },
	{ 0x7f52a8bf, __VMLINUX_SYMBOL_STR(irda_param_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda,ircomm";

