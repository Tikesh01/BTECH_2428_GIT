#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the numbers : ");
    scanf("\n%d\n%d\n%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("First num is the greatest");
        }
    }
    if (b > a)
    {
        if (b > c)
        {
            printf("second num is the greatest");
        }
    }
    if (c > a)
    {
        if (c > b)
        {
            printf("third num is the greatest");
        }
    }
    else
    {
        printf("They are equal");
    }

    return 0;
}