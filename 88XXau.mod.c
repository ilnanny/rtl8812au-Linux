#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa37b10b2, "module_layout" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x1f7824c3, "usb_register_driver" },
	{ 0x13732c99, "__napi_schedule" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb933919f, "eth_type_trans" },
	{ 0x2d4c8753, "napi_gro_receive" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1da16295, "skb_queue_tail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x366c47b0, "cfg80211_mgmt_tx_status" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcadac85c, "dev_get_by_name" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xd215984e, "cfg80211_rx_mgmt" },
	{ 0x2640ac5b, "napi_disable" },
	{ 0x6190a87b, "free_netdev" },
	{ 0xd761b889, "__cfg80211_alloc_reply_skb" },
	{ 0xc64d9c7d, "unregister_netdevice_queue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ccbe94, "__pskb_copy_fclone" },
	{ 0xef464c28, "getboottime64" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa71976c1, "usb_submit_urb" },
	{ 0xea3968a7, "netif_receive_skb" },
	{ 0x760a0f4f, "yield" },
	{ 0x41c01dc4, "mutex_unlock" },
	{ 0x8e465b3, "alloc_etherdev_mqs" },
	{ 0x96c2448d, "usb_free_urb" },
	{ 0xe353e3d, "cfg80211_new_sta" },
	{ 0xe1ef9cd2, "unregister_netdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x129b311d, "mutex_destroy" },
	{ 0x199e7f08, "flush_signals" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x80ffe8c, "cfg80211_inform_bss_frame_data" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x4786619, "ieee80211_get_channel" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x2bdd3770, "dev_alloc_name" },
	{ 0x74835b5, "usb_kill_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x83205994, "netif_carrier_on" },
	{ 0xb4b37ad6, "cfg80211_unlink_bss" },
	{ 0x545a2427, "__dev_kfree_skb_any" },
	{ 0x28e06d42, "find_vpid" },
	{ 0x9ea2a5e7, "usb_alloc_coherent" },
	{ 0xc14ecd13, "skb_realloc_headroom" },
	{ 0x1000e51, "schedule" },
	{ 0x20f5e7b7, "skb_push" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x7f21b4b4, "kill_pid" },
	{ 0xfad77ebb, "skb_trim" },
	{ 0x6ad9cf5d, "cfg80211_connect_done" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x383bd465, "current_task" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ed349b0, "netif_napi_add" },
	{ 0xcf2a6966, "up" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcd1a32c6, "register_netdev" },
	{ 0xdd00d713, "cfg80211_put_bss" },
	{ 0x6ee10ec2, "cfg80211_roamed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xcc3f8780, "cfg80211_scan_done" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9b846043, "__mutex_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x718b5583, "napi_complete_done" },
	{ 0x969a6834, "mutex_lock_interruptible" },
	{ 0x7fa609b0, "netif_carrier_off" },
	{ 0xc44154a5, "usb_get_dev" },
	{ 0x4dae8d3f, "param_ops_uint" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x3bc4451d, "kthread_create_on_node" },
	{ 0x53cb9b06, "wake_up_process" },
	{ 0x482d04b3, "register_netdevice" },
	{ 0x96b6f99a, "skb_copy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x51fdb573, "param_ops_charp" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xbdf5766f, "skb_copy_bits" },
	{ 0x9166fada, "strncpy" },
	{ 0xf5220b5e, "cfg80211_ibss_joined" },
	{ 0x5b5e39c, "netif_rx" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xa3657d34, "usb_deregister" },
	{ 0xabc34bb9, "skb_dequeue" },
	{ 0xbf832ade, "cfg80211_michael_mic_failure" },
	{ 0x135e70a9, "netif_tx_wake_queue" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x26320dda, "cfg80211_disconnected" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xb1cab14, "kthread_stop" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xf3e50435, "__cfg80211_send_event_skb" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x349cba85, "strchr" },
	{ 0x37a0cba, "kfree" },
	{ 0xde1ac03b, "seq_printf" },
	{ 0x29361773, "complete" },
	{ 0x87349810, "cfg80211_get_bss" },
	{ 0x2aa7c8f5, "wiphy_new_nm" },
	{ 0x2c0ec622, "param_array_ops" },
	{ 0x3501b9fa, "wiphy_free" },
	{ 0x2e0d2f7f, "queue_work_on" },
	{ 0x501dad77, "device_init_wakeup" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xdeca3e91, "skb_put" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd842178, "cfg80211_ready_on_channel" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf4c03d95, "skb_clone" },
	{ 0x5a921311, "strncmp" },
	{ 0xfc9c46eb, "usb_put_dev" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa570b796, "cfg80211_ch_switch_notify" },
	{ 0x877d91ad, "usb_control_msg" },
	{ 0xd02d86f2, "param_ops_int" },
	{ 0x1eb750ae, "napi_schedule_prep" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xc16a051a, "__pskb_pull_tail" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x40a70ba7, "usb_alloc_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6138fbd3, "usb_reset_device" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc3c72ba4, "usb_autopm_get_interface" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20f1fd4, "wiphy_unregister" },
	{ 0xa136b139, "netif_tx_stop_all_queues" },
	{ 0x8b6cbb7d, "cfg80211_del_sta_sinfo" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x5d72a9e, "cfg80211_vendor_cmd_reply" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x552d374e, "__netdev_alloc_skb" },
	{ 0xc5850110, "printk" },
	{ 0x535eb3b9, "nla_put_nohdr" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x33269aff, "cfg80211_remain_on_channel_expired" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xc4dac42f, "nla_put" },
	{ 0x651837f7, "wiphy_register" },
	{ 0xb1532149, "__cfg80211_alloc_event_skb" },
	{ 0x999e8297, "vfree" },
	{ 0xd9ffa0e1, "netif_napi_del" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x88bfa7e, "cancel_work_sync" },
	{ 0xd44335f3, "usb_free_coherent" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4a9c325d, "skb_pull" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,cfg80211";

MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0952d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3426d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3316d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p805Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p025Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2604p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0823d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0953d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3314d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p029Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3823p6249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1817d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1852d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1853d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA834d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p809Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p809Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9054d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9F77F86DCDC6F4178BF5AF8");
