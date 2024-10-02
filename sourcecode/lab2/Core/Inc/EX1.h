/*
 * EX1.h
 *
 *  Created on: Sep 19, 2024
 *      Author: Asus
 */

#ifndef INC_EX1_H_
#define INC_EX1_H_
#include<main.h>
#include<SEGMENT_7_LED.h>
#define light1 1
#define light2 2

int8_t state=light1;
void change_state(){
	switch (state) {
		case light1:
			state=light2;
			break;
		case light2:
			state=light1;
			break;
		default:
			break;
	}
}
void task_in_state(){
	switch (state) {
		case light1:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET); // fix set=high , reset=low, if low=turn on , high= turn off
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);// set=turn off, reset=turn on;
			display7SEG(1);
			break;
		case light2:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG(2);
		default:
			break;
	}
}
#endif /* INC_EX1_H_ */
