#include "main.h"
#include "stm32f401xc.h"
#include "stm32f4xx_it.h"

void SysInit();
void RCC_Init();
void GPIOC_Init();

void main(){
  SysInit();
  while(1){
   if(rx_complete_flag){
      rx_complete_flag = 0;
      //GPIOC->ODR ^= GPIO_ODR_OD13;
    } 
  }
}

void GPIOC_Init(){
  //Clock Config
  RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;

  GPIOC->MODER |= GPIO_MODER_MODE13_0;
  GPIOC->ODR |= GPIO_ODR_OD13;

}
void SysInit(){
  GPIOC_Init();
  UART2_Init();
}

