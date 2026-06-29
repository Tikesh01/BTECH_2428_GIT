//Program to find out youngest of three given ages
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Put the ages of Ram,Shyam and Ajay : \n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    if (a < b && a < c)
    {
        printf("Ram  is the youngest");
    }
    if (b < a && b < c)
    {
        printf("Shyam is the youngest");
    }
    if (c < a && c < b)
    {
        printf("Ajay is the youngest");
    }
    if(a=b==c)
    {
        printf("Their ages are same");
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