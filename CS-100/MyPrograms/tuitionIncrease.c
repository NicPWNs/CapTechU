//P. 225 #5
//tuitionIncrease.c
#include<stdio.h>

int main()
{
	int year = 0;
	float tuition = 6000;
	float rate = .02;
	
	printf("=====================================================\n");
	printf("Tuition increasing by 2 percent for the next 5 years:\n");
	printf("=====================================================\n");
	while(year <= 5){
		printf("The tuition at %d years is $%.2f\n", year, tuition);
		year = year + 1;
		tuition = (tuition * rate) + tuition; 
	}
	return 0;
}
