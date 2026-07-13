#include <stdio.h>
int main()
{
    int arr[5] = {10, 70, 54, 33, 27}, i;
    // value storing formula
    int max = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}