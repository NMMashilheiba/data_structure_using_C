#include<stdio.h>
#include <stdlib.h>

typedef struct{
	int data;
	struct node *link;
} node;

int main(){
	node *head = NULL;
	head = (node *)malloc(sizeof(node));

	printf("%d \n", head -> data);

	head -> data = 50;
	head -> link = NULL;
	
	printf("%d \n", head -> data);
	return 0;
}