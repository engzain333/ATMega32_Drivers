/*
              ################################   USART_program.c   ######################
			  
 *   Author : Mahmoud Zain
 
 *   Layer  : MCAL
 
 *   SWC    : USART
	 
 *   date   : 20/11/2023
 */
 
 
 #include  "TYPES.h"
 #include  "BIT_MATH.h"
 
 #include  "USART_interface.h"
 #include  "USART_register.h"
 #include  "USART_config.h"
 #include  "USART_private.h"
 
 
 
 
 void USART_Init (void)
{
	u16 Local_u16_BoadRate = 51;
	u8 Local_u8_UCSRC_Value = 0b10000000;
	
	/* Boad Rate = 9600 */
	UBRRL = (u8) Local_u16_BoadRate ;
	UBRRH = (u8) (Local_u16_BoadRate >> 8);
	
	 
	/* Disable MPCM => Multy Processor Mode  */
	CLR_BIT(UCSRA,0);
	
	/* Normal Speed */
	CLR_BIT(UCSRA,1);
	
	/* Receiver & Transmitter Enable */
	SET_BIT(UCSRB,4);
	SET_BIT(UCSRB,3);
	
	/* Select 8 bit Data */
	CLR_BIT(UCSRB,2);
	SET_BIT(Local_u8_UCSRC_Value,2);
	SET_BIT(Local_u8_UCSRC_Value,1);
	
	/* Select Asynchronous Mode */
	CLR_BIT(Local_u8_UCSRC_Value,6);
	
	/* No Parity Bit */
	CLR_BIT(Local_u8_UCSRC_Value,5);
	CLR_BIT(Local_u8_UCSRC_Value,4);
	
	/* Enable 2 Stop Bits */
	SET_BIT(Local_u8_UCSRC_Value,3);
	
	/* Update UCSRC Register */
	UCSRC = Local_u8_UCSRC_Value;
	
	
}

 void USART_Send_DataByte (u8 Copy_u8_DataByte)
 {
	 /* wait until the transmit register is empty */
	 while((GET_BIT(UCSRA,5))==0);
	 
	 /* send data byte */
	 UDR = Copy_u8_DataByte;
	 
 }

 void USART_Receive_DataByte (u8 * Copy_u8_pu8ReceiveDataByte )
 {
	 u8 Local_u8Error_State = OK;
	 
	 if(Copy_u8_pu8ReceiveDataByte != NULL)
	 {
	 /* Wait until the data is received */
	 while((GET_BIT(UCSRA,7))==0);
	 
	 /* Read Data */
	 *Copy_u8_pu8ReceiveDataByte = UDR;
	
		Local_u8Error_State=NOK; 
	 }
	 
	 
	 
	 return Local_u8Error_State;
 }

 