#include <stdio.h>
int main()
{
    int i, n=0, sum, n2, next_num, main_sum,j;
    printf("Enter teh numbers to add : ");
    // scanf("%d ", &n);
    for (i = 0; i < 5; i++)
    {
        scanf("%d ", next_num);
    }

    for (j = 0; j < 100; j++)
    {
        sum = n + next_num;
        main_sum = sum + next_num;
    }
    printf("\n%d", main_sum);
    return 0;
}
