#include <stdio.h>
int main()
{
    int array[10], i, n;
    printf("Enter the elements : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the number to Search : ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (array[i] == n)
        {
            printf("\n%d is present in the position %d", array[i], i);
        }
    }
    printf(" also");

    return 0;
}