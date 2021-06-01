/*****************************************************************
* Copyright (C) 2021 zm. All rights reserved.                    *
******************************************************************
* zm_drivers.c
*
* DESCRIPTION:
*     Based on the ZMOS system driver.
* AUTHOR:
*     zm
* CREATED DATE:
*     2021/6/1
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
#include "ZMOS.h"
#include "zm_drivers.h"
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
static zmos_taskHandle_t driverTaskHandle;
/*************************************************************************************************************************
 *                                                  EXTERNAL VARIABLES                                                   *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                    LOCAL VARIABLES                                                    *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                 FUNCTION DECLARATIONS                                                 *
 *************************************************************************************************************************/
static uTaskEvent_t zmDriverPorcessEvent(uTaskEvent_t events);
/*************************************************************************************************************************
 *                                                   PUBLIC FUNCTIONS                                                    *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                    LOCAL FUNCTIONS                                                    *
 *************************************************************************************************************************/
/*****************************************************************
* FUNCTION: zmDriverInit
*
* DESCRIPTION:
*     ZM drvers initialize
* INPUTS:
*     null
* RETURNS:
*     null
* NOTE:
*     null
*****************************************************************/
void zmDriverInit(void)
{
    //Register task in ZMOS
    zmos_taskThreadRegister(&driverTaskHandle, zmDriverPorcessEvent);
    
    
}

/*****************************************************************
* FUNCTION: zmDriverSetEvent
*
* DESCRIPTION:
*     This function set event in drver process.
* INPUTS:
*     events : The event to set.
* RETURNS:
*     0 : success.
* NOTE:
*     null
*****************************************************************/
taskReslt_t zmDriverSetEvent(uTaskEvent_t events)
{
    return zmos_setTaskEvent(driverTaskHandle, events);
}
/*****************************************************************
* FUNCTION: zmDriverSetTimerEvent
*
* DESCRIPTION:
*     This function start an event timer.
* INPUTS:
*     events : The event to set.
*     timeout : timeout.
*     reload : Is reload timer.
*              true : reload timer.
*              false : single timer.
* RETURNS:
*     0 : success.
* NOTE:
*     If the event timer already exists, Timeout and Reload 
*     properties will be updated.
*****************************************************************/
timerReslt_t zmDriverSetTimerEvent(uTaskEvent_t events, uint32_t timeout, bool reload)
{
    if(reload)
    {
        return zmos_startReloadTimer(driverTaskHandle, events, timeout);
    }
    else
    {
        return zmos_startSingleTimer(driverTaskHandle, events, timeout);
    }
}
/*****************************************************************
* FUNCTION: zmDriverStopTimerEvent
*
* DESCRIPTION:
*     This function stop an event timer.
* INPUTS:
*     events : The event to stop.
* RETURNS:
*     0 : success.
*     other : The timer doesn't exist.
* NOTE:
*     null
*****************************************************************/
timerReslt_t zmDriverStopTimerEvent(uTaskEvent_t events)
{
    return zmos_stopTimer(driverTaskHandle, events);
}
/*****************************************************************
* FUNCTION: zmDriverPorcessEvent
*
* DESCRIPTION:
*     
* INPUTS:
*     
* RETURNS:
*     null
* NOTE:
*     null
*****************************************************************/
static uTaskEvent_t zmDriverPorcessEvent(uTaskEvent_t events)
{
    return 0;
}
/****************************************************** END OF FILE ******************************************************/
