#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the positive numbers : \n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is the greatest");
    }
    if (b > a && b > c)
    {
        printf("b is the gratest");
    }
    if (c > a && c > b)
    {
        printf("c is the greatest");
    }
    if (a == 0 && c == b)
    {
        printf("a=0\nc=b");
    }
    if (b == 0 && c == a)
    {
        printf("b=0\nc=a");
    }
    if (c == 0 && a == b)
    {
        printf("c=0\na=b");
    }

    return 0;
}