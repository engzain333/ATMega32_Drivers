/*
              ################################   USART_interface.h   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : MCAL
 
 *   SWC    : USART
	 
 *   date   : 20/11/2023
 */
 
 
  
#ifndef   USART_INTERFACE_H_
#define   USART_INTERFACE_H_


void Timer0_Init(void);

u8 Timer0_Set_Call_Back (void (* Copy_pvCallBackFunc) (void));




 
#endif /*   USART_INTERFACE_H_  */