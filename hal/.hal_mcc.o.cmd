cmd_/media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/hal_mcc.o := gcc -Wp,-MD,/media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/.hal_mcc.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include -I./arch/x86/include -I./arch/x86/include/generated  -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mskip-rax-setup -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -DCONFIG_X86_X32_ABI -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_AVX512=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mindirect-branch=thunk-extern -mindirect-branch-register -fno-jump-tables -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-var-tracking-assignments -pg -mfentry -DCC_USING_FENTRY -fno-inline-functions-called-once -Wdeclaration-after-statement -Wno-pointer-sign -Wno-stringop-truncation -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=./= -Wno-packed-not-aligned -fno-pie -O1 -Wall -Wextra -Wno-unused-variable -Wno-unused-value -Wno-unused-label -Wno-unused-parameter -Wno-unused-function -Wno-unused -Wno-cast-function-type -Wno-date-time -Wno-uninitialized -Wno-sign-compare -Wno-type-limits -Wno-date-time -Wno-error=date-time -Wno-vla -I/media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/include -DCONFIG_DISABLE_REGD_C -DDBG=0 -DDRV_NAME=\"rtl88xxau\" -I/media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/btc -I/media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/phydm -DCONFIG_RTL8812A -DCONFIG_RTL8821A -DCONFIG_RTL8814A -DCONFIG_MP_INCLUDED -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8814au.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_TXPWR_BY_RATE_EN=0 -DCONFIG_TXPWR_LIMIT_EN=0 -DCONFIG_CALIBRATE_TX_POWER_TO_MAX -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_WIFI_MONITOR -DCONFIG_RTW_NAPI -DCONFIG_RTW_GRO -DCONFIG_RTW_WIFI_HAL -DCONFIG_RTW_CFGVEDNOR_LLSTATS -DCONFIG_VHT_EXTRAS -DCONFIG_LED_CONTROL -DCONFIG_LED_ENABLE -DDM_ODM_SUPPORT_TYPE=0x04 -DCONFIG_LITTLE_ENDIAN -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT  -DMODULE  -DKBUILD_BASENAME='"hal_mcc"' -DKBUILD_MODNAME='"88XXau"' -c -o /media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/.tmp_hal_mcc.o /media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/hal_mcc.c

source_/media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/hal_mcc.o := /media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/hal_mcc.c

deps_/media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/hal_mcc.o := \
    $(wildcard include/config/mcc/mode.h) \
    $(wildcard include/config/mcc/mode/debug.h) \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \

/media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/hal_mcc.o: $(deps_/media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/hal_mcc.o)

$(deps_/media/Dati/Softwares/Gnu-Linux/rtl8812au-Linux/hal/hal_mcc.o):
