//P.168 #5
//Color Mixer

#include<stdio.h>
#include<string.h>

int main()
{
	//Declaration
	char color1[10];
	char color2[10];
	char redVar[] = "red";
	char blueVar[] = "blue";
	char yellowVar[] = "yellow";

	//Assingment
	printf("Enter a primary color (lowercase): ");
	scanf("%s", color1);
	printf("Enter a primary color (lowercase): ");
	scanf("%s", color2);
	
	//ProcessingOutput
	if ((strcmp(color1, redVar) != 0 || strcmp(color1, blueVar) != 0 || strcmp(color1, yellowVar) != 0) && (strcmp(color2, redVar) != 0 || strcmp(color2, blueVar) != 0 || strcmp(color2, yellowVar) != 0)){
		printf("Test: ERROR: No such primary color!\n");
	}		
			
	else
		printf("Both entries are primary colors!\n");
		if ((strcmp(color1, redVar) == 0 && strcmp(color2, blueVar) == 0) || (strcmp(color1, blueVar) == 0 && strcmp(color2, redVar) == 0))
			printf("The mixed color is purple!\n");
		if ((strcmp(color1, yellowVar) == 0 && strcmp(color2, blueVar) == 0) || (strcmp(color1, blueVar) == 0 && strcmp(color2, yellowVar) == 0))
			printf("The mixed color is green!\n");
		if ((strcmp(color1, redVar) == 0 && strcmp(color2, yellowVar) == 0) || (strcmp(color1, yellowVar) == 0 && strcmp(color2, redVar) == 0))
			printf("The mixed color is orange!\n");
		
		
	
	system("PAUSE");
	return 0;
}
