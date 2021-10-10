/*
 * ECU_Module.c
 *
 * Created: 8/7/2021 11:13:07 AM
 *  Author: oraby
 */ 
#include "ECU_Module.h"
#include "CPU_Configurations.h"


#define LED1_PORT		PORT_A
#define LED1_PIN			PIN_0
#define LED2_PORT		PORT_A
#define LED2_PIN		PIN_1
#define LED3_PORT		PORT_A
#define LED3_PIN		PIN_2
				  

void ECU_Init(void)
{
	
	DIO_SetDir(LED1_PORT , LED1_PIN , OUTPUT);
	DIO_SetDir(LED2_PORT , LED2_PIN , OUTPUT);
	DIO_SetDir(LED3_PORT , LED3_PIN , OUTPUT);
}


void LED1_ON(void)
{
	DIO_SetValue(LED1_PORT , LED1_PIN , HIGH);
	
}

void LED1_OFF(void)
{
	DIO_SetValue(LED1_PORT , LED1_PIN, LOW);
}

void LED2_ON(void)
{
	DIO_SetValue(LED2_PORT , LED2_PIN , HIGH);
}

void LED2_OFF(void)
{
	DIO_SetValue(LED2_PORT , LED2_PIN, LOW);
}
void LED3_ON(void)
{
	DIO_SetValue(LED3_PORT , LED3_PIN , HIGH);
}

void LED3_OFF(void)
{
	DIO_SetValue(LED3_PORT , LED3_PIN, LOW);
}
void ALL_LEDS_ON(void)
{
	DIO_SetValue(LED1_PORT , LED1_PIN , HIGH);
	DIO_SetValue(LED2_PORT , LED2_PIN , HIGH);
	DIO_SetValue(LED3_PORT , LED3_PIN , HIGH);
}

void ALL_LEDS_OFF(void)
{
	DIO_SetValue(LED1_PORT , LED1_PIN , LOW);
	DIO_SetValue(LED2_PORT , LED2_PIN , LOW);
	DIO_SetValue(LED3_PORT , LED3_PIN , LOW);
}