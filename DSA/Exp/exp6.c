#include<stdio.h>
int insertionSort(int *arr,int lenth)
{
    for (int i = 1; i < lenth; i++)
    {
        for (int j = i-1; j >-1; j--)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                i--;
            }
            else
                break;
        }
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
int main()
{
    int arr[10] = {33,46,5,4,22,5,6,9,4,0};
    int lenth = sizeof(arr)/sizeof(int);
    printf("Array before Sort : ");
    printAarray(arr,lenth);
    insertionSort(arr,lenth);
    printf("\n\nArray After Sort : ");
    printAarray(arr,lenth);

    return 0;
}