/**
*	@author : samarth
*  Stack ADT implementation using Simple Array
**/
#include<stdio.h>
#include<stdlib.h>
#include"../include/stack.h"

#define MAX_CAPACITY 10
struct ArrayStack{
	int top;
	int capacity;
	int *array;
};
#define GetStack(s) ((struct ArrayStack *)(s))
/* function definition starts here */
Stack createStack(){
	struct ArrayStack *s = (struct ArrayStack *) malloc (sizeof(struct ArrayStack));
	if(!s) return NULL;
	s->top = -1;
	s->capacity = MAX_CAPACITY;
	s->array = (int *)malloc(s->capacity * sizeof(int));
	if(!s->array) return NULL;
	return (Stack)s;
}
boolean isStackEmpty(Stack S){
	struct ArrayStack *s = GetStack(S);
	if(s==NULL){
		return true;
	}
	return (s->top==-1) ? true: false;
}
boolean isStackFull(Stack S){
	struct ArrayStack *s = GetStack(S);
	if(s==NULL) return false;
	return (s->top == s->capacity-1) ? true:false;
}
void push(Stack S , int n){
	struct ArrayStack *s = GetStack(S);
	if(isStackFull(s)){
		fprintf(stderr, "Stack Overflow! Cannot Push a thing right now\n");
		return;
	}
	s->top +=1; 
	s->array[s->top] = n;
}
int pop(Stack S){
	struct ArrayStack *s = GetStack(S);
	if(isStackEmpty(s)){
		fprintf(stderr, "Stack underflow! Cannot Pop\n");
		return -1;
	}
	return s->array[s->top--];
}
int top(Stack S){
	struct ArrayStack *s = GetStack(S);
	if(isStackEmpty(s)){
		printf("Nothing on the top!\n");
		return -1;
	}
	return s->array[s->top];

}
int size(Stack S){
	struct ArrayStack *s = GetStack(S);
	if(s!=NULL)
		return s->top + 1;
	return 0; 
}
void printStack(Stack S){
	struct ArrayStack *s = GetStack(S);
	if(isStackEmpty(s)){
		printf("Stack is empty nothing to print\n" );
		return;
	}
	int i;
	for(i=s->top;i>=0;i--){
		printf("%d\n",s->array[i]);
	}
}
void delete(Stack S)
{
	struct ArrayStack *s = GetStack(S);
	if(s){ 
		if(s->array) free(s->array);
		free(s);
	}
}
/* ends here */