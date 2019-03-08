#ifndef __UNIPHIER_LD20_AOSP_H__
#define __UNIPHIER_LD20_AOSP_H__

#include <configs/uniphier.h>

#undef CONFIG_PREBOOT
#define CONFIG_PREBOOT "mmc dev 0 1 && mmc read 0x80900000 0xe00 0x200 && md5sum -v 0x80900000 3fca8 a3a7dddb71ce0dc05145cbc78f6a8f1a && icache flush && dcache flush && go 0x80900000 reso=1920x1080 fb=0xc0000000 board=1"

#endif
