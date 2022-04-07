//P. 225
//distanceTraveled.c

#include<stdio.h>

int main()
{
	int speed;
	int speedCounter;
	int hours;
	int hourCounter = 1;
	
	printf("What is the speed of the vehicle in mph? \n");
	scanf("%d", &speed);
	printf("How many hours has it traveled? \n");
	scanf("%d", &hours);
	printf(" Hour          Distance Traveled\n");
	printf("--------------------------------\n");
	
	speedCounter = speed;
	
	while(hourCounter <= hours){
		printf("  %d                  %d\n", hourCounter, speedCounter);
		hourCounter = hourCounter + 1;
		speedCounter = speedCounter + speed;
	}
	
	return 0;
}
