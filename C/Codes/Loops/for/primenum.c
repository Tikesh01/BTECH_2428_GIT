#include <stdio.h>
int n;
int prime(int n)
{
    int i, a = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        printf("Prime number");
    }
    else if(a==1)
    {
        printf("Composite number");
    }
}
int main()
{
    int result;
    printf("Enter the number : ");
    scanf("%d", &n);
    result = prime(n);
    return 0;
}