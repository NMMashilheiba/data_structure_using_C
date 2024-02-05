#include<stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *link;
} node;

int countOfNode(node *head);

int main(){
	node *head = NULL;
	head = (node *)malloc(sizeof(node));

	head -> data = 50;
	head -> link = NULL;
	
	printf("%d ", head -> data);

	// creating a new node
	node *current = (node *)malloc(sizeof(node));
	current -> data = 60;
	current -> link = NULL;

	head -> link = current;

	printf("%d ", current -> data);

	// creating another new node
	current = malloc(sizeof(node));
	current -> data = 70;
	current -> link = NULL;

	head -> link -> link = current;

	printf("%d ", current -> data); 

	countOfNode(head);

	return 0;
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
		ptr = ptr -> link;
	}
	printf("\nCount is: %d ", count);

}