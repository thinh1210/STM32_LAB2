/*
 * EX3.h
 *
 *  Created on: Sep 16, 2024
 *      Author: Asus
 */

#ifndef INC_EX3_4_5_6_7_8_H_
#define INC_EX3_4_5_6_7_8_H_
#include<main.h>
#include<SEGMENT_7_LED.h>

#define EN0 0
#define EN1 1
#define EN2 2
#define EN3 3


const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1,2,3,4};
void update7SEG(int index){
	switch (index) {
		case EN0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[index]);
			break;
		case EN1:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[index]);
			break;
		case EN2:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[index]);
			break;
		case EN3:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG(led_buffer[index]);
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

int hour=0, 	minute=0,  		second=0;

void updateClockBuffer(){
	  led_buffer[0]=hour/10;
	  led_buffer[1]=hour%10;
	  led_buffer[2]=minute/10;
	  led_buffer[3]=minute%10;
}

void updateTime(){
	  second++;
	  if(second>=60){
		  second=0;
		  minute++;
	  }
	  if(minute>=60){
		  minute=0;
		  hour++;
	  }
	  if(hour>=12){
		  hour=0;
	  }
	  updateClockBuffer();
}


#endif /* INC_EX3_4_5_6_7_8_H_ */
