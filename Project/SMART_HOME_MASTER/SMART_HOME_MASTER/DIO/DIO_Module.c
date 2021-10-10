/*
 * DIO_Module.c
 *
 * Created: 9/11/2021 11:35:27 AM
 *  Author: ORABY
 */ 
#include "CPU_Configurations.h"


void DIO_SetDir(uint8_t portNumber , uint8_t pinNumber , uint8_t dir)
{	
	 switch (dir)
	 {
		 case INPUT:
		 switch(portNumber)
		 {
			 case PORT_A:
			 clr_bit(DDRA, pinNumber);
			 break;
			 case PORT_B:
			 clr_bit(DDRB, pinNumber);
			 break;
			 case PORT_C:
			 clr_bit(DDRC, pinNumber);
			 break;
			 case PORT_D:
			 clr_bit(DDRD, pinNumber);
			 break;
		 }
		 break;
		 case OUTPUT:
		 switch(portNumber)
		 {
			case PORT_A:
			set_bit(DDRA, pinNumber);
			break;
			case PORT_B:
			set_bit(DDRB, pinNumber);
			break;
			case PORT_C:
			set_bit(DDRC, pinNumber);
			break;
			case PORT_D:
			clr_bit(DDRD, pinNumber);
			break;
		 }
		 break;
	 }
	
}

int DIO_GetValue(uint8_t portNumber , uint8_t pinNumber)
{
	int value = 0;
	switch(portNumber)
	{
		case PORT_A:
		value = get_bit(PINA, pinNumber);
		break;
		case PORT_B:
		value = get_bit(PINB, pinNumber);
		break;
		case PORT_C:
		value = get_bit(PINC, pinNumber);
		break;
		case PORT_D:
		value = get_bit(PIND, pinNumber);
		break;
	}
	return value;
}


void DIO_SetValue(uint8_t portNumber , uint8_t pinNumber, uint8_t value)
  {
	  switch (value)
	  {
    	  case LOW:														   
		  switch(portNumber)
		  {
		  case PORT_A :
		  clr_bit(PORTA, pinNumber);
		  break;
		  case PORT_B:
		  clr_bit(PORTB, pinNumber);
		  break;
		  case PORT_C:
		  clr_bit(PORTC, pinNumber);
		  break;
		  case PORT_D:
		  clr_bit(PORTD, pinNumber);
		  break;
		  }
      break;
		  case HIGH:
		  switch(portNumber)
     	  {
		  case PORT_A:
		  set_bit(PORTA, pinNumber);
		  break;
		  case PORT_B:
		  set_bit(PORTB, pinNumber);
		  break;
		  case PORT_C:
		  set_bit(PORTC, pinNumber);	
		  break;
		  case PORT_D:
		  set_bit(PORTD, pinNumber);
		  break;
		  }
		  break;
		  }
  }
void DIO_TOGValue(uint8_t port, uint8_t pin)
{
	switch(port)
	{
		case PORT_A:
		toggle_bit(PORTA,pin );
		break;
		case PORT_B:
		toggle_bit(PORTB, pin);
		break;
		case PORT_C:
		toggle_bit(PORTC, pin);
		break;
		case PORT_D:
		toggle_bit(PORTD, pin);
		break;
	}
}

