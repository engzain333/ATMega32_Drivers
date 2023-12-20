
/*
              ################################  DIO_program.c   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : MCAL
 
 *   SWC    : DIO/GPIO
	 
 *   date   : 20/6/2023
 */
 
 
 
 #include "TYPES.h"
 #include "BIT_MATH.h"
 
 #include "DIO_interface.h"
 #include "DIO_private.h"
 #include "DIO_config.h"
   

   
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

u8 DIO_Set_Pin_Value       ( u8 Copy_u8_Port , u8 Copy_u8_Pin , u8 Copy_u8_Value  )
 {

	 u8 Local_ErrorState=OK;
	 if (Copy_u8_Pin<=DIO_PIN7)
	 {
		 if ( Copy_u8_Value == DIO_PIN_HIGH)
		 {
			 switch ( Copy_u8_Port )
			 {
				 case DIO_PORTA : SET_BIT( PORTA , Copy_u8_Pin ); break;
				 case DIO_PORTB : SET_BIT( PORTB , Copy_u8_Pin ); break;
				 case DIO_PORTC : SET_BIT( PORTC , Copy_u8_Pin ); break;
				 case DIO_PORTD : SET_BIT( PORTD , Copy_u8_Pin ); break;
				 default : Local_ErrorState =NOK;  break;
			 }
		 }

		 else if ( Copy_u8_Value == DIO_PIN_LOW  )
		 {
			 switch ( Copy_u8_Port )
			 {
				 case DIO_PORTA : CLR_BIT( PORTA , Copy_u8_Pin ); break;
				 case DIO_PORTB : CLR_BIT( PORTB , Copy_u8_Pin ); break;
				 case DIO_PORTC : CLR_BIT( PORTC , Copy_u8_Pin ); break;
				 case DIO_PORTD : CLR_BIT( PORTD , Copy_u8_Pin ); break;
				 default : Local_ErrorState =NOK;  break;
			 }
		 }
		 else
		 {
			 Local_ErrorState = NOK;
		 }
	 }
	 else
	 {
		 Local_ErrorState = NOK;
	 }
	 return Local_ErrorState;
 }

 
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 


u8 DIO_Get_Pin_Value       ( u8 Copy_u8_Port , u8 Copy_u8_Pin , u8* Copy_pu8Value )
{
	u8 Local_ErrorState= OK;
	if((Copy_pu8Value != NULL)  && (Copy_u8_Pin<= DIO_PIN7))

	switch ( Copy_u8_Port )
	{
		case DIO_PORTA : *Copy_pu8Value=GET_BIT( PINA , Copy_u8_Pin ); break;
		case DIO_PORTB : *Copy_pu8Value=GET_BIT( PINB , Copy_u8_Pin ); break;
		case DIO_PORTC : *Copy_pu8Value=GET_BIT( PINC , Copy_u8_Pin ); break;
		case DIO_PORTD : *Copy_pu8Value=GET_BIT( PIND , Copy_u8_Pin ); break;
		default: Local_ErrorState=NOK;                                 break;
	}

else
{
	Local_ErrorState=NOK;
}
return Local_ErrorState;
}
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 u8 DIO_Tog_Pin_Value       ( u8 Copy_u8_Port , u8 Copy_u8_Pin )
{
        u8 Local_ErrorState= OK;
		switch ( Copy_u8_Port )
		{
		  case DIO_PORTA : TOG_BIT( PORTA , Copy_u8_Pin ); break;
		  case DIO_PORTB : TOG_BIT( PORTB , Copy_u8_Pin ); break;
		  case DIO_PORTC : TOG_BIT( PORTC , Copy_u8_Pin ); break; 
		  case DIO_PORTD : TOG_BIT( PORTD , Copy_u8_Pin ); break; 
		  default: Local_ErrorState=NOK;                   break;
	    }
     return Local_ErrorState;
}




/* 

******************************************************************************************************************
******************************************************************************************************************
******************************************************************************************************************

                                  //              <<<<<     PORT    >>>>>                            //                          

*****************************************************************************************************************
******************************************************************************************************************
******************************************************************************************************************
 */
 
 
 
 
 
 

 
 
 
 
 
 u8 DIO_Set_Port_Value        ( u8 Copy_u8_Port , u8 Copy_u8_Value  )
 {
     u8 Local_ErrorState= OK;
	 switch ( Copy_u8_Port )
		 {
		  case DIO_PORTA : PORTA = Copy_u8_Value ; break;
		  case DIO_PORTB : PORTB = Copy_u8_Value ; break;
		  case DIO_PORTC : PORTC = Copy_u8_Value ; break; 
		  case DIO_PORTD : PORTD = Copy_u8_Value ; break;
	      default: Local_ErrorState=NOK; 	       break;
         }
     return Local_ErrorState;
 }
  
  
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  
  u8 DIO_Tog_Port_Value        ( u8 Copy_u8_Port )
  {
	  u8 Local_ErrorState= OK;
	  switch ( Copy_u8_Port )
		 {
		  case DIO_PORTA : PORTA = ~PORTA ; break;
		  case DIO_PORTB : PORTB = ~PORTB ; break;
		  case DIO_PORTC : PORTC = ~PORTC ; break; 
		  case DIO_PORTD : PORTD = ~PORTD ; break;
		  default: Local_ErrorState=NOK;    break;
	 }
	 return Local_ErrorState;
 }
  
  
  
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  u8 DIO_Get_Port_Value        ( u8 Copy_u8_Port ,  u8 * Copy_PtrData  )
  
  {
	  u8 Local_ErrorState= OK;
	  switch ( Copy_u8_Port )
		 {
		  case DIO_PORTA : * Copy_PtrData = PINA ; break;
		  case DIO_PORTB : * Copy_PtrData = PINB ; break;
		  case DIO_PORTC : * Copy_PtrData = PINC ; break; 
		  case DIO_PORTD : * Copy_PtrData = PIND ; break;
		  default:Local_ErrorState=NOK;            break;
	     }
	 return Local_ErrorState;
 }
  
  