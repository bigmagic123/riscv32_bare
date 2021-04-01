//#include "sbi.h"
#include <stdio.h>
/**
 * \brief _init function called in __libc_init_array()
 * \details
 * This `__libc_init_array()` function is called during startup code,
 * user need to implement this function, otherwise when link it will
 * error init.c:(.text.__libc_init_array+0x26): undefined reference to `_init'
 * \note
 * Please use \ref _premain_init function now
 */
void __libc_init_array(void)
{
    /* Don't put any code here, please use _premain_init now */
}

void core_exception_handler(void)
{
    /* Don't put any code here, please use _premain_init now */
}

void SystemInit()
{

}

void __libc_fini_array()
{

}

void atexit()
{

}

void _premain_init()
{
    //gd_com_init(SOC_DEBUG_UART);
}

// void _premain_init()
// {

// }
void _postmain_fini()
{

}

#define REG32(x)          (*(volatile uint32_t *)(uint32_t)(x))
#define BITS(start, end)             ((0xFFFFFFFFUL << (start)) & (0xFFFFFFFFUL >> (31U - (uint32_t)(end))))
#define USART_DATA_DATA               BITS(0,8)                         /*!< transmit or read data value */

#define USART_STAT(usartx)            REG32((usartx) + (0x00000000U))   /*!< USART status register */
#define USART_DATA(usartx)            REG32((usartx) + (0x00000004U))   /*!< USART data register */
#define USART_BAUD(usartx)            REG32((usartx) + (0x00000008U))   /*!< USART baud rate register */
#define USART_CTL0(usartx)            REG32((usartx) + (0x0000000CU))   /*!< USART control register 0 */
#define USART_CTL1(usartx)            REG32((usartx) + (0x00000010U))   /*!< USART control register 1 */
#define USART_CTL2(usartx)            REG32((usartx) + (0x00000014U))   /*!< USART control register 2 */
#define USART_GP(usartx)              REG32((usartx) + (0x00000018U))   /*!< USART guard time and prescaler register */

int puts(const char *s)
{
    int ii = 0;
    for(ii = 0; s[ii] != 0; ii ++)
    {
        USART_DATA(0x40005000) = s[ii] & USART_DATA_DATA;
    }
    USART_DATA(0x40005000) = s[ii] & USART_DATA_DATA;
    return 0;
}

void main()
{
    printf("hello qemu!\n");
//   SBI_PUTCHAR('H');
//    SBI_PUTCHAR('e');
//    SBI_PUTCHAR('l');
//    SBI_PUTCHAR('l');
//    SBI_PUTCHAR('o');
//    SBI_PUTCHAR('\n');
    while(1) {}
}
