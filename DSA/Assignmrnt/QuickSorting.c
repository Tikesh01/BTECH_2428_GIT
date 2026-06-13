#include <stdio.h>
#include <stdlib.h>
void QuickSort(int *ptr, int N)
{
    if (N <= 1)
        return;
    int pivot = ptr[0];
    int *left = (int *)malloc(N * sizeof(int));
    int *right = (int *)malloc(N * sizeof(int));
    int a = 0, b = 0;
    for (int i = 1; i < N; i++)
    {
        if (ptr[i] >= pivot)
        {
            left[i] = ptr[i];
            a++;
        }
        if (ptr[i] < pivot)
        {
            right[i] = ptr[i];
            b++;
        }
    }
    QuickSort(left, a);
    QuickSort(right, b);

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
    int *arr;
    int i = 0;
    printf("Enter the array : ");
    while (getchar() != '\n')
    {
        scanf("%d", (arr + i));
        i++;
    }
    QuickSort(arr, i);
    printf("The Sorted array : ");
    for (int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}