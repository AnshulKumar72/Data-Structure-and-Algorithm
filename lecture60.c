#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void printArary(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int maximum(int *A,int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}
void countSort(int *A,int n){
    int i,j;
    // find the maximum element in A
    int max=maximum(A,n);

//Create the count Array
    int *count=(int *)malloc((max+1)*sizeof(int));

// Initialize the array elements to 0
for ( i = 0; i < max+1; i++)
    {
        count[i]=0; 
    }

    //Increment the corresponding index in the count array
for (int i = 0; i < n; i++)
    {
        count[A[i]]=count[A[i]]+1;
    }
    i=0;// Counter for count array
    j=0;// counter for given array A

    while(i<max+1){
        if(count[i]>0){
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else{
          i++;
        }
    }
}
int main(){
    int A[]={3,1,9,7,1,2,4};
    int n=6;
    printf("Array before sorting\n");
    printArary(A,n);
    printf("Array after count sort\n");
    countSort(A,n);
    printArary(A,n);
    return 0;
}