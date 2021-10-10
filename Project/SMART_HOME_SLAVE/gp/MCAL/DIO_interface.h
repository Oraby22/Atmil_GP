/*
 * DIO_interface.h
 *
 * Created: 8/7/2021 11:46:59 AM
 *  Author: Oraby
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
	typedef enum
	{
		PORT_A,
		PORT_B,
		PORT_C,
		PORT_D
	}DIO_PORT;

	typedef enum
	{
		PIN_0,
		PIN_1,
		PIN_2,
		PIN_3,
		PIN_4,
		PIN_5,
		PIN_6,
		PIN_7
	}DIO_PIN;

	typedef enum
	{
		INPUT,
		OUTPUT
	}DIO_DIR;
	
	typedef enum
	{
		LOW,
		HIGH
	}DIO_VALU;

#endif /* DIO_INTERFACE_H_ */