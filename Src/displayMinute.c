#include<7_LED.h>
#include<main.h>
#include<software_timer.h>
void displayMinute (int minute) {
	int digit1 = minute / 10;
	int digit2 = minute % 10;
	switch (digit1) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		display7SEG(0);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		display7SEG(1);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		display7SEG(2);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		display7SEG(3);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		display7SEG(4);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		display7SEG(5);
		break;
	default :
		break ;
	}
	switch (digit2) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		display7SEG(0);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		display7SEG(1);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		display7SEG(2);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		display7SEG(3);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		display7SEG(4);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		display7SEG(5);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		display7SEG(6);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		display7SEG(7);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		display7SEG(8);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		display7SEG(9);
		break;
	default :
		break ;
	}
}
