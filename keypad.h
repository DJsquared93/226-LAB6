#ifndef __KEYPAD_H_
#define __KEYPAD_H_

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "stm32f4xx.h"

/* Macro Function */
#define BIT(x) 			(uint32_t) (1<<x)
#define SHIFT(x,y)	(uint32_t) (y<<x)

/* Hardware task specific definitions 
* Pin configs: PC0-3-> Rows
							 PC4-6-> Cols
* Description: Touching Rows and Cols
identified and printed
*************************************/

#define PC BIT(2)																	// PortC
#define R0 (uint32_t) 0														// Row bits 0
#define R1 (uint32_t) 1														// Row bits 1
#define R2 (uint32_t) 2														// Row bits 2
#define R3 (uint32_t) 3														// Row bits 3
#define C0 (uint32_t) 4														// Col bits 0
#define C1 (uint32_t) 5														// Col bits 1
#define C2 (uint32_t) 6														// Col bits 2

/* Problem specific parameters */
//						N/A

/* Hardware task specific functions
* Pin configs: PC0-3-> Rows
							 PC4-6-> Cols
* Description: Touching Rows and Cols
identified and printed
*************************************/
void Keypad_Init (void);                                // Initialize Functions
void SysTick_Init(void);                                // Initialize Functions
void SysTick_Delay(uint16_t delay);                     // Initialize Functions
void Print_Keys (uint16_t *numptr);                     // Print Keypress
uint8_t Read_Keypad(uint16_t *numptr);                  // Keypad scan subroutine
char return_Keys(uint16_t *numptr );
#endif /* KEYPAD_H_ */
