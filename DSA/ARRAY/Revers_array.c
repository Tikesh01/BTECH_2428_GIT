#include<stdio.h>
int main()
{
    int arr[]={1,3,2,5,3,},i;
    int size = sizeof(arr)/4,temp;
    int j = size -1;
    for(i=0; i<j; i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
        j--;
    }
    for(int k =0; k<size; k++)
        printf("%d ",arr[k]);

    
    return 0;
}