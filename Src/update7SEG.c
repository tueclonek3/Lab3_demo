#include<7_LED.h>
#include<main.h>
#include<software_timer.h>

const int MAX_LED = 4;
void update7SEG (int index_led, int *buffer) {
	index_led = index_led %4;
	switch (index_led) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		display7SEG(buffer[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		display7SEG(buffer[1]);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		display7SEG(buffer[2]);
		break ;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		display7SEG(buffer[3]);
		break ;
	default :
		break ;
	}
}
