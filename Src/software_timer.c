#include<software_timer.h>

int timer1_counter[10];
int timer1_flag[10];

void setTimer(int index, int duration){
	timer1_counter[index] = duration;
	timer1_flag[index] = 0;
}

int isTimeExpired(int index){
	if (timer1_flag[index]==1){
		timer1_flag[index]=0;
		return 1;
	}
	return 0;
}

void timerRun(){
	for (int i = 0; i<10; i++){
		if(timer1_counter[i] > 0){
			timer1_counter[i]--;
			if(timer1_counter[i] == 0){
				timer1_flag[i] = 1;
			}
		}
	}
}

