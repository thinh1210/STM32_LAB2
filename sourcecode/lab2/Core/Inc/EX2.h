/*
 * EX2.h
 *
 *  Created on: Sep 16, 2024
 *      Author: Asus
 */

#ifndef INC_EX2_H_
#define INC_EX2_H_

#include<SEGMENT_7_LED.h>
#include<main.h>
#define EN0 0
#define EN1 1
#define EN2 2
#define EN3 3

void task_in_state(int state, int number){
	switch (state) {
		case EN0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(number);
			break;
		case EN1:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(number);
			break;
		case EN2:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(number);
			break;
		case EN3:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG(number);
			break;
		default:
			break;
	}
}
void change_state(int *state){
	switch (*state) {
		case EN0:
			*state=EN1;

			break;
		case EN1:
			*state=EN2;
			break;
		case EN2:
			*state= EN3;
			break;
		case EN3:
			*state=EN0;
			break;
		default:
			break;
	}
}


#endif /* INC_EX2_H_ */
