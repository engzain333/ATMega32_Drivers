/*
              ################################   USART_interface.h   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : MCAL
 
 *   SWC    : USART
	 
 *   date   : 20/11/2023
 */
 
 
  
#ifndef   USART_INTERFACE_H_
#define   USART_INTERFACE_H_



void USART_Init (void);

void USART_Send_DataByte (u8 Copy_u8_DataByte);

void USART_Receive_DataByte (u8 * Copy_u8_pu8ReceiveDataByte );

 
#endif /*   USART_INTERFACE_H_  */