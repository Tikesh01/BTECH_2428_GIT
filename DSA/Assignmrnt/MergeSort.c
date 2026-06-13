#include<stdio.h>
#include<stdlib.h>
void MergeSort(int *ptr,int size)
{
    if(ptr[0]<ptr[1])
    {
        int temp = ptr[0];
        ptr[0] = ptr[1];
        ptr[1] = temp;
    }
}
void merging(int *p, int N)
{
    if(N<=2){
        return;
    }
    int n = (int)(N/2);
    int *part1 = (int*) malloc(n*sizeof(int));
    int *part2 = (int*) malloc((N-n)*sizeof(int));
    printf("\n");
    for(int i=0; i<n; i++)
    {
        part1[i] = p[i];
        printf("%d ",part1[i]);
    }
    printf("\n");
    for(int j=0; j<N-n; j++)
    {
        part2[j] = p[j+n];
        printf("%d ",part2[j]);
    }
    merging(part1,n);
    merging(part2,N-n);
}
int main()
{
    int arr[] = {884,3,392,1,23,473,92,12};
    int size =sizeof(arr)/sizeof(int);
    printf("The given array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    merging(arr,size );
    printf("\nThe Sorted array : ");
    for (int i = 0; i < size; i++)  
    {
        printf("%d ", arr[i]);
    }

    return 0;
}