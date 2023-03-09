#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>
#include "JooUART/JooUART.h"

int main(void)
{
	unsigned char datum = 0;
	init_uart(9600, F_CPU, 0x01, DL8, NONE, ONE);
	
	uart_transmit_print_line("Hello world!");
	uart_transmit_print_line("Type Anything:");
	
    while (1) 
    {
		datum = uart_receive();
		uart_transmit(datum);
    }
	return 0;
}

