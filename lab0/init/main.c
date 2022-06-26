#include <printf.h>
#include <drivers/include/uart.h>

void main() {
    uart_init();
    while (1) {
        char c = uart_getc();
	uart_send(c);
    }
}

