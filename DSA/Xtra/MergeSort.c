#include<stdio.h>
#include<stdlib.h>
void MergeSort(int *ptr, int N, int count)
{
    int *part = (int*)malloc(count*sizeof(int));
    int a=1;
    for(int i=0; i<count; i++)
    {
        part[i] = ptr[a+i];
    }
}
int main()
{
    int arr[] = {1,64,9,90,27,38,19,20,3};
    int size = sizeof(arr)/sizeof(int);
    MergeSort(arr,size,2);

    return 0;
}