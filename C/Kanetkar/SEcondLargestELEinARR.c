#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[10] = {2, 5, 6, 8, 9, 60, 3, 19, 16, 20};
    // printf("Enter the elements in array : ");
    int size = sizeof(arr) / sizeof(int);
    int largest = INT_MIN, index;
    int smallest = INT_MAX, index2;
    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
            index = i;
        }
        if (smallest > arr[i])
        {
            smallest = arr[i];
            index2 = i;
        }
    }
    printf("The largest element = %d", largest);
    printf("\nThe index of largest = %d", index);
    printf("\nThe smallest element = %d", smallest);
    printf("\nThe index of smallest = %d", index2);
    arr[index] = 0;
    int sec_large = INT_MIN, index_sec_large;
    int sec_small = INT_MAX, index_sec_samll;
    for (int j = 0; j < size; j++)
    {
        if (sec_large < arr[j])
        {
            sec_large = arr[j];
            index_sec_large = j;
        }
        if( sec_small > arr[j]);
    }
    printf("\n\nThe second largest element = %d", sec_large);
    printf("\nThe index of second largest = %d", index_sec_large);
    arr[index]=largest;

    return 0;
}