#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
int Min(int start,int end,int *ptr)//Function to select the minimum values 
{
    int min=INT_MAX;
    int a=0;
    for (int j = start; j < end; j++)
    {
        if(ptr[j]<min)
        {
            min = ptr[j];
            a =j;
        }
        else{
            continue;
        }
    }
    return a;// returning the indexof minimum value
}
void selectionSort(int *p, int N)
{
    for (int i = 0; i < N; i++)
    {
        int minValueInd = Min(i,N,p);
        // swaping the minimum value on lower ordered index
        int temp = p[i];
        p[i] = p[minValueInd];
        p[minValueInd] = temp;
    }
}
int main()
{
    int *arr;
    int i = 0;
    //input the unsorted data structure for sorting
    printf("Enter the array : ");
    while (getchar() != '\n')
    {
        scanf("%d", &arr[i]);
        i++;
    }
    selectionSort(arr, i);

    //Printing the sorted array
    printf("The sorted array : ");
    for (int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}