/**
*	@author : samarth
*  Stack ADT drvr function
**/
#include<stdio.h>
#include"../include/stack.h"
int main()
{
	Stack s = createStack();
	int i;
	for(i=0;i<20;i++){
		push(s,i);
	}
	printf("Size of stack: %d %d %d\n",size(s),pop(s),top(s));
	printStack(s);
	delete(s);
	return 0;
}