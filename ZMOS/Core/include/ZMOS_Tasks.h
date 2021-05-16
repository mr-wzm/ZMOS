/*****************************************************************
* Copyright (C) 2021 zm. All rights reserved.                    *
******************************************************************
* ZMOS_Tasks.h
*
* DESCRIPTION:
*     ZMOS task driver
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
#ifndef __ZMOS_TASKS_H__
#define __ZMOS_TASKS_H__
 
#ifdef __cplusplus
extern "C"
{
#endif
    
/*************************************************************************************************************************
 *                                                       INCLUDES                                                        *
 *************************************************************************************************************************/
#include "ZMOS_Types.h"
/*************************************************************************************************************************
 *                                                        MACROS                                                         *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                      CONSTANTS                                                        *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                       TYPEDEFS                                                        *
 *************************************************************************************************************************/
    
    
/**
 * Event handler function prototype
 */
typedef uEvent_t (*taskFunction_t)(uEvent_t event);
/**
 *
 */
typedef struct
{
    uint8_t taskId;
    uEvent_t event;
    taskFunction_t taskFunc;
}task_t;
/*************************************************************************************************************************
 *                                                   PUBLIC FUNCTIONS                                                    *
 *************************************************************************************************************************/
 
#ifdef __cplusplus
}
#endif
#endif /* ZMOS_Tasks.h */