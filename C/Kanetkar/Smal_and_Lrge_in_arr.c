#include <stdio.h>
#include <conio.h>
#include<limits.h>
int main()
{
    int arr[] = {5, 15, 22, 1, -15, 24}, smallest, biggest, i,index;
    int size = sizeof(arr) / sizeof(int);
    smallest = INT_MAX;
    for (i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
            index = i;
        }
    }
    printf("The index of the smallest number = %d",index);
    // printf("The smallest num = %d", smallest);
    // printf("\nThe biggest num = %d", biggest);
    getch();
    return 0;
}