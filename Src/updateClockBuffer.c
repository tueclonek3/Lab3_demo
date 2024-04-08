#include<7_LED.h>
#include<main.h>
#include<software_timer.h>
#include <clock.h>

const int LED = 4;
int clock_buffer [4];

void updateClockBuffer (int hour, int minute, int index) {
	int digit1=hour/10, digit2=hour%10, digit3=minute/10, digit4=minute%10;
	int clock_buffer [4] = {digit1, digit2, digit3, digit4};
	update7SEG(index, clock_buffer);
//	index = index %4;
//	switch (index) {
//	case 0:
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
//		display7SEG(clock_buffer[0]);
//		break;
//	case 1:
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
//		display7SEG(clock_buffer[1]);
//		break;
//	case 2:
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
//		display7SEG(clock_buffer[2]);
//		break ;
//	case 3:
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
//		display7SEG(clock_buffer[3]);
//		break ;
//	default :
//		break ;
//	}
}
