#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data)
{
    struct node *n;                                 // Creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data;                                    // Setting the data
    n->left = NULL;                                 // Setting the left and right children to NULL
    n->right = NULL;                                // Setting the left and right children to NULL
    return n;                                       // Finally returning the created node
}
int main()
{
    /*
    // Constructing the root node
     struct node *p;
     p->data=2;
     p=(struct node *)malloc(sizeof(struct node));
     p->left=NULL;
     p->right=NULL;

     // constructing the second node
     struct node *p1;
     p->data=1;
     p1=(struct node *)malloc(sizeof(struct node));
     p1->left=NULL;
     p1->right=NULL;

     // constructing the third node
     struct node *p2;
     p->data=4;
     p2=(struct node *)malloc(sizeof(struct node));
     p2->left=NULL;
     p2->right=NULL;

     // Linking the root node with left and right children
     p->left=p1;
     p->right=p2;
     */

    // Constructing the root node==Using function(Recommended)
     struct node *n=createNode(2);
     struct node *n1=createNode(1);
     struct node *n2=createNode(4);

      // Linking the root node with left and right children
     n->left=n1;
     n->right=n2;

     createNode(n);
    
    return 0;
}