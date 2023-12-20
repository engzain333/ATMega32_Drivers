
/*
              ################################  SSD_program.c   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : HAL
 
 *   SWC    : SSD
	 
 *   date   : 9/11/2023
 */
 
 
  
 
#include "TYPES.h"
#include "BIT_MATH.h"
 
#include "DIO_interface.h"
#include "LED_interface.h"


#include "SSD_interface.h"
#include "SSD_private.h"
#include "SSD_config.h"
 
 
static u8 SSD_NUMBER [10] = SSD_ARR ;





///====================================================================================================================================================
/*
 * Breif : This Function initialize the port which connected to 7 Seg leds as output pins ( 8 Pins or Port )
 * Parameters :    =>    Copy_u8PORT --> Port Name [ SSD_PORTA ,	SSD_PORTB , SSD_PORTC , SSD_PORTD ]
 * return : void  
 */
vvoid SSD_voidInitialDataPort  ( SSD_Type SSD_Configuration )



{
	
	DIO_SetPortDirection     ( SSD_Configuration.DataPort , 0xFF );

}




//----------------------------------------------------------------------------------------------------------------------------------------------------
/*
 * Breif : This Function write Number on 7 seg [ 0 : 9 ]
 * Parameters : => struct has the SSD type , data port and enable(port & pin)
 * return : void
 */
void SSD_voidSendNumber       ( SSD_Type SSD_Configuration , u8 Copy_u8Number )
{

	if( SSD_Configuration.Type == SSD_COMMON_CATHODE ){

		DIO_SetPortValue( SSD_Configuration.DataPort , SSD_NUMBER[ Copy_u8Number ] );

	}else if( SSD_Configuration.Type == SSD_COMMON_ANODE ){

		DIO_SetPortValue( SSD_Configuration.DataPort , ~( SSD_NUMBER[ Copy_u8Number ] ) );

	}

}



















//----------------------------------------------------------------------------------------------------------------------------------------------------
/*
 * Breif : This Function enable common pin
 * Parameters : => struct has the SSD type , data port and enable(port & pin)
 * return : void
 */
void SSD_voidEnable    ( SSD_Type SSD_Configuration )
{

	if( SSD_Configuration.Type == SSD_COMMON_CATHODE )
	{

		DIO_SetPinDirection( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_PIN_OUTPUT );
		DIO_SetPinValue( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_LOW );

	}
	
	else if( SSD_Configuration.Type == SSD_COMMON_ANODE )
	
	{

		DIO_SetPinDirection( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_HIGH );
		DIO_SetPinValue( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_HIGH );

	}

}     

//----------------------------------------------------------------------------------------------------------------------------------------------------
/*
 * Breif : This Function disable common pin
 * Parameters : => struct has the SSD type , data port and enable(port & pin)
 * return : void
 */
void SSD_voidDisable   ( SSD_Type SSD_Configuration )

{

	if( SSD_Configuration.Type == SSD_COMMON_CATHODE ){

		DIO_SetPinDirection( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_PIN_OUTPUT );
		DIO_SetPinValue( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_HIGH );

	}
	
	
	
	else if( SSD_Configuration.Type == SSD_COMMON_ANODE )
	
	{

		DIO_SetPinDirection( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_HIGH );
		DIO_SetPinValue( SSD_Configuration.EnablePort , SSD_Configuration.EnablePin , DIO_LOW );

	}

}



















//------------------------------------------------------------------------------------------------------------------------

/*       
  
  * Berief      : This Function Set High on led pin ( led on )

  * Parameters  :        => struct             has the led port , pin , status


*/

void LED_voidOn          ( LED_Type LED_Configuration )
{
	if ( LED_Configuration.Active_State == ACTIVE_HIGH )
	{
		
		DIO_Set_PinValue ( LED_Configuration.Port , LED_Configuration.Pin , DIO_PIN_HIGH )
		
	}
	
	else if ( LED_Configuration.Active_State == ACTIVE_LOW)
	{
		
		DIO_Set_PinValue ( LED_Configuration.Port , LED_Configuration.Pin , DIO_PIN_LOW )
	}
	
	
}


//------------------------------------------------------------------------------------------------------------------------

/*       
  
  * Berief      : This Function Set Low on led pin ( led Off )

  * Parameters  :        => struct             has the led port , pin , status


*/

void LED_voidOff          ( LED_Type LED_Configuration )

{
	
	
	if ( LED_Configuration.Active_State == ACTIVE_HIGH )
	{
		
		DIO_Set_PinValue ( LED_Configuration.Port , LED_Configuration.Pin , DIO_PIN_LOW )
		
	}
	
	else if ( LED_Configuration.Active_State == ACTIVE_LOW)  
		
	{
		
		DIO_Set_PinValue ( LED_Configuration.Port , LED_Configuration.Pin , DIO_PIN_HIGH )
		
	}
	
	
}





//------------------------------------------------------------------------------------------------------------------------

/*       
  
  * Berief      : This Function toggle led pin

  * Parameters  :        => struct             has the led port , pin , status

  * return      : void
*/

void LED_voidToggle      ( LED_Type LED_Configuration )

{
	
	       DIO_Tog_PinValue          ( LED_Configuration.Port , LED_Configuration.Pin       );
	
	
}








