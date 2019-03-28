#ifndef __UNIPHIER_LD20_AOSP_H__
#define __UNIPHIER_LD20_AOSP_H__

#include <configs/uniphier.h>

#undef CONFIG_PREBOOT
#define CONFIG_PREBOOT "mmc dev 0 1 && mmc read 0xc0000000 0xe00 0x200 && unzip 0xc0000000 0x80900000 && md5sum -v 0x80900000 44b08 cd88703140529e57c388beb0988c24bd && icache flush && dcache flush && go 0x80900000 reso=1920x1080 fb=0xc0000000 board=1"

#endif
