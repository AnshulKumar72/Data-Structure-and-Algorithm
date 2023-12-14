#include<stdio.h>
#include<stdlib.h>  

struct stack{
int size;
int top;
int * arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
    return 1;
}
else{
    return 0;
}
}

int isFull(struct stack* ptr){
if(ptr->top==ptr->size-1){
    return 1;
}
else{
    return 0;
}
}

void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
       int val=ptr->arr[ptr->top];
       ptr->top--;
       return val;

    }
}

int peek(struct stack * sp,int i){
    int arrayInd=sp->top-i+1;
    if(arrayInd<0){
        printf("Not a valid position for the stack");
        return -1;      
    }
    else{
        return sp->arr[arrayInd];
    }
}

int stackTop(struct stack *sp){
return sp->arr[sp->top];
}
int stackBottom(struct stack *sp){
return sp->arr[0];
}
int main(){
  struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
  sp->size=15;
  sp->top=-1;
  sp->arr = (int *)malloc(sp->size * sizeof(int));  
   printf("Stack has been created successfully\n");

printf("Before Pushing , Full %d\n",isFull(sp));
printf("Before Pushing , Empty %d\n",isEmpty(sp));
push(sp,50);
push(sp,56);
push(sp,61);
push(sp,26);
push(sp,36);
push(sp,89);
push(sp,66);
push(sp,12);
push(sp,32);
push(sp,19);  
push(sp,5);


printf("The topmost value of this stack is %d\n",stackTop(sp));
printf("The bottommost value of this stack is %d\n",stackBottom(sp));
//printing values from the stack
//for (int  j = 1; j < sp->top +1; j++)
//{
//    printf("The value at position %d is %d\n",j,peek(sp,j));
//}

    return 0;
}