/*
Nic Jones
CS-150
Final Stack Project
--------------------
Header file for stack program.
*/

#include <stdio.h>
#define STACKSIZE 100

struct stack
{
	char s1[STACKSIZE];
	int top;
};

typedef struct stack Stack;
Stack a;

void push(void);
char pop(void);
void clear(void);
void isFull(void);
void isEmpty(void);
void print(void);

