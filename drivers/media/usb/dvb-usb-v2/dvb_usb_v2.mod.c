#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x710072f4, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf08c5a24, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x40b8e9d7, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xcd837085, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xddf3a4e9, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xa739c4ee, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xf230ac21, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x9749290b, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf17fb40e, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x53684a93, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xb7354081, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x94ebe93f, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xa32b5deb, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_raw) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd5376e0c, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x8fd50eef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x678cd53d, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x918c684d, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xe63280fb, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5dad1d1f, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc52400cb, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xd57deaf9, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x773e5038, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_204) },
	{ 0x158b68b7, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x830bd142, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x14f9e09b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xef8cf622, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xf4fded96, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb05c677d, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xe582963d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e13f75c, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe8a73aaf, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xae9ac00d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa45560de, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xc2e0ec20, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa4c8ef2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x33076644, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x5b654e83, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,dvb-core,usbcore";


MODULE_INFO(srcversion, "B48D772FD4CD86C536DE815");
