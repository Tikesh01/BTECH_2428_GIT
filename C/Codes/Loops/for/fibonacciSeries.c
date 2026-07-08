#include <stdio.h>
int main()
{
    int n, i, a1 = 1, a2 = 1, a3;
    printf("Enter the nth term : ");
    scanf("%d", &n);
    printf("%d %d ", a1, a2);
    for (i = a1; i <= n - 2; i++)
    {
        a3 = a1 + a2;
        printf("%d ", a3);
        a1 = a2;
        a2 = a3;
    }

    return 0;
}