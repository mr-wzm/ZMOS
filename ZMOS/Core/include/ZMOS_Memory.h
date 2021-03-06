/*****************************************************************
* Copyright (C) 2021 zm. All rights reserved.                    *
******************************************************************
* ZMOS_Memory.h
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
#ifndef __ZMOS_MEMORY_H__
#define __ZMOS_MEMORY_H__
 
#ifdef __cplusplus
extern "C"
{
#endif
/*************************************************************************************************************************
 *                                                        MACROS                                                         *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                      CONSTANTS                                                        *
 *************************************************************************************************************************/
 
/*************************************************************************************************************************
 *                                                       TYPEDEFS                                                        *
 *************************************************************************************************************************/
typedef uint32_t memsize_t;
/*************************************************************************************************************************
 *                                                   PUBLIC FUNCTIONS                                                    *
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
void *zmos_mem_malloc(memsize_t size);
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
void zmos_mem_free(void *ptr);

#ifdef __cplusplus
}
#endif
#endif /* ZMOS_Memory.h */
