
/*
              ################################  KPD_config.h   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  :    HAL
 
 *   SWC    :    KPD            
	  
 *   date   : 16/11/2023
 */
 
 
 
 #ifndef  KPD_CONFIG_H_
 #define  KPD_CONFIG_H_
 
 
#define  NO_PRESSED_KEY      0xff  
 
#define  KPD_BUTTONS_VALUES    {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}
 
 
#define  KPD_PORT            DIO_PORTA          //  user define the port

#define  COLLUMN_PIN0        DIO_PIN0
#define  COLLUMN_PIN1        DIO_PIN1
#define  COLLUMN_PIN2        DIO_PIN2
#define  COLLUMN_PIN3        DIO_PIN3


#define  RAW_PIN0            DIO_PIN4
#define  RAW_PIN1            DIO_PIN5
#define  RAW_PIN2            DIO_PIN6
#define  RAW_PIN3            DIO_PIN7
 
 
 #endif /*  KPD_CONFIG_H_  */