#include <stdio.h>
int main()
{
    int n, remainder,rev=0;
    printf("Enter the integer to reverse : ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        n = n / 10;
        rev=rev*10+remainder;
        //OR
        // remainder=n%10;
        // printf("%d",remainder); // in this block not actually number is being printed.
        // n=n/10;
    }
    printf("%d", rev);
    return 0;
}