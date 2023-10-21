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
        printf(" \n Element: %d", ptr->data);
        ptr = ptr->next;
    }

}

// Case 1


// struct Node *insertAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     ptr->next = head;
//     return ptr;
// }

// Case 2

// struct Node *insertAtEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     struct Node *p = head;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }

// Case 3

struct Node *insertAfterNode(struct Node * head,struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}
// Case 4

// struct Node *insertAtIndex(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     int i = 0;

//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for node in linked list in heap
    /*
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    */

    // linked first and second node
    head->data = 7;
    head->next = second;

    // linked second and third node
    second->data = 11;
    second->next = third;

    // linked third and fourth node
    third->data = 46;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("\n Linked List before insertion");
    LinkedListTraversal(head);
    // head = insertAtFirst(head,56);
    // LinkedListTraversal(head);
    // head = insertAtIndex(head, 12,2);
    printf("\n Linked List after insertion");
    // head = insertAtEnd(head, 12);
    head=insertAfterNode(head,second,45);
    LinkedListTraversal(head);

    return 0;
}