/*
 * DIO_interface.h
 *
 *  Created on: Sep 10, 2021
 *      Author: Ali El Bana
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


#include "../../LIB/LSTD_TYPES.h"



void MDIO_vSetPinDirection	( u8 A_u8PortNum, u8 A_u8PinNum, u8 A_u8Dir ) 	;

void MDIO_vSetPortDirection ( u8 A_u8PortNum, u8 A_u8Dir )					;

void MDIO_vSetPinValue      ( u8 A_u8PortNum, u8 A_u8PinNum, u8 A_u8Val )	;

void MDIO_vSetPortValue    	( u8 A_u8PortNum, u8 A_u8Val )					;

u8   MDIO_u8GetPinValue    	( u8 A_u8PortNum, u8 A_u8PinNum )				;

u8   MDIO_u8GetPortValue   	( u8 A_u8PortNum )								;



#define MDIO_PORTA 	0
#define MDIO_PORTB 	1
#define MDIO_PORTC 	2
#define MDIO_PORTD 	3


#define MDIO_PIN0  	0
#define MDIO_PIN1  	1
#define MDIO_PIN2  	2
#define MDIO_PIN3 	3
#define MDIO_PIN4 	4
#define MDIO_PIN5 	5
#define MDIO_PIN6 	6
#define MDIO_PIN7  	7


#define MDIO_OUTPUT 1
#define MDIO_INPUT  0


#define MDIO_PIN_HIGH 	1
#define MDIO_PIN_LOW 	0

#define MDIO_PORT_HIGH 	0xff
#define MDIO_PORT_LOW 	0x00

#define MDIO_SET_NibbleLow 	0x0f
#define MDIO_CLR_NibbleLow 	0xf0

#define MDIO_SET_NibbleHigh 0xf0
#define MDIO_CLR_NibbleHigh 0x0f


#endif /* DIO_INTERFACE_H_ */