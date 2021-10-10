/*
 * DIO_Module.h
 *
 * Created: 8/7/2021 11:35:14 AM
 *  Author: ORABY
 */ 


#ifndef DIO_MODULE_H_
#define DIO_MODULE_H_

	void DIO_SetDir(uint8_t portNumber , uint8_t pinNumber , uint8_t dir);
	int DIO_GetValue(uint8_t portNumber , uint8_t pinNumber);
    void DIO_SetValue(uint8_t portNumber , uint8_t pinNumber, uint8_t value);
	void DIO_TOGValue(uint8_t port, uint8_t pin);
	

#endif /* DIO_MODULE_H_ */