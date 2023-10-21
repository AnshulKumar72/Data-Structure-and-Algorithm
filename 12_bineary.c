#include <stdio.h>

int BinarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low=0;
    high=size-1;
    // Start Search
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // End search
    return -1;
}

int main()
{
    // Sorted Array for Binary Search
     int arr[] = {1, 3, 5, 56, 64, 73, 123, 225, 444};
    int size = sizeof(arr) / sizeof(int);
    int element = 123;
    int searchIndex = BinarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);

    return 0;
}