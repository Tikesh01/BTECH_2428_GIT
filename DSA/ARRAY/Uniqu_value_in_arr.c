#include <stdio.h>
int unique(int arr[], int size)
{
    int xor = 0, i;
    for (i = 0; i < size; i++)
    {
        xor = xor ^ arr[i];
    }
    return xor;
}
int main()
{
    int arr[] = {2, 4, 8, 4, 3, 9, 2, 3};
    int size = sizeof(arr) / 4;
    int ans = unique(arr, size);
    printf("%d ", ans);

    return 0;
}