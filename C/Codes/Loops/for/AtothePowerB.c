#include <stdio.h>
int main()
{
    int a, b, i, pow = 1;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    // for ( i = 1; i <= b; i++)
    // {
    //     pow=pow*a;
    // }
    i = 1;
    while (i <= b)
    {
        pow = pow * a;
        i++;
    }
    printf("%d raised to the power %d is =  %d",a,b, pow);
    return 0;
}