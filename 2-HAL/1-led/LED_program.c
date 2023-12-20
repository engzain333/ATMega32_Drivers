
/*
              ################################  LED_program.c   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : HAL
 
 *   SWC    : LED
	 
 *   date   : 9/11/2023
 */
 
 
  
 
 #include "TYPES.h"
 #include "BIT_MATH.h"
 
 #include "DIO_interface.h"
 #include "LED_interface.h"

   


//------------------------------------------------------------------------------------------------------------------------

/*       
  
  * Berief      : This Function Set High on led pin ( led on )

  * Parameters  :        => struct             has the led port , pin , status


*/

void LED_On              ( LED_S_Type LED_Configuration )
{
	if ( LED_Configuration.LED_State == ACTIVE_HIGH )
	{
		
		DIO_Set_Pin_Value ( LED_Configuration.LED_Port , LED_Configuration.LED_Pin , DIO_PIN_HIGH );
		
	}
	
	else if ( LED_Configuration.LED_State == ACTIVE_LOW)
	{
		
		DIO_Set_Pin_Value ( LED_Configuration.LED_Port , LED_Configuration.LED_Pin , DIO_PIN_LOW );
	}
	
	
}


//------------------------------------------------------------------------------------------------------------------------

/*       
  
  * Berief      : This Function Set Low on led pin ( led Off )

  * Parameters  :        => struct             has the led port , pin , status


*/

void LED_Off             ( LED_S_Type LED_Configuration )

{
	
	
	if ( LED_Configuration.LED_State == ACTIVE_HIGH )
	{
		
		DIO_Set_Pin_Value ( LED_Configuration.LED_Port , LED_Configuration.LED_Pin , DIO_PIN_LOW );
		
	}
	
	else if ( LED_Configuration.LED_State == ACTIVE_LOW)  
		
	{
		
		DIO_Set_Pin_Value ( LED_Configuration.LED_Port , LED_Configuration.LED_Pin , DIO_PIN_HIGH );
		
	}
	
	
}





//------------------------------------------------------------------------------------------------------------------------

/*       
  
  * Berief      : This Function toggle led pin

  * Parameters  :        => struct             has the led port , pin , status

  * return      : void
*/

void LED_Toggle          ( LED_S_Type LED_Configuration )

{
	  DIO_Tog_Pin_Value          ( LED_Configuration.LED_Port , LED_Configuration.LED_Pin       );
}








//------------------------------------------------------------------------------------------------------------------------

/*       
  
  * Berief      : This Function Initialize the pin Whitch Connected To The led as Output Pin 

  * Parameters  :        => struct             has the led port , pin , status




void LED_Init            ( LED_S_Type LED_Configuration )
{
	
	DIO_Set_PinDirection      (  LED_Configuration.LED_Port ,  LED_Configuration.LED_Pin , DIO_PIN_OUTPUT   ); 
	
}


*/