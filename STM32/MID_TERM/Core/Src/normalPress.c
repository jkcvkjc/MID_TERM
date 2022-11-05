/*
 * normalPress.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ACER
 */

#include "normalPress.h"

//seconds: count the time that all buttons is not pressed or long-pressed
int seconds=0;


void fsm_simple_buttons_run(){
	switch(status_press){
	case INIT:
		display7Segment(counter);
		//at least one button is pressed or long-pressed
		if((button_flag[0]==1)||(button_flag[1]==1)||(button_flag[2]==1)||(button_flag_press_3s[1]==1)||(button_flag_press_3s[2]==1)){
			seconds=0;
			status_press=NORMAL_PRESS;
			setTimer1(1000);
		}
		//no buttons are pressed
		if((button_flag[0]==0)&&(button_flag[1]==0)&&(button_flag[2]==0)&&(button_flag_press_3s[1]==0)&&(button_flag_press_3s[2]==0)){
			status_press=NO_PRESS;
			setTimer1(1000);
		}
		break;

	case NORMAL_PRESS:
		display7Segment(counter);
		//press RESET
		if(button_flag[0]==1){
			status_press=RESET_PRESS;
			setTimer1(1000);
		}
		//long-press INC 3 seconds
		if(button_flag_press_3s[1]==1){
			status_press=INC_PRESS_MORE_3S;
			setTimer1(10);
		}
		//long-press DEC 3 seconds
		if(button_flag_press_3s[2]==1){
			status_press=DEC_PRESS_MORE_3S;
			setTimer1(10);
		}
		//press INC
		if(button_flag[1]==1){
			status_press=INC_PRESS;
			setTimer1(1000);
		}
		//press DEC
		if(button_flag[2]==1){
			status_press=DEC_PRESS;
			setTimer1(1000);
		}
		//no button is pressed
		if(timer1_flag==1){
			setTimer1(1000);
			status_press=INIT;
		}
		break;

	case RESET_PRESS:
		button_flag[0]=0;
		counter=0;
		display7Segment(counter);
		if(button_flag[0]==0){
			status_press=NORMAL_PRESS;
			setTimer1(1000);
		}
		break;

	case INC_PRESS:
		button_flag[1]=0;
		counter++;
		if(counter>=10) counter=0;
		display7Segment(counter);
		if(button_flag[1]==0){
			status_press=NORMAL_PRESS;
			setTimer1(1000);
		}
		break;

	case DEC_PRESS:
		button_flag[2]=0;
		counter--;
		if(counter<0) counter=9;
		display7Segment(counter);
		if(button_flag[2]==0){
			status_press=NORMAL_PRESS;
			setTimer1(1000);
		}
		break;

	case INC_PRESS_MORE_3S:
		if(timer1_flag==1){
			setTimer1(1000);
			counter++;
			if(counter>=10) counter=0;
			display7Segment(counter);
		}
		if(button_flag_press_3s[1]==0){
			status_press=NORMAL_PRESS;
			setTimer1(1000);
		}
		break;

	case DEC_PRESS_MORE_3S:
		if(timer1_flag==1){
			setTimer1(1000);
			counter--;
			if(counter<0) counter=9;
			display7Segment(counter);
		}
		if(button_flag_press_3s[2]==0){
			status_press=NORMAL_PRESS;
			setTimer1(1000);
		}
		break;

	case NO_PRESS:
		//check if button is pressed
		if((button_flag[0]==1)||(button_flag[1]==1)||(button_flag[2]==1)||(button_flag_press_3s[1]==1)||(button_flag_press_3s[2]==1)){
			seconds=0;
			status_press=NORMAL_PRESS;
			setTimer1(1000);
		}
		//count down if button is not pressed after 10seconds
		if(timer1_flag==1){
			seconds++;
			if(seconds>=9){
				counter--;
				if(counter<=0) counter=0;
				display7Segment(counter);
			}
			setTimer1(1000);
		}
	default:
		break;
	}
}
