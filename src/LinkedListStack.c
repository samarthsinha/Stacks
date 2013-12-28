/**
*	@author : samarth
*  Stack ADT implementation using Linked List
**/
#include<stdio.h>
#include<stdlib.h>
#include"../include/stack.h"

struct Node{
	int data;
	struct Node * next;

};
struct LinkedListStack{
	struct Node *top;
};


#define GetStack(s) ((struct LinkedListStack *)(s))
/* function definition starts here */
Stack createStack(){
	struct LinkedListStack *s = (struct LinkedListStack *) malloc (sizeof(struct LinkedListStack));
	if(!s) return NULL;
	s->top = NULL;
	return (Stack)s;
}
void insert(struct Node **top,int n){
	struct Node *temp,*ptr;
	temp = *top;
	ptr = (struct Node *)malloc(sizeof(struct Node)); 
	ptr->data = n;
	ptr->next = temp;
	*top = ptr;
}
boolean isStackEmpty(Stack S){
	struct LinkedListStack *s = GetStack(S);
	if(s==NULL){
		return true;
	}
	return (s->top==NULL) ? true: false;
}
boolean isStackFull(Stack S){
	return false;
}
void push(Stack S , int n){
	struct LinkedListStack *s = GetStack(S);
	if(isStackFull(s)){
		 fprintf(stderr, "Stack Overflow! Cannot Push a thing right now\n");
		 return;
	}
	insert(&s->top,n);
}
int pop(Stack S){
	struct LinkedListStack *s = GetStack(S);
	if(isStackEmpty(s)){
		fprintf(stderr, "Stack underflow! Cannot Pop\n");
		return -1;
	}
	int n = s->top->data;
	struct Node *temp = s->top->next;
	free(s->top);
	s->top=temp;
	return n;
}
int top(Stack S){
	struct LinkedListStack *s = GetStack(S);
	if(isStackEmpty(s)){
		printf("Nothing on the top!\n");
		return -1;
	}
	return s->top->data;
}
int size(Stack S){
	struct LinkedListStack *s = GetStack(S);
	if(s!=NULL){
		struct Node *temp = s->top;
		int count=0;
		while(temp!=NULL){
			temp = temp->next;
			++count;
		}
		return count;
	}
	return 0; 
}
void printStack(Stack S){
	struct LinkedListStack *s = GetStack(S);
	if(isStackEmpty(s)){
		printf("Stack is empty nothing to print\n" );
		return;
	}
	int i;
	struct Node *temp = s->top;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}
void clearLinkedList(struct Node *n){
	if(!n){
		return;
	}
	else{
		clearLinkedList(n->next);
		free(n);
	}
}
void delete(Stack S)
{
	struct LinkedListStack *s = GetStack(S);
	if(s){ 
		if(s->top) { clearLinkedList(s->top);}
		free(s);
	}
}


/* ends here */