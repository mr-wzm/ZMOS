/*****************************************************************
* Copyright (C) 2021 zm. All rights reserved.                    *
******************************************************************
* ZMOS_Common.h
*
* DESCRIPTION:
*     ZMOS common define.
* AUTHOR:
*     zm
* CREATED DATE:
*     2021/5/16
* REVISION:
*     v0.1
*
* MODIFICATION HISTORY
* --------------------
* $Log:$
*
*****************************************************************/
#ifndef __ZMOS_COMMON_H__
#define __ZMOS_COMMON_H__
 
#ifdef __cplusplus
extern "C"
{
#endif
/*************************************************************************************************************************
 *                                                       INCLUDES                                                        *
 *************************************************************************************************************************/
#include "ZMOS_Config.h"
/*************************************************************************************************************************
 *                                                        MACROS                                                         *
 *************************************************************************************************************************/

/**
 * ZMOS null define.
 */
#ifndef NULL
  #define NULL   _NULL
#endif
    
/**
 * Bit set.
 */
#ifndef BS
#define BS(n)   (1 << (n))
#endif
    
/**
 * Bit clear.
 */
#ifndef BC
#define BC(n)   ~(1 << (n))
#endif
    
/**
 * ZMOS general return codes.
 */
//#define ZMOS_
/*************************************************************************************************************************
 *                                                      CONSTANTS                                                        *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                       TYPEDEFS                                                        *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                   PUBLIC FUNCTIONS                                                    *
 *************************************************************************************************************************/
 
#ifdef __cplusplus
}
#endif
#endif /* ZMOS_Common.h */
