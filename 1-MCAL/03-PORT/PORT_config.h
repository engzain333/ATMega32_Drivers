/*
              ################################  PORT_config.h   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : MCAL
 
 *   SWC    : PORT
	 
 *   date   : 20/11/2023
 */
 
 
 
 
#ifndef  PORT_CONFIG_H_
#define  PORT_CONFIG_H_




/*

      0   =>   input Direction 
      1   =>   output Direction 


*/
#define DIO_INITIAL_OUTPUT				1
#define DIO_INITIAL_INPUT				0

  
/* 

Enter 0 for :    1- input floating  
                 2-  Low   
	
Enter 1 for :    1- input pulled up  
                 2- output High  

*/
#define	DIO_OUTPUT_HIGH					1
#define	DIO_OUTPUT_LOW					0
#define	DIO_INPUT_FLOATING				0
#define	DIO_INPUT_PULLUP				1 



#define PORTA_PIN0_DIR         DIO_INITIAL_INPUT
#define PORTA_PIN1_DIR         DIO_INITIAL_INPUT
#define PORTA_PIN2_DIR         DIO_INITIAL_INPUT
#define PORTA_PIN3_DIR         DIO_INITIAL_INPUT
#define PORTA_PIN4_DIR         DIO_INITIAL_INPUT
#define PORTA_PIN5_DIR         DIO_INITIAL_INPUT
#define PORTA_PIN6_DIR         DIO_INITIAL_INPUT
#define PORTA_PIN7_DIR         DIO_INITIAL_INPUT
   
   
   
#define PORTB_PIN0_DIR         DIO_INITIAL_INPUT
#define PORTB_PIN1_DIR         DIO_INITIAL_INPUT
#define PORTB_PIN2_DIR         DIO_INITIAL_INPUT
#define PORTB_PIN3_DIR         DIO_INITIAL_INPUT
#define PORTB_PIN4_DIR         DIO_INITIAL_INPUT
#define PORTB_PIN5_DIR         DIO_INITIAL_INPUT
#define PORTB_PIN6_DIR         DIO_INITIAL_INPUT
#define PORTB_PIN7_DIR         DIO_INITIAL_INPUT



#define PORTC_PIN0_DIR         DIO_INITIAL_INPUT
#define PORTC_PIN1_DIR         DIO_INITIAL_INPUT
#define PORTC_PIN2_DIR         DIO_INITIAL_INPUT
#define PORTC_PIN3_DIR         DIO_INITIAL_INPUT
#define PORTC_PIN4_DIR         DIO_INITIAL_INPUT
#define PORTC_PIN5_DIR         DIO_INITIAL_INPUT
#define PORTC_PIN6_DIR         DIO_INITIAL_INPUT
#define PORTC_PIN7_DIR         DIO_INITIAL_INPUT



#define PORTD_PIN0_DIR         DIO_INITIAL_INPUT
#define PORTD_PIN1_DIR         DIO_INITIAL_INPUT
#define PORTD_PIN2_DIR         DIO_INITIAL_INPUT
#define PORTD_PIN3_DIR         DIO_INITIAL_INPUT
#define PORTD_PIN4_DIR         DIO_INITIAL_INPUT
#define PORTD_PIN5_DIR         DIO_INITIAL_INPUT
#define PORTD_PIN6_DIR         DIO_INITIAL_INPUT
#define PORTD_PIN7_DIR         DIO_INITIAL_INPUT   
   
   
/* 

Enter 0 for :    1- input floating  
                 2-  Low   
	
	
Enter 1 for :    1- input pulled up  
                 2- output High  

*/

#define PORTA_PIN0_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTA_PIN1_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTA_PIN2_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTA_PIN3_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTA_PIN4_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTA_PIN5_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTA_PIN6_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTA_PIN7_INITIAL_VALUE      DIO_INPUT_FLOATING         




#define PORTB_PIN0_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTB_PIN1_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTB_PIN2_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTB_PIN3_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTB_PIN4_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTB_PIN5_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTB_PIN6_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTB_PIN7_INITIAL_VALUE      DIO_INPUT_FLOATING         




#define PORTC_PIN0_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTC_PIN1_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTC_PIN2_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTC_PIN3_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTC_PIN4_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTC_PIN5_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTC_PIN6_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTC_PIN7_INITIAL_VALUE      DIO_INPUT_FLOATING         




#define PORTD_PIN0_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTD_PIN1_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTD_PIN2_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTD_PIN3_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTD_PIN4_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTD_PIN5_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTD_PIN6_INITIAL_VALUE      DIO_INPUT_FLOATING         
#define PORTD_PIN7_INITIAL_VALUE      DIO_INPUT_FLOATING         





   
 #endif  
 /* 
 
 
                0             1
 input   = ( floating  ,  pulled up )
 
 
 
                0             1
 output  = (   low     ,    high   ) 
 
 
 
 
 */
 