/*
              ################################   TIMERS_interface.h   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : MCAL
 
 *   SWC    : TIMERS
	 
 *   date   : 20/11/2023
 */
 
 
  
#ifndef   TIMERS_INTERFACE_H_
#define   TIMERS_INTERFACE_H_


void Timer0_Init(void);

u8 Timer0_Set_Call_Back (void (* Copy_pvCallBackFunc) (void));




 
#endif /*   TIMERS_INTERFACE_H_  */