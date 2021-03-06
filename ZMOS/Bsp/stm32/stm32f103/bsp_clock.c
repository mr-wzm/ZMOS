/*****************************************************************
* Copyright (C) 2021 zm. All rights reserved.                    *
******************************************************************
* bsp_clock.c
*
* DESCRIPTION:
*     Provide clock tick for ZMOS.
* AUTHOR:
*     zm
* CREATED DATE:
*     2021/5/22
* REVISION:
*     v0.1
*
* MODIFICATION HISTORY
* --------------------
* $Log:$
*
*****************************************************************/
 
/*************************************************************************************************************************
 *                                                       INCLUDES                                                        *
 *************************************************************************************************************************/
#include "stm32f1xx_hal.h"
#include "bsp_clock.h"
/*************************************************************************************************************************
 *                                                        MACROS                                                         *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                      CONSTANTS                                                        *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                       TYPEDEFS                                                        *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                   GLOBAL VARIABLES                                                    *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                  EXTERNAL VARIABLES                                                   *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                    LOCAL VARIABLES                                                    *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                 FUNCTION DECLARATIONS                                                 *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                   PUBLIC FUNCTIONS                                                    *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                    LOCAL FUNCTIONS                                                    *
 *************************************************************************************************************************/
/*****************************************************************
* FUNCTION: bsp_getClockCount
*
* DESCRIPTION:
*     Get clock count, it provide system clock for ZMOS.
* INPUTS:
*     null
* RETURNS:
*     Clock count.
* NOTE:
*     null
*****************************************************************/
uint32_t bsp_getClockCount(void)
{
    return HAL_GetTick();
}
/****************************************************** END OF FILE ******************************************************/
