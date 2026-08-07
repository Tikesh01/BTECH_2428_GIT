#include <stdio.h>
int  sum = 0,n,m;
int digits_in_number(int *ptr1) // It is generalization for all digit of numbers
{
    int j = 0;
    while (*ptr1 != 0)
    {
        *ptr1 = *ptr1 / 10;
        j++;
    }
    return j;
}
void sum_of_cubes(int *ptr1)
{
    for (int i = 0; i < digits_in_number(&n); i++)
    {
        sum = sum + *ptr1;
    }
    if (m == sum)
        printf("%d %d %d is Armstrong ",n, m, sum);
    else
        printf("%d %d %d ",n,m,sum);
}
void cube_of_remainder(int *ptr1)
{
    int cube = 1;
    for (int i = 0; i < 3; i++)
        cube = cube * *ptr1;
    sum_of_cubes(&cube);
}
void remainder_of_n(int *ptr1)
{
    int remainder;
    while (*ptr1 != 0)
    {
        remainder = *ptr1 % 10;
        cube_of_remainder(&remainder);
        *ptr1 = *ptr1 / 10;
    }
}
int main()
{
    printf("Enter the number betweeen 1 to 500 : ");
    scanf("%d", &n);
    remainder_of_n(&n);
    // if (n == sum)
    //     printf("%d %d is Armstrong ", n, sum);
    // else
    //     printf("Not armstrong");

    return 0;
}