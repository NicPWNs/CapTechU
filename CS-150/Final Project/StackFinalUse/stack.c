/*
Nic Jones
CS-150
Final Stack Project
-----------------------------
File to hold stack functions.

(!) I know we were supposed to use pointers and such in order to make the "stack.c" flexible so that any implementation could be put in place using the functions.
(!) However, when I started doing it that way, It got confusing for me and I had to resort to not return many values from the functions, putting the output within the functions.
(!) I understand that this made my "stackReverse.c" harder and repetitive. Luckily for me DevC++ creates a separation between different "stack.c" files due to the Projects idea.
*/

#include <stdio.h>
#include "stack.h"

void push () //Function to push characters onto stack.
{
    char x;
    if (a.top == (STACKSIZE - 1))
    {
        printf ("The stack is full\n");
        return;
    }
    
    else
    {
        printf ("Enter the character to be pushed\n");
        scanf (" %c", &x);
        a.top = a.top + 1;
        a.s1[a.top] = x;
    }
    return;
}

char pop () //Function to pop characters onto stack.
{
    char x;
    if (a.top == - 1)
    {
        printf ("The stack is empty\n");
        return (a.top);
    }
    
    else
    {
        x = a.s1[a.top];
        printf ("Popped element is = %c\n", a.s1[a.top]);
        a.top = a.top - 1;
    }
    return(x);
}

void clear () //Function to clear the stack.
{
char x;
while (a.top != -1)
{
x = a.s1[a.top];
a.top = a.top - 1;
}

printf("The stack is now empty\n");
}

void isFull() //Function to check if stack is full.
{
    if (a.top == (STACKSIZE - 1))
    {
        printf ("The stack is full. \n");
        printf("(!)Use the PRINT function to view stack. \n");
        return;
    }
    
    else
    {
    	printf("The stack is not full. \n");
    	printf("(!)Use the PRINT function to view stack. \n");
		return;
    }
}

void isEmpty() //Function to check if stack is empty.
{
    if (a.top == -1)
    {
        printf ("The stack is empty. \n");
        printf("(!)Use the PRINT function to view stack. \n");
        return;
    }
    
    else
    {
    	printf("The stack is not empty. \n");
    	printf("(!)Use the PRINT function to view stack. \n");
		return;
    }
}

void print () //Function to print stack.
{
    int i;
    if (a.top == -1)
    {
        printf ("The stack is empty. \n");
        return;
    }
    
    else
    {
        printf ("\n The stack is: \n");
        for (i = a.top; i >= 0; i--)
        {
            printf ("%c\n", a.s1[i]);
        }
    }
    printf ("\n");
}



