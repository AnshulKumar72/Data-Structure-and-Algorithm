#include <stdio.h>
#include <stdlib.h>

void printArray(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    
    }
   printf("\n");
} 


void bubbleSort(int *A, int n)
{
    int temp;
    int isSorted=0;
    for (int i = 0; i < n - 1; i++) // For number of passes.
    {
        printf("Working of pass number%d\n",i+1);
        isSorted=1;
        for (int j = 0; j < n - 1 - i; j++) // For comparision in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted=0;
            }
        }
        if(isSorted){
            return;
        }
    }
}
int main()
{
    int A[] = {12,45,85,69,78,3,2,1,12};
    //int A[] = {12, 54, 65, 7, 23, 9};
    //int A[] = {1,2,3,4,5,6};
    int n = 13;
    printArray(A, n); // Print the array before sorting
    bubbleSort(A, n); // Function to sort the array
    printArray(A, n); // Print the array after sorting
    return 0;
}