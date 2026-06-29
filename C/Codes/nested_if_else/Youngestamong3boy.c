#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the ages of boys :\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    if (a < b)
    {
        if (a < c)
        {
            printf("1 is younger");
        }
        else
        {
            printf("3 is younger");
        }
    }
    if (b < a)
    {
        if (b < c)
        {
            printf("2 is yougest");
        }
        else
        {
            printf(" 3 is yougest");
        }
    }
    else
    {
        printf("all are equal");
    }

    return 0;
}