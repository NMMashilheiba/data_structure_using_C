#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // For INT_MAX

// Define the structure for a node in the doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to insert a new node at the end of the doubly linked list
void insert(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
}

// Function to print the doubly linked list in forward direction
void printForward(struct Node* head) {
    struct Node* temp = head;

    printf("Doubly Linked List (Forward): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to find the smallest number in the doubly linked list
int findSmallest(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return INT_MIN;
    }

    int smallest = head->data;
    struct Node* current = head->next;

    while (current != NULL) {
        if (current->data < smallest) {
            smallest = current->data;
        }
        current = current->next;
    }

    return smallest;
}

// Function to delete the node containing the smallest number
void deleteSmallest(struct Node** head_ref, int smallest) {
    struct Node* current = *head_ref;

    // If list is empty
    if (current == NULL) {
        printf("List is empty.\n");
        return;
    }

    // Traverse the list to find the node with the smallest number
    while (current != NULL) {
        if (current->data == smallest) {
            // Adjust pointers of adjacent nodes to bypass the node to be deleted
            if (current->prev != NULL) {
                current->prev->next = current->next;
            } else {
                *head_ref = current->next; // If the node to be deleted is the head
            }

            if (current->next != NULL) {
                current->next->prev = current->prev;
            }

            // Free memory allocated for the node to be deleted
            free(current);
            printf("Deleted the smallest number: %d\n", smallest);
            return;
        }
        current = current->next;
    }

    printf("Smallest number not found in the list.\n");
}

int main() {
    struct Node* head = NULL;
    int N, num;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        insert(&head, num);
    }

    printForward(head);

    int smallest = findSmallest(head);
    if (smallest != INT_MIN) {
        deleteSmallest(&head, smallest);
        printForward(head);
    }

    return 0;
}
