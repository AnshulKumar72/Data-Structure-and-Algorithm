#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf(" Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in heap.
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Linked first node and second node
    head->data = 7;
    head->next = second;

    // Linked second node and third node
    second->data = 11;
    second->next = third;

    // Linked third node and fourth node
    third->data = 41;
    third->next = fourth;

    // Linked fourth node and NULL(Terminate the list at the third node)
    fourth->data = 66;
    fourth->next = NULL;

    LinkedListTraversal(head);
    return 0;
}