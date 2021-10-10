/*
 * USART.h
 *
 * Created: 8/28/2021 1:11:11 PM
 *  Author: Bahaa
 */ 


#ifndef USART_H_
#define USART_H_

#include "CPU_Configurations.h"

void USART_Init(unsigned long baud);
uint8_t USART_RxByte( void);
void USART_TxByte( uint8_t data);


#endif /* USART_H_ */