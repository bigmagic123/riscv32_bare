//#include "sbi.h"

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

}

// void _premain_init()
// {

// }
void _postmain_fini()
{

}

void main()
{
//   SBI_PUTCHAR('H');
//    SBI_PUTCHAR('e');
//    SBI_PUTCHAR('l');
//    SBI_PUTCHAR('l');
//    SBI_PUTCHAR('o');
//    SBI_PUTCHAR('\n');
    while(1) {}
}
