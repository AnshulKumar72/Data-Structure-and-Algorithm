#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Circular linked list traversal

 
/*=========================using do while loop=========================*/

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    printf("Element %d\n", ptr->data);
    ptr = ptr->next;
    while (ptr != head){
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while (ptr->next != head)
    {
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Alocate memory for node in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Linked head and second node
    head->data = 4;
    head->next = second;

    // Linked second and third node
    second->data = 3;
    second->next = third;

    // Linked third and fourth node
    third->data = 6;
    third->next = fourth;

    // Linked fourth and second node
    fourth->data = 1;
    fourth->next = head;

    printf("CircularLinked list before insertion\n");
    linkedListTraversal(head);
    
    printf("CircularLinked list after insertion\n");
    head = insertAtFirst(head, 54);
    linkedListTraversal(head);
    return 0;
}