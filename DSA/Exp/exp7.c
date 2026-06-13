#include<stdio.h>
#include<limits.h>
int max(int *ptr)
{
    int i =0;
    int maxNum = INT_MIN;
    while (ptr[i])
    {
        if(maxNum<ptr[i])
        maxNum = ptr[i];
    }
}
int selectionSort(int *ptr, int lenth)
{
    for (int i = 0; i < lenth; i++)
    {
        max()
    }
    
}
void printAarray(int *ptr,int N)
{
    int i=0;
    printf("\n----------------------------------\n");
    while (i<N)
    {
        printf("% 4d",ptr[i]);
        i++;
    }
}
void main()
{
    int arr[] = {2,4,3,33,22,55,39,2,89,0};
    int N = sizeof(arr)/sizeof(int);
    printf("Array Before Sort :");
    printAarray(arr,N);
    selectionSort(arr,N);
    printf("Array Afetr Selection Sort :");
    printAarray(arr,N);
    return 0;
}