// #include<stdio.h>
// #include<stdlib.h>  

// struct stack{
// int size;
// int top;
// int * arr;
// };

// int isEmpty(struct stack * ptr){
//     if(ptr->top==-1){
//     return 1;
// }
// else{
//     return 0;
// }
// }

// int isFull(struct stack* ptr){
// if(ptr->top==ptr->size-1){
//     return 1;
// }
// else{
//     return 0;
// }
// }

// void push(struct stack *ptr,int val){
//     if(isFull(ptr)){
//         printf("Stack Overflow! Cannot push %d to the stack\n",val);
//     }
//     else{
//         ptr->top++;
//         ptr->arr[ptr->top]=val;
//     }
// }

// int pop(struct stack *ptr){
//     if(isEmpty(ptr)){
//         printf("Stack Underflow! Cannot pop from the stack\n");
//         return -1;
//     }
//     else{
//        int val=ptr->arr[ptr->top];
//        ptr->top--;
//        return val;

//     }
// }

// int main(){
//   struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
//   sp->size=10;
//   sp->top=-1;
//   sp->arr = (int *)malloc(sp->size * sizeof(int));  
//    printf("Stack has been created successfully\n");

// printf("Before Pushing , Full %d\n",isFull(sp));
// printf("Before Pushing , Empty %d\n",isEmpty(sp));
// push(sp,50);
// push(sp,56);
// push(sp,6);
// push(sp,26);
// push(sp,36);
// push(sp,89);
// push(sp,66);
// push(sp,12);
// push(sp,32);
// push(sp,19);//-->pushed 10 values   
// push(sp,41);//--->Stack overflow since the size of the stack is 10
// printf("After Pushing , Full %d\n",isFull(sp));
// printf("After Pushing , Empty %d\n",isEmpty(sp));

// printf("Popped %d from the stack \n",pop(sp));// Last in first out-=========
//     return 0;
// }