#include<7_LED.h>
#include<main.h>
#include<software_timer.h>
#include <clock.h>

void led_Time(int index, int hour, int minute, int second){
		second +=5;
		if ( second >= 60) {
			second = 0;
			minute ++;
		}
		if( minute >= 60) {
			minute = 0;
			hour ++;
		}
		if( hour > 24) {
			hour = 0;
		}
		updateClockBuffer (hour, minute, index) ;
}


