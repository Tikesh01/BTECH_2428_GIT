#include <stdio.h>
#include <stdlib.h>
// method for quick sort
void quickSort(int *ptr, int N)
{
    if (N <= 1)
        return;
    int pivot = ptr[0];
    int *left = (int *)malloc(N * sizeof(int)), *right = (int *)malloc(N * sizeof(int));
    int a = 0, b = 0;
    for (int j = 1; j < N; j++)
    { // Start from index 1 (pivot is at index 0)
        if (ptr[j] > pivot)
        {
            right[b++] = ptr[j];
        }
        else
        {
            left[a++] = ptr[j];
        }
    }
    quickSort(left, a); // repeatation of same method so that all the further groops can be sorted
    quickSort(right, b);
    for (int k = 0; k < a; k++)
    {
        ptr[k] = left[k];
    }
    ptr[a] = pivot;
    for (int l = 0; l < b; l++)
    {
        ptr[l + a + 1] = right[l];
    }

    free(left);
    free(right);
}
int main()
{
    printf("QUICK SORT!\n");
    // int arr[] = {10, 243, 3, 2, 32, 2, 23, 90, 32};
    // int size = sizeof(arr) / 4;
    // printf("The Given Array : ");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    int arr[50];
    printf("Enter the Array : ");
    int i = 0;
    while (getchar() != '\n')
    {
        scanf("%d", (arr + i));
        i++;
    }
    quickSort(arr, i);
    printf("\nThe Sorted Array : ");
    for (int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}