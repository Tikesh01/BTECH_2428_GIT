// 1
// AB
// 123
// ABCD
// 12345.....n
// .
// .
// .
// n
#include <stdio.h>
int main()
{
    int i, j, n, k, a;
    printf("Enter the  number of columns : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d  ", j);
        }
        printf("\n");
        for (k = 65; k <= i+65; k++)
        {
            printf("%c  ", k);
        }
        // a=2;
        // for (k = 1; k <= a; k++)
        // {
        //     int d=a+63;
        //     printf("%c  ",d);
        // }
        printf("\n");
    }
    return 0;
}