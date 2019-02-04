#ifndef __UNIPHIER_LD20_AOSP_H__
#define __UNIPHIER_LD20_AOSP_H__

#include <configs/uniphier.h>

#define CONFIG_PREBOOT "mmc dev 0 1 && mmc read 0x80900000 0xe00 0x200 && md5sum -v 0x80900000 3f788 d9fe02f852ac6ff7cb217b11c3027dab && icache flush && dcache flush && go 0x80900000 1920x1080 - 0xc0000000"

#endif
