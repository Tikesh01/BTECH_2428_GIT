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
        // printf("\n%d raised to de %d is =  %d", a, i, pow);
        printf("%d ",pow);
        i++;
    }
    return 0;
}