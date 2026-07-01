#include <stdio.h>
int main()
{
    int n, r, sum = 0;
    printf("Enter the number/Integer : ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    printf("%d", sum);
    return 0;
}