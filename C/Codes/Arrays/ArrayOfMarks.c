#include <stdio.h>
int main()
{
    int arrmarks[10] = {40, 90, 80, 34, 12, 80, 56, 44, 19, 77}, i;
    printf("\nNOTE : The role numbers is 1 to 10\n");
    printf("\nThe role numbers whose mark is less than 35 : ");

    for (i = 0; i < 10; i++)
    {
        if (arrmarks[i] < 35)
        {
            printf("%d ", i + 1);
        }
    }
    return 0;
}