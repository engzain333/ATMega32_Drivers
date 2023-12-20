/*
              ################################   USART_register.h   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : MCAL
 
 *   SWC    : USART
	 
 *   date   : 20/11/2023
 */
 
 
 
 #ifndef   USART_REGISTER_H_
 #define   USART_REGISTER_H_
 
 
 


#define    TIMSK           *((volatile u8*)0x59)               /*   Timer  Mask Register             */

#define    TIMSK_TOIE0     0                                   /*   Timer0 Overflow Interrupt Enable */



#define    TCCR0           *((volatile u8*)0x53)               /*   Timer Control Register 0          */
 
#define    TCCR0_WGM01     3                                   /*   Waveform Generation Mode bit 3   */
#define    TCCR0_WGM00     6                                   /*   Waveform Generation Mode bit 6   */
 

#define    TCNT0           *((volatile u8*)0x52)               /*   Timer Counter 0 Register         */

 

 
 
 
 #endif  /*  USART_REGISTER_H_  */