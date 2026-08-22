#include <stdio.h>
int main()
{
    // int n;
    // printf("Enter the number : ");
    // scanf("%d",&n);
    int i, a = 0,j;
    // for (i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //         a=1;
    // }
    int b=1;
    for (i = 1; i <= 13; i++)
    {
        for ( j = 2; j < b; j++)
        {
            if (b % j == 0)
            {
                a = 1;
            }
            if(a==1)
                break;
        }
        if (a == 0)
            printf("%d ", b);

        b++;
    }

    return 0;
}