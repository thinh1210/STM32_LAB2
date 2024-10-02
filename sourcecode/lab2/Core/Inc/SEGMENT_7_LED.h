/*
 * SEGMENT_7_LED.h
 *
 *  Created on: Sep 16, 2024
 *      Author: Asus
 */
#include <main.h>
#ifndef INC_SEGMENT_7_LED_H_
#define INC_SEGMENT_7_LED_H_


const int16_t array_seg_pin[]={
		SEG0_Pin,
		SEG1_Pin,
		SEG2_Pin,
		SEG3_Pin,
		SEG4_Pin,
		SEG5_Pin,
		SEG6_Pin,

};
int inter=6;
void test(){
	HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], SET);
	HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], SET);
	HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], SET);
	HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], SET);
	HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], SET);
	HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], SET);
	HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], SET);

	HAL_GPIO_WritePin(GPIOB, array_seg_pin[inter], RESET);
	inter--;
	if(inter<0){
		inter=6;
	}
}

void display7SEG ( int number){
	switch (number) {
		case 0:
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], SET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[0], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[1], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[2], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[3], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[4], SET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[5], RESET);
			HAL_GPIO_WritePin(GPIOB, array_seg_pin[6], RESET);
			break;

		default:
			break;
	}
}

#endif /* INC_SEGMENT_7_LED_H_ */
