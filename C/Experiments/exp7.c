// Search an element in an array
#include <stdio.h>
int main()
{
    int arr[6] = {4, 8, 90, 56, 4, 9};
    int i, n, j;
    printf("The element in the array : ");
    for (i = 0; i < 6; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\nEnter what u want to search : ");
    scanf("%d", &n);
    for (j = 0; j < 6; j++)
    {
        if (arr[i] == n)
        {
            printf("'The number is present in the array'");
            break;
        }
        else if (arr[i] != n)
        {
            printf("'The number is not present in the array'");
            break;
        }
    }

    return 0;
}