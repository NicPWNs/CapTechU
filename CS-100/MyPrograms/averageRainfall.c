//averageRainfall.c
//P. 225 # 7

#include<stdio.h>

int main(){
	
	int years;
	float accum = 0;
	float m_rain;
	int year = 0;
	int month = 0;
	int months = 12;
	float avg;
	
	printf("Enter the number of years: ");
	scanf("%d", &years);
	
	while(year < years)
	{
		while(month < months)
		{
			printf("Enter the amount of rain for year %d and month %d: ", year + 1, month + 1);
			scanf("%f", &m_rain);
			accum = accum + m_rain;
			month = month + 1;
		}
		
		year = year + 1;
	}
	
	avg = accum / (years * months);
	
	printf("The average rainfall is %.1f\n", avg);
	
	return 0;
}
