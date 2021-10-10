/*
 * BitMath.h
 *
 * Created: 8/6/2021 10:35:57 PM
 *  Author: Bahaa
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_



#define set_bit(Reg,bit_no)				Reg |=		 (1<<bit_no)
#define clr_bit(Reg,bit_no)				Reg &=		~(1<<bit_no)
#define toggle_bit(Reg,bit_no)			Reg ^=		 (1<<bit_no)
#define get_bit(Reg,bit_no)				(Reg&(1<<bit_no))


#endif /* BITMATH_H_ */