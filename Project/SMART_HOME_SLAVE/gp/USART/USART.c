
#include "USART.h"



ISR(USART_RXC_vect)
{
	
	
	
}

void USART_Init(unsigned long baud)
{
	// enable global interrupt
	   set_bit(SREG,7);
	   
        /*	
		// UBRR ( 9600)
		UBRRH =0;
		UBRRL = 103;	
		*/
		
    unsigned short ubrr;
    
    /*1 - Choose baud rate that will be used by sender and receiver by writing to UBRRL/UBRRH*/
    ubrr =  ( (F_CPU/ (16*baud)) - 1);
    
    UBRRL = (char) ubrr;
    UBRRH = (char) (ubrr >> 8);	
	
		// UCSRA
		clr_bit(UCSRA,U2X);  //  set single speed
		clr_bit(UCSRA,MPCM); // disable muti-processor
	
		// UCSRB
		UCSRB =0;
		set_bit(UCSRB,TXEN);  // enable tx
		set_bit(UCSRB,RXEN);  // enable receiver
		set_bit(UCSRB,RXCIE);  // enable complete receiver interrupt
	
	
		// UCSRC ( set data bits 8 , enable UCSRC register) 
		UCSRC = (1<< URSEL) | (1<< UCSZ0) | (1<< UCSZ1) ;
		
	
}

void USART_TxByte( uint8_t data)
{
	
	while( get_bit(UCSRA,UDRE) ){}
	
		UDR = data;
	
	
	
}

uint8_t USART_RxByte( void)
{
	uint8_t value = 0;
	while( get_bit(UCSRA,RXC) ) {}
	
	value =UDR;
	
	return value;
	
}