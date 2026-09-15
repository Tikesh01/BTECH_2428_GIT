#include <stdio.h>
int n;
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    int Rec;
    Rec = n * factorial(n - 1);
    return Rec;
}
int main()
{
    int ans;
    printf("Enter the number : ");
    scanf("%d", &n);
    ans = factorial(n);
    printf("%d! = %d", n, ans);
    return 0;
}