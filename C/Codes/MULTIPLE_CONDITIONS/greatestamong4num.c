#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the positive numbers : \n");
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    if (a > b && a > c && a>d)
    {
        printf("a is the greatest");
    }
    if (b > a && b > c && b>d)
    {
        printf("b is the gratest");
    }
    if (c > a && c > b && c>d)
    {
        printf("c is the greatest");
    }
    if (d>a&&d>b&&d>c)
    {
        printf("d is the greatest");
    }
    if (a==b==c==d)
    {
        printf("All are equal");
    }
    

    // if (a == 0 && c == b)
    // {
    //     printf("a=0\nc=b");
    // }
    // if (b == 0 && c == a)
    // {
    //     printf("b=0\nc=a");
    // }
    // if (c == 0 && a == b)
    // {
    //     printf("c=0\na=b");
    // }

    return 0;
}