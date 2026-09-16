#include <stdio.h>
int a3, n,ans;
int fibo(int n)
{
    if (n==0)
    {
        return 1;
    }
    else if (n==1)
    {
        return 1;
    }
    
    else
    {
        ans=fibo(n) + fibo(n-1);
        printf("%d", ans);
    }

    return fibo(n);
}
int main()
{
    printf("\nEnter the nth term : ");
    scanf("%d", &n);
    fibo(n);
    // printf("%d", ans);
    // printf("%d ",a3);
}