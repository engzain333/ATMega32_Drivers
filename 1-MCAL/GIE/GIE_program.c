/*
              ################################   TIMERS_program.c   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : MCAL
 
 *   SWC    : GIE
	 
 *   date   : 20/11/2023
 */
 
 
 
 #include  "TYPES.h"
 #include  "BIT_MATH.h"
 #include  "GIE_interface.h"
 #include  "GIE_register.h"

 
 
 
 
void GIE_Global_Enable (void)
{
	SET_BIT(SREG,SREG_I);
}

void GIE_Global_Disable (void)
{
	CLR_BIT(SREG,SREG_I);
}

 