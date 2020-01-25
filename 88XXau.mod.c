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
	{ 0xf7f3d2cd, "module_layout" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xf4347f31, "usb_register_driver" },
	{ 0x5916f852, "__napi_schedule" },
	{ 0x85df9b6c, "strsep" },
	{ 0x48ec1c94, "eth_type_trans" },
	{ 0x35e8731b, "napi_gro_receive" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb3d32c39, "skb_queue_tail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc4203d82, "cfg80211_mgmt_tx_status" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc093693, "dev_get_by_name" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x91715312, "sprintf" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x308a9929, "cfg80211_rx_mgmt" },
	{ 0xf9b7a9cb, "napi_disable" },
	{ 0x962fdd8c, "free_netdev" },
	{ 0x92cb3b9b, "__cfg80211_alloc_reply_skb" },
	{ 0xd926b60a, "unregister_netdevice_queue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xed7ca0b3, "__pskb_copy_fclone" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9140f580, "usb_submit_urb" },
	{ 0x48e3ac7, "netif_receive_skb" },
	{ 0x760a0f4f, "yield" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x19c046b8, "alloc_etherdev_mqs" },
	{ 0x1bcd300f, "usb_free_urb" },
	{ 0x6b90b1e1, "cfg80211_new_sta" },
	{ 0x1d73535a, "unregister_netdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x678706af, "flush_signals" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4e416086, "cfg80211_inform_bss_frame_data" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x2d76737e, "ieee80211_get_channel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8cc3a44e, "dev_alloc_name" },
	{ 0x74978793, "usb_kill_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcb38b562, "netif_carrier_on" },
	{ 0x321a0bce, "cfg80211_unlink_bss" },
	{ 0xf4775046, "__dev_kfree_skb_any" },
	{ 0xadf03577, "find_vpid" },
	{ 0xa8cabf58, "usb_alloc_coherent" },
	{ 0xb6e21033, "skb_realloc_headroom" },
	{ 0x1000e51, "schedule" },
	{ 0x8bf5caf1, "skb_push" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x87a70d4d, "kill_pid" },
	{ 0x1172afa1, "skb_trim" },
	{ 0x99babac9, "cfg80211_connect_done" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x54436c, "current_task" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb29e3857, "netif_napi_add" },
	{ 0xcf2a6966, "up" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x704f4991, "register_netdev" },
	{ 0xb773ed1b, "cfg80211_put_bss" },
	{ 0xcbc069c3, "cfg80211_roamed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xa6d51992, "cfg80211_scan_done" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd948824f, "napi_complete_done" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0xc7536cce, "netif_carrier_off" },
	{ 0x66decfd5, "ns_to_timespec" },
	{ 0x2b61632f, "usb_get_dev" },
	{ 0xa16fdc86, "param_ops_uint" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x3cf7d614, "kthread_create_on_node" },
	{ 0x9d0bbfea, "wake_up_process" },
	{ 0x9d9d1048, "register_netdevice" },
	{ 0x6eccb230, "skb_copy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xe3ac7f0a, "param_ops_charp" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2d7507c6, "skb_copy_bits" },
	{ 0x9166fada, "strncpy" },
	{ 0x11975ace, "cfg80211_ibss_joined" },
	{ 0x3845f2ba, "netif_rx" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x1d86d5b5, "usb_deregister" },
	{ 0x3b6905d, "skb_dequeue" },
	{ 0x36994411, "cfg80211_michael_mic_failure" },
	{ 0xe3056ffd, "netif_tx_wake_queue" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x626c6eb9, "cfg80211_disconnected" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xec161f29, "kthread_stop" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xdd7db325, "__cfg80211_send_event_skb" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x349cba85, "strchr" },
	{ 0x37a0cba, "kfree" },
	{ 0x8fc6274e, "seq_printf" },
	{ 0x29361773, "complete" },
	{ 0xf9ee6997, "cfg80211_get_bss" },
	{ 0xaeef5f9c, "wiphy_new_nm" },
	{ 0x9e5f0c5b, "param_array_ops" },
	{ 0xce1cfacb, "wiphy_free" },
	{ 0x2e0d2f7f, "queue_work_on" },
	{ 0x53367787, "device_init_wakeup" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0x71c34dad, "skb_put" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x96d979fe, "cfg80211_ready_on_channel" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x530f6e2f, "skb_clone" },
	{ 0x5a921311, "strncmp" },
	{ 0x46595a0c, "usb_put_dev" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb0e602eb, "memmove" },
	{ 0x1748ffd2, "cfg80211_ch_switch_notify" },
	{ 0xd3cc046f, "usb_control_msg" },
	{ 0x728e1933, "param_ops_int" },
	{ 0x53c3bb38, "napi_schedule_prep" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xdd8e7e84, "__pskb_pull_tail" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2e6f23a5, "usb_alloc_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa502c3f2, "usb_reset_device" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4def65bc, "usb_autopm_get_interface" },
	{ 0x28318305, "snprintf" },
	{ 0x91491a9c, "wiphy_unregister" },
	{ 0xe9069a33, "netif_tx_stop_all_queues" },
	{ 0x854ddf07, "cfg80211_del_sta_sinfo" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc63b5087, "cfg80211_vendor_cmd_reply" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdce85243, "__netdev_alloc_skb" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5f85847d, "nla_put_nohdr" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x22735b50, "cfg80211_remain_on_channel_expired" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0x61ba0133, "nla_put" },
	{ 0x2a9e23d3, "wiphy_register" },
	{ 0x2755414, "__cfg80211_alloc_event_skb" },
	{ 0x999e8297, "vfree" },
	{ 0x3d79bdc4, "netif_napi_del" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x88bfa7e, "cancel_work_sync" },
	{ 0x72f3f4d6, "usb_free_coherent" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4199a3b6, "skb_pull" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

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
