/*****************************************************************
* Copyright (C) 2021 zm. All rights reserved.                    *
******************************************************************
* bsp.c
*
* DESCRIPTION:
*     Board support package.
* AUTHOR:
*     zm
* CREATED DATE:
*     2021/8/6
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
#include "driverlib.h"
#include "bsp.h"
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
extern void bsp_clockInit(void);
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
* FUNCTION: bsp_init
*
* DESCRIPTION:
*     Bsp initiale.
* INPUTS:
*     null
* RETURNS:
*     null
* NOTE:
*     null
*****************************************************************/
void bsp_init(void)
{
    bsp_clockInit();
}
/*****************************************************************
* FUNCTION: bsp_mcuDisableInterrupt
*
* DESCRIPTION:
*     Disable mcu interrupt.
* INPUTS:
*     null
* RETURNS:
*     null
* NOTE:
*     null
*****************************************************************/
void bsp_mcuDisableInterrupt(void)
{
    __disable_interrupt();
}
/*****************************************************************
* FUNCTION: bsp_mcuEnableInterrupt
*
* DESCRIPTION:
*     Enable mcu interrupt.
* INPUTS:
*     null
* RETURNS:
*     null
* NOTE:
*     null
*****************************************************************/
void bsp_mcuEnableInterrupt(void)
{
    __enable_interrupt();
}
/****************************************************** END OF FILE ******************************************************/