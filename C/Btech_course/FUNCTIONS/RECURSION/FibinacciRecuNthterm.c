#include <stdio.h>
int n;
int fibo(int n)
{
    int a1 = 1, a2 = 1, a3, i;
    if (n == 1)
        return 1;
    else if (n==0)
        return 0;
    else
    a3 = fibo(n - 1) + fibo(n - 2);
    
    return a3;
}
int main()
{

    int ans, n;
    printf("\nEnter the nth term : ");
    scanf("%d", &n);
    ans = fibo(n);
    printf("%d", ans);
}