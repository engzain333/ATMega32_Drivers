
/*
              ################################  KPD_program.h   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  :    HAL
 
 *   SWC    :    KPD            
	  
 *   date   : 16/11/2023
 */

#include "TYPES.h" 

#include "DIO_interface.h" 
#include "KPD_config.h"
#include "KPD_interface.h"
#include "KPD_private.h"


 u8 KPD_GetPressedKey (void)

{
	 
	u8 Local_Callom_Index , Local_Raw_Index , Local_Pressed_Key = NO_PRESSED_KEY  , Local_Pin_State ;
	u8 KPD_ARR[KPD_RAW_NUMBER][KPD_COLLUMN_NUMBER]=KPD_BUTTONS_VALUES;
	u8 KPD_COLLUMN_ARR [KPD_COLLUMN_NUMBER]={COLLUMN_PIN0,COLLUMN_PIN1,COLLUMN_PIN2,COLLUMN_PIN3};
	u8 KPD_RAW_ARR [KPD_RAW_NUMBER]={RAW_PIN0,RAW_PIN1,RAW_PIN2,RAW_PIN3};
		
	for (Local_Callom_Index = 0 ; Local_Callom_Index<KPD_COLLUMN_NUMBER ;Local_Callom_Index ++ )
         {
			 /* Activate the current COLLUMN */
			 DIO_Set_Pin_Value(KPD_PORT,KPD_COLLUMN_ARR[Local_Callom_Index],DIO_PIN_LOW);
			 
			 
			 for (Local_Raw_Index = 0 ; Local_Raw_Index<KPD_RAW_NUMBER;Local_Raw_Index ++ )
			 
			 {
				 /* Read the current RAW */
				 DIO_Get_Pin_Value(KPD_PORT,KPD_RAW_ARR[Local_Raw_Index] , &Local_Pin_State);
				 
				 if (Local_Pin_State == DIO_PIN_LOW)
				 {
				    Local_Pressed_Key = KPD_ARR[Local_Raw_Index][Local_Callom_Index];
					/* Wait ( polling with blocking ) until the key is released */
					
					while(Local_Pin_State == DIO_PIN_LOW)
					{
						 DIO_Get_Pin_Value(KPD_PORT,KPD_RAW_ARR[Local_Raw_Index] , &Local_Pin_State);
					} 
					
					
					
					return Local_Pressed_Key;
				 }
			 }
			 /* deActivate the current COLLUMN */
			 DIO_Set_Pin_Value(KPD_PORT,KPD_COLLUMN_ARR[Local_Callom_Index],DIO_PIN_HIGH);
		 }






return Local_Pressed_Key ;	
}