 
/*
              ################################  DIO_interface.h   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : MCAL
 
 *   SWC    : DIO/GPIO
	 
 *   date   : 20/6/2023
 */
 
 
  
  
#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_
 
 


 // PIN Value Options
 
#define DIO_PIN_LOW      0
#define DIO_PIN_HIGH     1
   
   


 
 // PORT Value Options
 
#define DIO_PORT_LOW     0	
#define DIO_PORT_HIGH    0xff



  
 // Port Defines
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3
	
 
 // PIN Defines
 
#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7
			
 

 /*                                                              <<<    PIN    >>>                                                                  */
 
 
 
u8 DIO_Set_Pin_Value       ( u8 Copy_u8_Port , u8 Copy_u8_Pin , u8 Copy_u8_Value  );
u8 DIO_Get_Pin_Value       ( u8 Copy_u8_Port , u8 Copy_u8_Pin , u8* Copy_pu8Value );
u8 DIO_Tog_Pin_Value       ( u8 Copy_u8_Port , u8 Copy_u8_Pin );



 /*                                                              <<<    PORT    >>>                                                                  */

 
 u8 DIO_Set_Port_Value        ( u8 Copy_u8_Port , u8 Copy_u8_Value  );
 u8 DIO_Tog_Port_Value        ( u8 Copy_u8_Port );                                ///////////////  ETAKED MENHA
 u8 DIO_Get_Port_Value        ( u8 Copy_u8_Port ,  u8 * Copy_PtrData  );          ///////////////  ETAKED MENHA







#endif