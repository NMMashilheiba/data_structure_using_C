#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int data[10];
	int top;
} Stack;

void init(Stack *stack){
	stack -> top = -1;
}

int isEmpty(Stack *stack){
	return stack -> top == -1;
}

int isFull(Stack *stack){
	return stack -> top == 10 - 1;
}

int push(Stack *stack, int data){
	if(isFull(stack)){
		printf("Stack overflow!\n");
		return;
	}

	stack -> data[++stack -> top] = data;
}

int pop(Stack *stack){
	if(isEmpty(stack)){
		printf("Stack underflow!\n");
		exit(1);
	}

	return stack -> data[stack -> top--];
}

int peek(Stack *stack){
	if(isEmpty(stack)){
		printf("Stack is empty!\n");
		exit(1);
	}

	return stack -> data[stack -> top];
}