/**
*	@author : samarth
*  Stack ADT drvr function
**/
#include<stdio.h>
#include"../include/stack.h"
int main()
{
	Stack s = createStack();
	push(s,10);
	push(s,20);
	push(s,30);
	printf("Size of stack: %d %d %d\n",size(s),pop(s),top(s));
	printStack(s);
	delete(s);
	return 0;
}