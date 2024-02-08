#include<stdio.h>
#include<malloc.h>

struct node{
int data;
struct node*left;
struct node*right;
};

struct node * createNode(int data){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void preOrder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node * root ){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
void inOrder(struct node * root){
    if(root !=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int isBST(struct node* root){
    static struct node *prev=NULL;
    if(root!=NULL){
        if(isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
else{
    return 1;
}
}

struct node * search(struct node*root,int key){
    if(root ==NULL){
        return NULL;
    }
    if(root ->data==key){
      return root;
    }
    else if(root->data>key){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
int main(){
//===== Constructing the root node --using function=====
struct node *p=createNode(4);
struct node *p1=createNode(1);
struct node *p2=createNode(6);
struct node *p3=createNode(5);
struct node *p4=createNode(2);
//===========Link the root node with the left and right children==========
p->left=p1;
p->right=p2;
p1->left=p3;
p1->right=p4;


//=====================It is recursive searching=====================
struct node *n =search(p, 6);
if(n!=NULL){
    printf(" Found : %d",n->data);
}
else{
    printf("Element is not found");
}
    return 0;
}