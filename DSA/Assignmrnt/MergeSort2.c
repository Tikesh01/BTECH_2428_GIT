// Sorting a Data Structure Using Merge sort method (Divide and Conqure Method)
#include <stdio.h>
#include <stdlib.h>
int merging(int *ptr, int N, int partSize,int a)
{
    int *part = (int *)malloc(partSize * sizeof(int));
    for (int i = 0; i < partSize; i++)
    {
        part[i] = ptr[a];
        a++;
    }
    a =
    partSize *= 2;
    merging(ptr,N,partSize,a);
}
int mergeSort()
{
}
void printa(int *prr, int N)
{
    printf("{ ");
    for (int p = 0; p < N; p++)
    {
        printf("%d ", prr[p]);
    }
    printf("}");
}
int main()
{
    int arr[] = {73, 72, 9, 20, 13, 20, 19, 28, 10, 12};
    int size = sizeof(arr) / 4;
    printf("The Given Array : ");
    printa(arr, size);
    merging(arr, size,2,0);
    printf("\nThe Sorted Array : ");
    printa(arr, size);
    return 0;
}