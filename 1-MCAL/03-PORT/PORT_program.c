/*
              ################################   PORT_program.c   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : MCAL
 
 *   SWC    : PORT
	 
 *   date   : 20/11/2023
 */
 
 #include "BIT_MATH.h"
 #include "TYPES.h"
 
#include "PORT_config.h"
#include "PORT_private.h"
#include "PORT_interface.h"
#include "PORT_register.h" 


void Port_Init(void)
{
	
	DDRA = PORTA_DIR;
	DDRB = PORTB_DIR;
	DDRC = PORTC_DIR;
	DDRD = PORTD_DIR;
	
	
	PORTA = PORTA_INITIAL_VALUE; 
	PORTB = PORTB_INITIAL_VALUE; 
	PORTC = PORTC_INITIAL_VALUE; 
	PORTD = PORTD_INITIAL_VALUE; 
	
}

