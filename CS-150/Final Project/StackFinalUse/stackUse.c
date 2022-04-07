/*
Nic Jones
CS-150
Final Stack Project
------------------------------------------------
Main file to demonstrate use of stack functions.
*/

#include <stdio.h>
#include "stack.h"

void main ()
{
    int user;
    int function = 1;
    a.top = -1;
	system("title StackUse");
	printf ("===========================================\n");
    printf ("Demonstration of stack functions: \n");
    printf ("===========================================\n");
    while (function==1)
    {
        printf ("> Enter 1 to PUSH a character to the stack.\n");
        printf ("> Enter 2 to POP a character to the stack.\n");
       	printf ("> Enter 3 to CLEAR the stack.\n");
       	printf ("> Enter 4 to check if stack is FULL.\n");
       	printf ("> Enter 5 to check if stack is EMPTY.\n");
        printf ("> Enter 6 to PRINT the stack.\n");
        printf ("> Enter 7 to EXIT the program.\n");
        printf ("===========================================\n");
 		printf ("Enter your choice: ");
        scanf  ("%d", &user);
        printf ("===========================================\n");
        switch (user)
        {
        case 1:
            push();
            break;
            
        case 2:
            pop();
            break;
            
        case 3:
        	clear();
	    	break;
	    	
	    case 4:
	    	isFull();
	    	break;
	    
	    case 5:
	    	isEmpty();
	    	break;
	    	
        case 6:
        	print();
            break;
            
        case 7:
			return;
        }
printf("\n");
    }
}
