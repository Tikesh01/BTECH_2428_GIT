// Write a recursive function to obtain the running sum of first 25 natural numbers.
#include <stdio.h>
int n, sum2 =0, sum = 0, i;
int running_sum_natural_num(int n)
{
    for (i = 1; i <= n; i++)
    {
        sum = i + sum;
        printf("        %d              %d\n", i, sum);
    }
}
int recurn_sum(int n, int i)
{
    if (n == 0)
        return 0;
    sum2 = sum2 + i;
    printf("       %d               %d\n", i, sum2);
    i++;
    n--;
    recurn_sum(n, i);
}
int main()
{
    printf("how many terms do you want add of natural number : ");
    scanf("%d", &n);
    puts("Natural numbers   running sum");
    running_sum_natural_num(n);
    i = 1;
    puts("\nWITH RECURSION : ");
    puts("Natural numbers   running sum");
    recurn_sum(n, i);
}