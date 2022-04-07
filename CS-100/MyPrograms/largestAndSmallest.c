//P. 226 #10
//Largest and Smallest

#include<stdio.h>

int main(){
	
	int num;
	int high = 0;
	int low = 0;
	
	printf("==================================================\n");
	printf("Find the highest and lowest of the numbers entered\n");
	printf("==================================================\n");
	
	system("PAUSE");
	
	while (num != -99){
		
		printf("Enter a number:");
		scanf("%d", &num);
		
		if (num > high)
			high = num;
			
		if (num < low && num != -99)
			low = num;
		
	}

	printf("The highest number is %d\n", high);
	printf("The lowest number is %d\n", low);
	
	return 0;
}
