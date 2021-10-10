/*									
 * gp.c
 *
 * Created: 9/20/2021 12:56:56 PM
 * Author : Oraby
 */ 

#include "CPU_Configurations.h"

int main(void)
{
   ECU_Init();
  
  SPI_initSlaveMode();
  
  //char data;


  while (1)
  {
	  
	  
	 /* data = SPI_ReceiveByte();
	  
	  switch(data)
	  {
		case '1' : { LED1_ON();break; }
		case '2' : { LED1_OFF();break; }
		case '3' : { LED2_ON();break; }
		case '4' : { LED2_OFF();break; }	
		case '5' : { LED3_ON();break; }
		case '6' : { LED3_OFF();break; } 
		case '7' : { ALL_LEDS_ON();break; }
		case '8' : { ALL_LEDS_OFF();break; }  
		  
	  }	  */

  }
  
  
 /* 
 	SPI_initMasterMode();
 	USART_Init(9600);

  char data = USART_RxByte()  ;
  while (1)
  {

	  SPI_SendByte(data);
	  
	  _delay_ms(100);
	  
  }	*/
}
 ISR(SPI_STC_vect)
 {
   char data = SPDR;
 	 switch(data)
 	 {
	 	 case '1' : { LED1_ON();break; }
	 	 case '2' : { LED1_OFF();break; }
	 	 case '3' : { LED2_ON();break; }
	 	 case '4' : { LED2_OFF();break; }
	 	 case '5' : { LED3_ON();break; }
	 	 case '6' : { LED3_OFF();break; }
	 	 case '7' : { ALL_LEDS_ON();break; }
	 	 case '8' : { ALL_LEDS_OFF();break; }
	 	 
 	 }
 
 }
