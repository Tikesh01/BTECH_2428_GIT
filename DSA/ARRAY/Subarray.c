#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / 4;
    for (int j = 0; j < size; j++)
    {
        for (int i = j; i < size; i++)
        {
            for (int k=j; k<= i; k++)
            {
                printf("%d", arr[k]);
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}