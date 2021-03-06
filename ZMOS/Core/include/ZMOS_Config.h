/*****************************************************************
* Copyright (C) 2021 zm. All rights reserved.                    *
******************************************************************
* ZMOS_Config.h
*
* DESCRIPTION:
*     ZMOS config
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
#ifndef __ZMOS_CONFIG_H__
#define __ZMOS_CONFIG_H__
 
#ifdef __cplusplus
extern "C"
{
#endif
/*************************************************************************************************************************
 *                                                        MACROS                                                         *
 *************************************************************************************************************************/
/**
 * @brief ZMOS types lib select.
 *        1 : enable
 *        0 : disable
 */
#ifndef ZMOS_TYPES_USE_CLIB
#define ZMOS_TYPES_USE_CLIB         1
#endif
    
/**
 * @brief ZMOS use init section.
 *        1 : enable
 *        0 : disable
 */
#ifndef ZMOS_INIT_SECTION
#define ZMOS_INIT_SECTION           1
#endif
     
/**
 * @brief ZMOS task maximum support event is the number.
 *        the value is 8??16 or 32.
 *
 * @note No more than 32.
 */
#ifndef ZMOS_TASK_EVENT_NUM_MAX
#define ZMOS_TASK_EVENT_NUM_MAX     32
#endif
    
/**
 * @brief Number of ZMOS callback timers used.
 *        0 : disable.
 * 
 *
 * @note The maximum number of callback timers that can be 
 *       created is no more than ZMOS_TASK_EVENT_NUM_MAX.
 */
#ifndef ZMOS_USE_CBTIMERS_NUM
#define ZMOS_USE_CBTIMERS_NUM       8
#endif

/**
 * @brief ZMOS low power management use enable.
 *        1 : enable
 *        0 : disable
 *
 */
#ifndef ZMOS_USE_LOW_POWER
#define ZMOS_USE_LOW_POWER          0
#endif
    
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
#endif /* ZMOS_Config.h */
