#ifndef __STACK
#define __STACK
typedef void * Stack;
typedef enum {false,true} boolean;
extern Stack createStack();
extern boolean isStackFull(Stack S);
extern boolean isStackEmpty(Stack S);
extern void push(Stack S , int n);
extern int pop(Stack S);
extern int top(Stack S);
extern int size(Stack S);
extern void printStack(Stack S);
extern void delete(Stack S);
#endif