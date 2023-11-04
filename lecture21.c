#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
struct Node {
    int data1;
    int data2;
    int data3;
    int data4;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data1, int data2, int data3, int data4) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data1 = data1;
    newNode->data2 = data2;
    newNode->data3 = data3;
    newNode->data4 = data4;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head, int data1, int data2, int data3, int data4) {
    struct Node* newNode = createNode(data1, data2, data3, data4);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to traverse and print the doubly linked list forward
void traverseForward(struct Node* head) {
    while (head != NULL) {
        printf("(%d, %d, %d, %d) -> ", head->data1, head->data2, head->data3, head->data4);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to traverse and print the doubly linked list backward
void traverseBackward(struct Node* tail) {
    while (tail != NULL) {
        printf("(%d, %d, %d, %d) -> ", tail->data4, tail->data3, tail->data2, tail->data1);
        tail = tail->prev;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    
    // Insert some elements into the doubly linked list
    insertAtEnd(&head, 1, 2, 3, 4);
    insertAtEnd(&head, 5, 6, 7, 8);
    insertAtEnd(&head, 9, 10, 11, 12);

    // Print the list forward and backward
    printf("Doubly Linked List (Forward):\n");
    traverseForward(head);

    struct Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    printf("\nDoubly Linked List (Backward):\n");
    traverseBackward(tail);

return 0;
}
