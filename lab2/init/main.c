#include <printf.h>
#include <pmap.h>
#include <uart.h>

void main2() {
    uart_init();
    uart_puts("main2!\n");
    while (1) {
        uart_puts("shitos\n");
    }
    //printf("begin lab2\n");
    //printf("mmu started!\n");
    //page_init();
    //printf("page_init ok!\n");
    //while (1) {
    //    char c = uart_getc_kern();
    //    uart_send_kern(c);
    //}

}
