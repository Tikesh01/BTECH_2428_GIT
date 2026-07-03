#include <stdio.h>
int main()
{
    int i, n, a = 3;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 4;
    }
}