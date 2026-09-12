#include <stdio.h>
int a, b, n;
int summation(int n)
{
    int i, sum = 0;
    int arr[n];
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d", sum);
    return summation(n);
}
int subtraction(int n)
{
    int i, sub = 0;
    int arr[n];
    for (i = 0; i < n - 1; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        sub = arr[i];
        sub = sub - arr[i + 1];
    }

    printf("%d", sub);
    return subtraction(n);
}
int multiplication(int n)
{
    int i, mult = 1;
    int arr[n];
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        mult = mult * arr[i];
    }

    printf("%d", mult);
    return multiplication(n);
}

int main()
{
    int p, resulta, resultb;
    printf("\nPress '1' for summation.\nEnter '2' to subtract the numbers.\nPress '3' for multiplicatin.\nEnter '4' to divid the numbers.\nEnter '4' to know remainder.\n\nwhat's your choice : ");
    scanf("%d", &p);
    if (p == 1)
    {
        printf("How many numbers do you want to add : ");
        scanf("%d", &n);
        printf("Enter the numbers : ");
        summation(n);
    }
    else if (p == 2)
    {
        printf("How many numbers do you want to subtract : ");
        scanf("%d", &n);
        printf("Enter the numbers : ");
        subtraction(n);
    }
    else if (p == 3)
    {
        printf("How many numbers do you want to multiply : ");
        scanf("%d", &n);
        printf("Enter the numbers : ");
        multiplication(n);
    }
    // else if (p == 4)
    // {
    //     printf("\nEnter the numbers with '/' : ");
    //     scanf("%d/%d", &a, &b);
    //     resulta = div(a, b);
    //     printf("%d / %d = %d", a, b, resulta);
    //     resultb = rem(a, b);
    //     printf("\nRemainder = %d", resultb);
    // }

    return 0;
}