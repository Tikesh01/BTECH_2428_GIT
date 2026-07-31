#include <stdio.h>
int main()
{
    int n, i, j, a;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int d=1;
        for (j = 1; j <= i; j++)
        {
            a = 64+d;
            printf("%c  ", a);
            d++;
        }
        printf("\n");
    }
    return 0;
}