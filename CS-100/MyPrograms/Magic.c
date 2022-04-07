// P. 168 #4
// Nic Jones
// 10/31/16

#include<stdio.h>

int main()
{
	//Declaration
	int day, month, year, magic;
	
	//Assignment
	printf("=================================\n");
	printf("       Magic Date Program\n");
	printf("=================================\n");
	
	printf("Enter the day in numeric form: ");
	scanf("%d", &day);
	
	printf("Enter the month in numeric form: ");
	scanf("%d", &month);
	
	printf("Enter the year in numeric form: ");
	scanf("%d", &year);
	
	//Processing
	magic = day * month;
	
	//Output
	if(magic == year)
		printf("The date is magic!\n");	
	
	else
		printf("The date is NOT magic!\n");
	
	system("PAUSE");
	return 0;
}
