#ifndef OSLABPI_UART_H
#define OSLABPI_UART_H

void uart_send_kern(unsigned int c);
char uart_getc_kern();
void uart_init();
void uart_send(unsigned int c);
char uart_getc();
void uart_puts(char *s);
void uart_hex(unsigned int d);
#endif //OSLABPI_UART_H
