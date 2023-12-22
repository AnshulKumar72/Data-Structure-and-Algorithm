#include <stdio.h>
#include<stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int temp;
    int pivot = A[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    //Swap A[low] and A[j]
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        printArray(A,9);
        quickSort(A, low, partitionIndex - 1);  // Sort left sub array
        quickSort(A, partitionIndex + 1, high); // Sort right sub array
    }
}
int main()
{
    int A[] = {3, 5, 2, 13, 12,3,2,13,45};
   // 3 , 5 , 2 , 13 , 12 , 3 , 2 , 13 , 45
   // 3 , 2 , 2 , 13i , 12 , 3j ,  5j , 13 , 45
   // 3 , 2 , 2 , 3j , 12i , 13 ,  5j , 13 , 45//first call to partitiion return3
   
    int n = 9;
    printf("Array before sorting\n");
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printf("Array after sorting\n");
    printArray(A, n);
    return 0;
}