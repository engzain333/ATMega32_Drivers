/*
 * BIT_MATH 
 *
 * Created: 6/8/2023 10:53:31 ص
 *  Author: lenovo
 */ 


#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define  SET_BIT(REG,BIT)     (REG|=(1<<BIT))

#define  CLR_BIT(REG,BIT)     (REG&=~(1<<BIT))

#define  GET_BIT(REG,BIT)     ((REG>>BIT)&1)

#define  TOG_BIT(REG,BIT)     (REG^=(1<<BIT))





#endif /* _BIT_MATH_H_*/

