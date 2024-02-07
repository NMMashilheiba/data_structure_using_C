#include<stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *link;
} node;

node* addAtEnd(node *ptr, int data);

int main(){
	node *head = NULL;
	head = (node *)malloc(sizeof(node));

	// printf("%d \n", head -> data);

	head -> data = 50;
	head -> link = NULL;
	
	node *ptr = head;
	ptr = addAtEnd(ptr, 101);
	ptr = addAtEnd(ptr, 101);
	ptr = addAtEnd(ptr, 101);
	ptr = addAtEnd(ptr, 101);

	ptr = head;
	while(ptr != NULL){
		printf("%d ", ptr -> data);
		ptr = ptr->	link;
	}

	// printf("%d \n", head -> data);
	return 0;
}

// O(1) by returning the last node everytime addAtEnd is calle
node* addAtEnd(node *ptr, int data){
	node *temp = (node*)malloc(sizeof(node));
	temp -> data = data;
	temp -> link = NULL;

	ptr -> link = temp;
	return temp;
}