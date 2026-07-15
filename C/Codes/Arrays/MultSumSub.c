#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], result[10][10], i, j, k, l, ca, ra, cb, rb;
    printf("Enter the rows and column of first matrix with '*' : ");
    scanf("%d*%d", &ra, &ca);
    printf("Enter the rows and column of second matrix with '*' : ");
    scanf("%d*%d", &rb, &cb);
    printf("Enter the elements of first matrix : ");
    for (i = 0; i < ra; i++)
    {
        for (j = 0; j < ca; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the element of second matrix : ");
    for (i = 0; i < rb; i++)
    {
        for (j = 0; j < cb; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    result[i][j] = a[i][j] + b[i][j];
    for (i = 0; i < ra; i++)
    {
        for (j = 0; j < ca; j++)
        {
            printf("%d ", result[i][j]);
        }
    }
    return 0;
}
