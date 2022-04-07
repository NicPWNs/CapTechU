/*
Nic Jones
CS-150
Final Stack Project
------------------------------------------------
Main file to reverse the stack.
*/

#include <stdio.h>
#include "stack.h"

void main ()
{
    int user;
    int end = 0;
    a.top = -1;
	system ("title StackReverse");
	printf ("===========================================\n");
    printf ("Demonstration of stack reversal: \n");
    printf ("==========================================================\n");
    while (end != 1)
    {
        printf ("> Enter 1 to PUSH an individual character to the stack.\n");
        printf ("> Enter 2 to PRINT the current contents of the stack.\n");
        printf ("> Enter 3 to REVERSE the characters off of the stack sequentially using the POP function. \n");
        printf ("> Enter 4 to EXIT the program \n");
        printf ("==========================================================\n");
 		printf ("Enter your choice: ");
        scanf  ("%d", &user);
        printf ("===========================================\n");
        switch (user)
        {
        case 1:
            push();
            break;
            
        case 2:
        	print();
    		break;
            
        case 3:
        	while (a.top != -1)
        	{
        		pop();
			}
			printf("(!) Stack has been reversed and is now empty.");
			break;
		
		case 4:
			return;
			
        }
        
printf("\n");
    }
}
