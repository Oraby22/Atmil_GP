/*
 * CPU_Configurations.h
 *
 * Created: 8/7/2021 10:22:13 PM
 *  Author: Oraby
 */ 


#ifndef CPU_CONFIGURATIONS_H_
#define CPU_CONFIGURATIONS_H_

/*Micro-Controller CPU Configuration*/
#undef F_CPU                // Undefined internal oscillator
#define F_CPU 16000000      // Defined external oscillator
#include <avr/io.h>         // Defined Input/Output for this MC
#include <avr/interrupt.h>  // Defined interrupts for AVR controller
#include <util/delay.h>     // Defined built-in delay function
#include "DIO_Module.h"
#include "DIO_interface.h"
#include "BitMath.h"
#include "SPI.h"
//#include "ECU_Module.h"
#include "USART.h"


#endif /* CPU_CONFIGURATIONS_H_ */