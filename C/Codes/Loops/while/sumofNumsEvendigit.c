#include <stdio.h>
int main()
{
    int n, r, sum = 0;
    printf("Enter the integer : ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        if (r % 2 == 0)
        {
            sum = sum + r;
        }
    }
    printf("Sum of even digits = %d",sum);
    return 0;
}