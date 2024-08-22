/*
 * main.c
 *
 *  Created on: Aug 11, 2024
 *      Author: !?
 */

// here hedear file to function

// «н—ж— «б ўе— бн ед« »—ѕж еж function main «бЏ«ѕне
#include <util/delay.h>
#include "DIO_int.h"

int main ()
{

	while(1)
	{
		DIO_enumSetPinDirection(DIO_u8PORTA,DIO_u8PIN0,OUTPUT);
		DIO_enumSetPinValue(DIO_u8PORTA,DIO_u8PIN0, HIGH);
		_delay_ms(100);
		DIO_enumTogPinValue(DIO_u8PORTA , DIO_u8PIN0 );
	    //DIO_enumTogPortValue(DIO_u8PORTA );
	    _delay_ms(100);


	}



return 0;

}
