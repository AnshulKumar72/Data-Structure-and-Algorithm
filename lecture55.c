#include<stdio.h>
#include<stdio.h>

void printArray(int * A , int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
void selectionSort(int * A,int n){
    int temp;
    int indexofMin;
printf("Running Selection sort....\n");
for (int i = 0; i < n-1; i++)
{
    indexofMin=i;
    for (int j = i+1 ; j < n; j++)
    {
        if(A[j]<A[indexofMin]){
            indexofMin=j;
        }
    }
    //Swap A[i]=A[indexofMin]
    temp=A[i];
    A[i]=A[indexofMin];
    A[indexofMin]=temp;
    
}

}
int main(){
    // Input Array(There will be n-1 passes...=>5-1=4 in this case)
    //Index  0   1   2   3   4
    //Array  3 , 5 , 2, 13 ,12

    // After 1st pass 
    // Array 2 , 5 , 3, 13 ,12

    // After 2nd pass 
    // Array 2 , 3 , 5, 13 ,12

    // After 3rd pass 
    // Array 2 , 3 , 5 , 13 ,12

    // After 4th pass 
    // Array 2 , 3 , 5 , 12 , 13 


    int A[]={3,5,2,13,12};
    int n=5;
    printf("Array before sorting\n");    
    printArray(A,n);
    selectionSort(A,n);
    printf("Array after sorting\n");
    printArray(A,n);
    return 0;
}
    