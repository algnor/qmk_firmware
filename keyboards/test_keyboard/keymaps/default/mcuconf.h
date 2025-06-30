
#pragma once

#include_next <mcuconf.h>

#undef STM32_PLLMUL_VALUE
#define STM32_PLLMUL_VALUE 6

#undef STM32_USBPRE
#define STM32_USBPRE STM32_USBPRE_DIV1P5