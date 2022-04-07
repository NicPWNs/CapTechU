//P. 224 #4
//numSeries.c
#include<stdio.h>

int main() {
float num;
float sum = 0;

while(num >= 0){
	printf("Enter a number: ");
	scanf("%f", &num);
	sum = sum + num;
}

sum = sum - num;
printf("The sum of numbers is: %.f", sum);

return 0;
}
