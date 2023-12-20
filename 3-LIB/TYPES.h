/*
 * platform_types.h
 *
 *  Created on: Jan 8, 2023
 *      Author: lenovo
 */

#ifndef TYPES_H_
#define TYPES_H_

#include <stdbool.h>
#include <stdint.h>



#define CPU_TYPE            CPU_TYPE_32
#define CPU_BIT_ORDER       MSB_FIRST









typedef signed char		    s8;
typedef unsigned char		u8;
typedef signed short	    s16;
typedef unsigned short		u16;
typedef signed int			s32;
typedef unsigned int		u32;
typedef long long		    s64;
typedef unsigned long long	u64;



#define OK 	        	0
#define NOK	        	1
#define NULL_POINTER    2	

	
#define NULL	        ((void*)0)










/* typedef volatile signed char		   vint8_t;
typedef volatile unsigned char		   vuint8_t;

typedef volatile signed short	       vint16_t;
typedef volatile unsigned short		   vuint16_t;

typedef volatile signed int			   vint32_t;
typedef volatile unsigned int		   vuint32_t;

typedef volatile long long		       vint64_t;
typedef volatile unsigned long long	   vuint64_t;
 */

#endif /* TYPES_H_ */

