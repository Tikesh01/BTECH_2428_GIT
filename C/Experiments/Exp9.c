// 9.Finding the first N terms of Fibonacci series.
#include <stdio.h>
int main()
{
    int n, a1 = 1, a2 = 1, a3, i;
    printf("Enter the last(nth) term : ");
    scanf("%d", &n);
    printf("1, 1, ");
    for (i = a1; i <= n-2; i++)
    {
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
        printf("%d, ", a3);
    }

    return 0;
}