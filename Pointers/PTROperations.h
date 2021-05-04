/****************************************************************************
* Title                 :   Pointer Operations   
* Filename              :   PTROperations.h
* Author                :   Jose Jorge Figueroa Figueroa
* Origin Date           :   12/04/2021
* Version               :   1.0.0
* Compiler              :   GCC
* Target                :   WINDOWS 64 bits x64
* Notes                 :   None
*
* THIS SOFTWARE IS PROVIDED BY Jose Figueroa
*****************************************************************************/
/*************** INTERFACE CHANGE LIST **************************************
*
*    Date    Version   Author         Description 
*  12/04/21   1.0.0   Jose Figueroa   PTROperations.h
*
*****************************************************************************/
/** @file TODO: PTROperations.h
 *  @brief This module contains the operations for the Pointers topic TODO: 
 *          Create a .c file creating declaration of functions given in this
 *          file. - For more information see the README file in the Pointers
 *          folder.-
 * 
 */
#ifndef _PTROP_H_
#define _PTROP_H_

/******************************************************************************
* Includes
*******************************************************************************/
#include <stdint.h>
#include <stdio.h>

/******************************************************************************
* Function Prototypes
*******************************************************************************/
/*!
 * @brief Clear the n bit of a given byte (Turn off the bit, make it 0) and
 *          return the the exadecimal value.
 *
 * @param A   uint8_t const BYTE - Given byte.
 * @param bit const int BIT      - Position of the bit to set.
 *
 * @return Return the result of clearing the n bit.
 */
int8_t bitclear(const int8_t * BYTE, const int8_t BIT);

/*!
 * @brief Set the n bit of a given byte. (Turn on the bit, make it 1).
 *
 * @param A   uint8_t byte  - Given byte pointer to fill.
 * @param bit const int bit - Position of the bit to set.
 *
 * @return Nothing to return.
 */
void bitset(int8_t * BYTE, const int8_t BIT);

/*!
 * @brief Multiply by 3 the value of what the third pointer is pointintg at.
 *
 * @param ptr  const int8_t triple pointer 
 *
 * @return Nothing to retun.
 */
void TriplePointer(uint8_t ***ptr);

/*!
 * @brief Swap the value form pointer A and B.
 *
 * @param STR   const int8_t pointer A
 * 
 * @param CH    const int8_t pointer B
 *
 * @return Nothing to return
 */
void swapnum(uint32_t * ptrA, uint32_t * ptrB);

#endif
