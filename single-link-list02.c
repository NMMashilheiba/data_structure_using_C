#include<stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *link;
} node;

int countOfNode(node *head);
void addAtEnd(node *head, int data);

int main(){
	node *head = NULL;
	head = (node *)malloc(sizeof(node));

	head -> data = 50;
	head -> link = NULL;
	
	// creating a new node
	node *current = (node *)malloc(sizeof(node));
	current -> data = 60;
	current -> link = NULL;

	// linking the 2nd node
	head -> link = current;

	// creating another new node
	current = malloc(sizeof(node));
	current -> data = 70;
	current -> link = NULL;

	head -> link -> link = current;

	addAtEnd(head, 900);
	countOfNode(head);
	printf("\n");

	// 19th feb 2024 DS using C class assignment
	node *q = malloc(sizeof(node));
	q = head -> link;
	head -> link = q -> link;
	q -> link = (q -> link) -> link;
	(head -> link) -> link = q;

	countOfNode(head);
	printf("\n");

	return 0;
}

void addAtEnd(node *head, int data){
	node *ptr, *temp;
	ptr = head;

	// creating a new node
	temp = malloc(sizeof(node));
	temp -> data = data;
	temp -> link = NULL;

	// traversing upto the last node
	while(ptr -> link != NULL){
		ptr = ptr -> link;
		// printf("%d ", ptr->data );
	}

	// adding the new node at the end
	ptr -> link = temp;
}

int countOfNode(node *head){
	int count = 0;

	if(head == NULL){
		printf("Linked list is empty!\n");
		return 0;
	}

	node *ptr = NULL;
	ptr = head;

	while(ptr != NULL){
		count++;
		printf("%d ", ptr -> data);
		ptr = ptr -> link;
	}

	// printf("%d ", ptr -> data);
	printf("\nCount is: %d ", count);

}