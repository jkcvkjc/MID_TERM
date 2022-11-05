/*
 * display7Segment.c
 *
 *  Created on: Nov 4, 2022
 *      Author: ACER
 */

#include "display7Segment.h"

void display7Segment(int count){
	switch(count){
	//display 0
	case 0:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 0);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 1);
		break;
	//display 1
	case 1:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 1);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 1);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 1);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 1);
		break;
	//display 2
	case 2:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 1);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 0);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 1);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
		break;
	//display 3
	case 3:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 1);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
		break;
	//display 4
	case 4:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 1);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 1);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
		break;
	//display 5
	case 5:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 1);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
		break;
	//display 6
	case 6:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 1);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 0);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
		break;
	//display 7
	case 7:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 1);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 1);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 1);
		break;
	//display 8
	case 8:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 0);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
		break;
	//display 9
	case 9:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, 0);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, 0);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, 0);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, 0);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, 1);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, 0);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, 0);
		break;
	default:
		break;
	}
}
