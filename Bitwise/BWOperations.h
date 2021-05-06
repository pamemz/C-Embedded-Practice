/****************************************************************************
* Title                 :   Bitwise Operations   
* Filename              :   BWOperations.h
* Author                :   Jose Jorge Figueroa Figueroa
* Origin Date           :   08/04/2021
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
*  08/04/21   1.0.0   Jose Figueroa   BWOperations.
*
*****************************************************************************/
/** @file TODO: BWOperations.h
 *  @brief This module contains the operations for the Bitwise topic TODO: 
 *          Create a .c file creating declaration of functions given in this
 *          file. - For more information see the README file in the Bitwise
 *          folder.-
 * 
 */
#ifndef _BWOP_H_
#define _BWOP_H_

/******************************************************************************
* Includes
*******************************************************************************/
#include <stdint.h>
#include <stdio.h>

/******************************************************************************
* Function Prototypes
*******************************************************************************/
/*!
 * @brief Given a number  A with a size of a byte, multiply its value by 2.
 *
 * @param A  uint8_t const byte. - Byte to multiply (MAX value 127 in decimal)
 *
 * @return Return the result value.
 */
uint8_t Multiplyby2(const uint8_t A);

/*!
 * @brief Set the n bit of a given byte. (Turn on the bit, make it 1).
 *
 * @param A  uint8_t const byte - Given byte.
 * @param bit const int bit     - Position of the bit to set.
 *
 * @return Return the result of setting the n bit.
 */
uint8_t bit_on(const uint8_t A, const uint8_t bit);

/*!
 * @brief Clear the n bit of a given byte. (Turn off the bit, make it 0).
 *
 * @param A  uint8_t const byte - Given byte.
 * @param bit const int bit     - Position of the bit to set.
 *
 * @return Return the result of clearing the n bit.
 */
uint8_t bit_off(const uint8_t A, const uint8_t bit);

/*!
 * @brief Toogle the n bit of a given byte.
 *
 * @param A  uint8_t const byte - Given byte.
 * @param bit const int bit     - Position of the bit to set.
 *
 * @return Return the result of toggling the n bit.
 */
uint8_t bit_toggle(const uint8_t A,const uint8_t bit);

/*!
 * @brief Givent the Byte A and Byte B compare if the n bit fo both bytes 
 *          is the same.
 *
 * @param A  uint8_t const byte one. 
 * @param B  uint8_t const byte two.
 * @param bit const int bit 
 *
 * @return Retun 1 if the n bit is the same or 0 if it is different.
 */
uint8_t CompareAandB(const uint8_t A, const uint8_t B, const uint8_t bit);

/*!
 * @brief Givent a Byte A reverse its bit positions.
 *
 * @param A  uint8_t const byte. 
 *
 * @return Return the reverse byte. 
 */
uint8_t reversebit(const uint8_t A);



#endif
