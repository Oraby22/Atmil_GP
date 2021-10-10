/*
 * SPI.c
 *
 * Created: 9/10/2021 11:16:02 AM
 *  Author: Bahaa
 */ 

#include "SPI.h"

void SPI_initMasterMode(void)
{
	
	///  set pin direction
	// set SS pin as output
	set_bit(DDRB,PIN_4);
	// set MOSI pin as output
	set_bit(DDRB,PIN_5);
	// set MISO pin as input
	clr_bit(DDRB,PIN_6);
	// set SCK pin as output
	set_bit(DDRB,PIN_7);
	

	//  set interrupt mode , prescale , clock phase , clock polarity and data order

	// enable SPI
	/// set as master
	SPCR = (1<<SPE) | (1<<MSTR);
	
}
void SPI_initSlaveMode(void)
{

		///  set pin direction
		// set SS pin as input
		clr_bit(DDRB,PIN_4);
		// set MOSI pin as input
		clr_bit(DDRB,PIN_5);
		// set MISO pin as output
		set_bit(DDRB,PIN_6);
		// set SCK pin as input
		clr_bit(DDRB,PIN_7);
		

		//  set interrupt mode , prescale , clock phase , clock polarity and data order
		SPCR = 0;
		
		// Enable SPI interrupt
		set_bit(SPCR,SPIE);
		set_bit(SREG,7);

		// enable SPI
		set_bit(SPCR,SPE);
		
}


void SPI_SendByte(char data)
{
	SPDR = data;
	while( ! (SPSR & (1 << SPIF) ) );
	
}

char SPI_ReceiveByte(void)
{
	while( ! (SPSR & (1 << SPIF) ) );
	return SPDR;
}

void SPI_SendStr(char *data)
{
	int i =0;
	while( data[i] != '\0')
	{
		
		SPI_SendByte(data[i]);
		// Note That :  this delay just for testing in protous
		_delay_ms(5);
		i++;
	}
	
}
