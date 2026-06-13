#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 39, 32, 43, 0, 2, 93, 6};
    int pass = sizeof(arr) / 4;
    // sORTING
    int temp;
    for (int k = 0; k < pass; k++)
    {
        for (int i = 0; i < pass; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int j = 0; j < pass; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}