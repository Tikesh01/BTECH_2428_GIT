#include <stdio.h>
int main()
{
    int n, rem, rev = 0, sum,temp;
    printf("enter the number : ");
    scanf("%d", &n);
    temp=n;
    while (n> 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n=n/10;
    }
    sum = temp + rev;
    printf("Real + Reversed = %d + %d = %d", temp, rev, sum);
}