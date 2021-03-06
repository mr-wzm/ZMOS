/*****************************************************************
* Copyright (C) 2021 zm. All rights reserved.                    *
******************************************************************
* ZMOS_Memory.c
*
* DESCRIPTION:
*     ZMOS memory management.
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
 
/*************************************************************************************************************************
 *                                                       INCLUDES                                                        *
 *************************************************************************************************************************/
#include <stdlib.h>
#include "ZMOS_Types.h"
#include "ZMOS_Memory.h"
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
* FUNCTION: zmos_mem_malloc
*
* DESCRIPTION: 
*     ZMOS dynamic memory allocation.
* INPUTS:
*     size : The number of bytes to allocate from the HEAP.
* RETURNS:
*     The first address of the allocated memory space.
*     NULL : faild, It may be out of memory.
* NOTE:
*     It's weak functions, you can redefine it.
*****************************************************************/
__weak void *zmos_mem_malloc(memsize_t size)
{
    return malloc(size);
}
/*****************************************************************
* FUNCTION: zmos_mem_free
*
* DESCRIPTION: 
*       ZMOS dynamic memory de-allocation.
* INPUTS:
*     ptr : The first address assigned by zmos_mem_malloc().
* RETURNS:
*     null
* NOTE:
*     It's weak functions, you can redefine it.
*****************************************************************/
__weak void zmos_mem_free(void *ptr)
{
    free(ptr);
}
/****************************************************** END OF FILE ******************************************************/
