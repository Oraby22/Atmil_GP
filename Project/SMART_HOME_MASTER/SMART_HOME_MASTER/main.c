/*
 * SMART_HOME_MASTER.c
 *
 * Created: 10/9/2021 8:21:10 PM
 * Author : Oraby
 */ 

#include "CPU_Configurations.h"


int main(void)
{
    /* Replace with your application code */
    
	SPI_initMasterMode();
	USART_Init(9600);

	char data = USART_RxByte()  ;
		
		SPI_SendByte(data);
		
	
	while (1)
	{


			
		//_delay_ms(100);
    }

}

/*
ISR(USART_RXC_vect)
{
char data = UDR;

 SPI_SendByte(data);
}  */