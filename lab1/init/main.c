#include <printf.h>
#include <drivers/include/uart.h>

void main() {
    uart_init();
    printf("System started!\n");
    printf("This is lab1 for kezhang, xingyang huang, zichuan zheng\n");
    int test = 3;
    printf("Bock1<>\n %d %d",test ,test);
    while (1) {
        char c = uart_getc();
	printf("%c",c);
    }
}

