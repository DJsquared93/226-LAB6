/*******************************************************
* Name:							Atilla Ozgur Cakmak
* Course:           EGR 226 - Microcontroller Programming and Applications
* Project:          Keypad Intro
* File:             main.c
* Description:      A for loop assigns cols as GND one by one and manually 
*										checks if any row is shorted. Read is done over row to 
*										determine the number pressed
* Pin Configs:      PC0-3=> Rows
*                   PC4-6=> Cols
*********************************************************/

#include "keypad.h" //Test 2nd test

extern void Keypad_Init (void);                                // Initialize Functions
extern void SysTick_Init(void);                                // Initialize Functions
extern void SysTick_Delay(uint16_t delay);                     // Initialize Functions
extern void Print_Keys (uint16_t *numptr);                     // Print Keypress
extern uint8_t Read_Keypad(uint16_t *numptr);

int main(void)
{
    SysTick_Init();
    Keypad_Init( );                                     // Call initialization functions for functionality
    uint16_t num, pressed;                              // num is modified over a pointer
    num=0;
    uint16_t *numptr=&num;                              // numptr is defined
	
		
		printf("Enter a five digit numerical PIN code NOW!\n");
	
		while(1)
     {
         pressed = Read_Keypad(numptr);                 // Call Function to read Keypad
				 if(pressed)
         Print_Keys(numptr);
         SysTick_Delay(10);
     }
}
