/****************************************************************************
* Title                 :   Pointers Tests   
* Filename              :   PTRtests.h
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
*  12/04/21   1.0.0   Jose Figueroa   BWTests.
*
*****************************************************************************/
/** @file TODO: PTRTESTS.h
 *  @brief This module contains the tests for the Bitwise topic.
 * 
 *  The runtests function runs all the test functions at once testing several 
 *  functions form the BMOperations files TODO: Follow the README instructions.
 */
#ifndef _PTRTESTS_H_
#define _PTRTESTS_H_
/******************************************************************************
* Includes
*******************************************************************************/
#include <stdint.h>
#include <stdio.h>
#include "PTROperations.h"

/******************************************************************************
* Function Prototypes
*******************************************************************************/
/********************************************** TODO: CHANGE DESCRIPTIOSN FROM BW TO PTRS ***/
/*!
 * @brief Run all the tests and evaluate if they PASS 
 *        or FAIL by interfacing in the cmd.
 *
 */
void runtests(void);

/*!
 * @brief Test the Bit on and off form the BWOperations
 *          bit_on and bit_off
 *
 * @return Return 1 if PASS or 0 if FAIL.
 */
uint8_t test01(void);

/*!
 * @brief Test the Multiply by 2 from the BWOperations.
 *          Multiplyby2
 *
 * @return Return 1 if PASS or 0 if FAIL.
 */

#endif /*File_H_*/

/*** End of File **************************************************************/
