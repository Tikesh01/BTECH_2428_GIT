// Print difference b/w odd indexed and even indexed elements
#include <stdio.h>
int main()
{
    int arr[10] = {20, 40, 3, 7, 90, 2, 1, 78, 54, 87}, i, sum1 = 0, sum2 = 0;
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            sum1 = sum1 + arr[i];
        }
        else if (i % 2 != 0)
        {
            sum2 = sum2 + arr[i];
        }
    }
    int sum=sum1-sum2;
    printf("%d",sum);
    return 0;
}