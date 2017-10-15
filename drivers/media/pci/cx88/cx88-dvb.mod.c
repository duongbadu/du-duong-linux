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
	{ 0x5a4e69f6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8241b551, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x78d776ac, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xed68cdfd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x7fd55c87, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x1cd9f792, __VMLINUX_SYMBOL_STR(cx8802_unregister_driver) },
	{ 0xdacf7dd7, __VMLINUX_SYMBOL_STR(cx8802_register_driver) },
	{ 0x358a4263, __VMLINUX_SYMBOL_STR(vb2_dvb_register_bus) },
	{ 0x6141c8c5, __VMLINUX_SYMBOL_STR(cx88_tuner_callback) },
	{ 0x6b7bd392, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0xc89fb7ca, __VMLINUX_SYMBOL_STR(vb2_dma_sg_memops) },
	{ 0x9afb37b8, __VMLINUX_SYMBOL_STR(vb2_dvb_dealloc_frontends) },
	{ 0x72a8a8d3, __VMLINUX_SYMBOL_STR(vb2_dvb_alloc_frontend) },
	{ 0x7e4527c6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc1c6a4e4, __VMLINUX_SYMBOL_STR(vp3054_i2c_probe) },
	{ 0x9749290b, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x94ebe93f, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xdcde78a4, __VMLINUX_SYMBOL_STR(cx88_setup_xc3028) },
	{ 0x651181, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x50388ea8, __VMLINUX_SYMBOL_STR(cx8802_get_driver) },
	{ 0xccb2a533, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x89fcda4f, __VMLINUX_SYMBOL_STR(vb2_dvb_find_frontend) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x19ce2683, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x61fc6496, __VMLINUX_SYMBOL_STR(cx8802_buf_prepare) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb0aca7a3, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x3e5328ab, __VMLINUX_SYMBOL_STR(cx8802_start_dma) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6d9ac51f, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x45f4d5e2, __VMLINUX_SYMBOL_STR(cx8802_cancel_buffers) },
	{ 0x26397273, __VMLINUX_SYMBOL_STR(cx8802_buf_queue) },
	{ 0x75018667, __VMLINUX_SYMBOL_STR(vb2_dvb_get_frontend) },
	{ 0x5a98ca0c, __VMLINUX_SYMBOL_STR(vp3054_i2c_remove) },
	{ 0xf0e704be, __VMLINUX_SYMBOL_STR(vb2_dvb_unregister_bus) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,cx8802,videobuf2-dvb,cx88xx,videobuf2-dma-sg,cx88-vp3054-i2c,dvb-core,videobuf2-core";


MODULE_INFO(srcversion, "C9CEE848557F03376FD479C");
