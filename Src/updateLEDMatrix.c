#include<7_LED.h>
#include<main.h>
#include<software_timer.h>
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x18,0x24,0x42,0x42,0x7E,0x42,0x42,0x42};

void updateLEDMatrix(int index){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15, GPIO_PIN_SET);
	switch ( index ) {
	case 0:
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, (matrix_buffer[0] & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, (matrix_buffer[1] & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, (matrix_buffer[2] & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, (matrix_buffer[3] & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, (matrix_buffer[4] & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, (matrix_buffer[5] & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, (matrix_buffer[6] & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, (matrix_buffer[7] & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
		break ;
	case 1:
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8,  (matrix_buffer[0] & 0x01<< 1) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9,  (matrix_buffer[1] & 0x01<< 1) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, (matrix_buffer[2] & 0x01<< 1) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, (matrix_buffer[3] & 0x01<< 1) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, (matrix_buffer[4] & 0x01<< 1) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, (matrix_buffer[5] & 0x01<< 1) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, (matrix_buffer[6] & 0x01<< 1) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, (matrix_buffer[7] & 0x01<< 1) ? GPIO_PIN_RESET : GPIO_PIN_SET);
		break ;
	case 2:
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, (matrix_buffer[0] & 0x01<< 2) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, (matrix_buffer[1] & 0x01<< 2) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, (matrix_buffer[2] & 0x01<< 2) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, (matrix_buffer[3] & 0x01<< 2) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, (matrix_buffer[4] & 0x01<< 2) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, (matrix_buffer[5] & 0x01<< 2) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, (matrix_buffer[6] & 0x01<< 2) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, (matrix_buffer[7] & 0x01<< 2) ? GPIO_PIN_RESET : GPIO_PIN_SET);
		break ;
	case 3:
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, (matrix_buffer[0] & 0x01<< 3) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, (matrix_buffer[1] & 0x01<< 3) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, (matrix_buffer[2] & 0x01<< 3) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, (matrix_buffer[3] & 0x01<< 3) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, (matrix_buffer[4] & 0x01<< 3) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, (matrix_buffer[5] & 0x01<< 3) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, (matrix_buffer[6] & 0x01<< 3) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, (matrix_buffer[7] & 0x01<< 3) ? GPIO_PIN_RESET : GPIO_PIN_SET);
		break ;
	case 4:
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, (matrix_buffer[0] & 0x01<< 4) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, (matrix_buffer[1] & 0x01<< 4) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, (matrix_buffer[2] & 0x01<< 4) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, (matrix_buffer[3] & 0x01<< 4) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, (matrix_buffer[4] & 0x01<< 4) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, (matrix_buffer[5] & 0x01<< 4) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, (matrix_buffer[6] & 0x01<< 4) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, (matrix_buffer[7] & 0x01<< 4) ? GPIO_PIN_RESET : GPIO_PIN_SET);
		break ;
	case 5:
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, (matrix_buffer[0] & 0x01<< 5) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, (matrix_buffer[1] & 0x01<< 5) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, (matrix_buffer[2] & 0x01<< 5) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, (matrix_buffer[3] & 0x01<< 5) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, (matrix_buffer[4] & 0x01<< 5) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, (matrix_buffer[5] & 0x01<< 5) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, (matrix_buffer[6] & 0x01<< 5) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, (matrix_buffer[7] & 0x01<< 5) ? GPIO_PIN_RESET : GPIO_PIN_SET);
		break ;
	case 6:
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, (matrix_buffer[0] & 0x01<< 6) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, (matrix_buffer[1] & 0x01<< 6) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, (matrix_buffer[2] & 0x01<< 6) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, (matrix_buffer[3] & 0x01<< 6) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, (matrix_buffer[4] & 0x01<< 6) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, (matrix_buffer[5] & 0x01<< 6) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, (matrix_buffer[6] & 0x01<< 6) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, (matrix_buffer[7] & 0x01<< 6) ? GPIO_PIN_RESET : GPIO_PIN_SET);
		break ;
	case 7:
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, (matrix_buffer[0] & 0x01<< 7) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, (matrix_buffer[1] & 0x01<< 7) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, (matrix_buffer[2] & 0x01<< 7) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, (matrix_buffer[3] & 0x01<< 7) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, (matrix_buffer[4] & 0x01<< 7) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, (matrix_buffer[5] & 0x01<< 7) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, (matrix_buffer[6] & 0x01<< 7) ? GPIO_PIN_RESET : GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, (matrix_buffer[7] & 0x01<< 7) ? GPIO_PIN_RESET : GPIO_PIN_SET);
		break ;
	default :
		break ;
	}
}
