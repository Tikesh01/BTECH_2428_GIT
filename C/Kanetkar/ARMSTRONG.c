#include <stdio.h>
// Armstrong number between 1 t0 500.
int main()
{
    int i, remainder, j, cube = 1, sum = 0,n;
    for (i = 1; i <= 500; i++)
    {
        n=i;
        while (n != 0)
        {
            remainder = n % 10;
            for (j = 0; j < 3; j++)
            {
                cube=remainder*cube;
            }
            sum=sum+cube;
            n = n / 10;
        }
        if(sum==i)
            printf("%d %d\n",i,sum);
       
    }
    return 0;
}