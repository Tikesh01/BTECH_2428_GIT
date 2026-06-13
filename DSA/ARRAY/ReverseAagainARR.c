#include<stdio.h>
int main()
{
    int arr[] = {12,3,4,5,4,3,6,5,7};
    int size = sizeof(arr)/4,n,i,temp;
    int a = size-1;
    for(i=0; i<size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[a];
        arr[a] = temp;
        a--;
    }
    printf("The reversed Array : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}