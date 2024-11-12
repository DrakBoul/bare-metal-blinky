#include <stdint.h>
extern uint32_t _stext;
extern uint32_t _etext;
extern uint32_t _sbss;
extern uint32_t _ebss;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sstack;
extern uint32_t _estack;


int main(void);
void Reset_Handler(void);

void NMI_Handler(void) __attribute__((weak, alias("Default_Handler")));
void HardFault_Handler(void) __attribute__((weak, alias("Default_Handler")));
void MemManage_Handler(void) __attribute__((weak, alias("Default_Handler")));
void BusFault_Handler(void) __attribute__((weak, alias("Default_Handler")));
void UsageFault_Handler(void) __attribute__((weak, alias("Default_Handler")));
void SVCall_Handler(void) __attribute__((weak, alias("Default_Handler")));
void Debug_Handler(void) __attribute__((weak, alias("Default_Handler")));
void PendSV_Handler(void) __attribute__((weak, alias("Default_Handler")));
void SysTick_Handler(void) __attribute__((weak, alias("Default_Handler")));
void WWDG_Handler(void) __attribute__((weak, alias("Default_Handler")));
void PVD_PVM_Handler(void) __attribute__((weak, alias("Default_Handler")));
void RTC_TAMP_STAMP_CSS_LSE_Handler(void) __attribute__((weak, alias("Default_Handler")));
void RTC_WKUP_Handler(void) __attribute__((weak, alias("Default_Handler")));
void FLASH_Handler(void) __attribute__((weak, alias("Default_Handler")));
void RCC_Handler(void) __attribute__((weak, alias("Default_Handler")));
void EXTL0_Handler(void) __attribute__((weak, alias("Default_Handler")));
void EXTL1_Handler(void) __attribute__((weak, alias("Default_Handler"))); 
void EXTL2_Handler(void) __attribute__((weak, alias("Default_Handler"))); 
void EXTL3_Handler(void) __attribute__((weak, alias("Default_Handler")));
void EXTL4_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA1_CH1_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA1_CH2_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA1_CH3_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA1_CH4_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA1_CH5_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA1_CH6_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA1_CH7_Handler(void) __attribute__((weak, alias("Default_Handler")));
void ADC1_2_Handler(void) __attribute__((weak, alias("Default_Handler")));
void CAN1_TX_Handler(void) __attribute__((weak, alias("Default_Handler")));
void CAN1_RX0_Handler(void) __attribute__((weak, alias("Default_Handler")));
void CAN1_RX1_Handler(void) __attribute__((weak, alias("Default_Handler")));
void CAN1_SCE_Handler(void) __attribute__((weak, alias("Default_Handler")));
void EXTL9_5_Handler(void) __attribute__((weak, alias("Default_Handler")));
void TIM1_BRK_TIM15_Handler(void) __attribute__((weak, alias("Default_Handler")));
void TIM1_UP_TIM16_Handler(void) __attribute__((weak, alias("Default_Handler")));
void TIM1_TRG_COM_Handler(void) __attribute__((weak, alias("Default_Handler")));
void TIM1_CC_Handler(void) __attribute__((weak, alias("Default_Handler")));
void TIM2_Handler(void) __attribute__((weak, alias("Default_Handler")));
void TIM3_Handler(void) __attribute__((weak, alias("Default_Handler")));
void I2C1_EV_Handler(void) __attribute__((weak, alias("Default_Handler")));
void I2C1_ER_Handler(void) __attribute__((weak, alias("Default_Handler")));
void SPI1_Handler(void) __attribute__((weak, alias("Default_Handler")));
void USART1_Handler(void) __attribute__((weak, alias("Default_Handler")));
void USART2_Handler(void) __attribute__((weak, alias("Default_Handler")));
void EXTL15_10_Handler(void) __attribute__((weak, alias("Default_Handler")));
void RTC_ALARM_Handler(void) __attribute__((weak, alias("Default_Handler")));
void SPI3_Handler(void) __attribute__((weak, alias("Default_Handler")));
void UART4_Handler(void) __attribute__((weak, alias("Default_Handler")));
void TIM6_DACUNDER_Handler(void) __attribute__((weak, alias("Default_Handler")));
void TIM7_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA2_CH1_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA2_CH2_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA2_CH3_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA2_CH4_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA2_CH5_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DFSDM1_FLT0_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DFSDM1_FLT1_Handler(void) __attribute__((weak, alias("Default_Handler")));
void COMP_Handler(void) __attribute__((weak, alias("Default_Handler")));
void LPTIM1_Handler(void) __attribute__((weak, alias("Default_Handler")));
void LPTIM2_Handler(void) __attribute__((weak, alias("Default_Handler")));
void USB_FS_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA2_CH6_Handler(void) __attribute__((weak, alias("Default_Handler")));
void DMA2_CH7_Handler(void) __attribute__((weak, alias("Default_Handler")));
void LPUART1_Handler(void) __attribute__((weak, alias("Default_Handler")));
void QUADSPI_Handler(void) __attribute__((weak, alias("Default_Handler")));
void I2C3_EV_Handler(void) __attribute__((weak, alias("Default_Handler")));
void I2C3_ER_Handler(void) __attribute__((weak, alias("Default_Handler")));
void SAL1_Handler(void) __attribute__((weak, alias("Default_Handler")));
void SWPMI1_Handler(void) __attribute__((weak, alias("Default_Handler")));
void TSC_Handler(void) __attribute__((weak, alias("Default_Handler")));
void LCD_Handler(void) __attribute__((weak, alias("Default_Handler")));
void AES_Handler(void) __attribute__((weak, alias("Default_Handler")));
void RNG_Handler(void) __attribute__((weak, alias("Default_Handler")));
void FPU_Handler(void) __attribute__((weak, alias("Default_Handler")));
void CRS_Handler(void) __attribute__((weak, alias("Default_Handler")));
void I2C4_EV_Handler(void) __attribute__((weak, alias("Default_Handler")));
void I2C4_ER_Handler(void) __attribute__((weak, alias("Default_Handler")));


__attribute__((section(".isr_vector")))
uint32_t vector_table[] = {
    (uint32_t) &_estack,
    (uint32_t) Reset_Handler,
    (uint32_t) NMI_Handler,
    (uint32_t) HardFault_Handler,
    (uint32_t) MemManage_Handler,
    (uint32_t) BusFault_Handler,
    (uint32_t) UsageFault_Handler,
    0,
    (uint32_t) SVCall_Handler,
    (uint32_t) Debug_Handler,
    0,
    (uint32_t) PendSV_Handler,
    (uint32_t) SysTick_Handler,
    (uint32_t) WWDG_Handler,
    (uint32_t) PVD_PVM_Handler,
    (uint32_t) RTC_TAMP_STAMP_CSS_LSE_Handler,
    (uint32_t) RTC_WKUP_Handler,
    (uint32_t) FLASH_Handler,
    (uint32_t) RCC_Handler,
    (uint32_t) EXTL0_Handler,
    (uint32_t) EXTL1_Handler,
    (uint32_t) EXTL2_Handler,
    (uint32_t) EXTL3_Handler,
    (uint32_t) EXTL4_Handler,
    (uint32_t) DMA1_CH1_Handler,
    (uint32_t) DMA1_CH2_Handler,
    (uint32_t) DMA1_CH3_Handler,
    (uint32_t) DMA1_CH4_Handler,
    (uint32_t) DMA1_CH5_Handler,
    (uint32_t) DMA1_CH6_Handler,
    (uint32_t) DMA1_CH7_Handler,
    (uint32_t) ADC1_2_Handler,
    (uint32_t) CAN1_TX_Handler,
    (uint32_t) CAN1_RX0_Handler,
    (uint32_t) CAN1_RX1_Handler,
    (uint32_t) CAN1_SCE_Handler,
    (uint32_t) EXTL9_5_Handler,
    (uint32_t) TIM1_BRK_TIM15_Handler,
    (uint32_t) TIM1_UP_TIM16_Handler,
    (uint32_t) TIM1_TRG_COM_Handler,
    (uint32_t) TIM1_CC_Handler,
    (uint32_t) TIM2_Handler,
    (uint32_t) TIM3_Handler,
    0,
    (uint32_t) I2C1_EV_Handler,
    (uint32_t) I2C1_ER_Handler,
    0,
    0,
    (uint32_t) SPI1_Handler,
    0,
    (uint32_t) USART1_Handler,
    (uint32_t) USART2_Handler,
    0,
    (uint32_t) EXTL15_10_Handler,
    (uint32_t) RTC_ALARM_Handler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (uint32_t) SPI3_Handler,
    (uint32_t) UART4_Handler,
    0,
    (uint32_t) TIM6_DACUNDER_Handler,
    (uint32_t) TIM7_Handler,
    (uint32_t) DMA2_CH1_Handler,
    (uint32_t) DMA2_CH2_Handler,
    (uint32_t) DMA2_CH3_Handler,
    (uint32_t) DMA2_CH4_Handler,
    (uint32_t) DMA2_CH5_Handler,
    (uint32_t) DFSDM1_FLT0_Handler,
    (uint32_t) DFSDM1_FLT1_Handler,
    0,
    (uint32_t) COMP_Handler,
    (uint32_t) LPTIM1_Handler,
    (uint32_t) LPTIM2_Handler,
    (uint32_t) USB_FS_Handler,
    (uint32_t) DMA2_CH6_Handler,
    (uint32_t) DMA2_CH7_Handler,
    (uint32_t) LPUART1_Handler,
    (uint32_t) QUADSPI_Handler,
    (uint32_t) I2C3_EV_Handler,
    (uint32_t) I2C3_ER_Handler,
    (uint32_t) SAL1_Handler,
    0,
    (uint32_t) SWPMI1_Handler,
    (uint32_t) TSC_Handler,
    (uint32_t) LCD_Handler,
    (uint32_t) AES_Handler,
    (uint32_t) RNG_Handler,
    (uint32_t) FPU_Handler,
    (uint32_t) CRS_Handler,
    (uint32_t) I2C4_EV_Handler,
    (uint32_t) I2C4_ER_Handler
};


void Reset_Handler(void)
{
        /* Copy init values from text to data */
        uint32_t *init_values_ptr = &_etext;
        uint32_t *data_ptr = &_sdata;

        if (init_values_ptr != data_ptr) {
                for (; data_ptr < &_edata;) {
                        *data_ptr++ = *init_values_ptr++;
                }
        }

        /* Clear the zero segment */
        for (uint32_t *bss_ptr = &_sbss; bss_ptr < &_ebss;) {
                *bss_ptr++ = 0;
        }


        /* Branch to main function */
        main();

        /* Infinite loop */
        while (1);
}

void Default_Handler(void)
{
    while(1){};
}

