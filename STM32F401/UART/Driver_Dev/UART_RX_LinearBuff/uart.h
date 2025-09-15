#ifndef UART_H
#define UART_H

#include "stm32f4xx.h"

#define AFSEL_UART2TX        (0x7 << 8U)  //PA2
#define AFSEL_UART2RX        (0x7 << 12U)  //PA3

void UART2_Init();

#endif
