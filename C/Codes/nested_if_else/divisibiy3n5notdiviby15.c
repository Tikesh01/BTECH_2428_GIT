#include <stdio.h>
int main()
{
    int i;
    printf("Enter the number : ");
    scanf("%d", &i);
    if (i % 3 == 0 || i % 5 == 0)
    {
        if (i % 15 != 0)
        {
            printf("Number is divisible by 3 or 5 but not divisible by 15");
        }
        else
        {
            printf("Number is divisible to them");
        }
    }
    //    if (i%3==0 || i%5==0)
    //     {
    //        if (i%15==0)
    //         {
    //             printf("Number is divisible by 3, 5 or 15" );
    //         }
    //        }
else
{
    printf("not divisible to them");
}

return 0;
}