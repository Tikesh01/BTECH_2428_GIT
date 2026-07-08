#include <stdio.h>
int main()
{
    int n, i, a1 = 1, a2 = 1, a3;
    printf("Enter the nth term : ");
    scanf("%d", &n);
    // printf("%d %d ", a1, a2);
    for (i = 1; i <= n-2 ; i++)
    {
      a3=a2+a1;
      a1=a2;
      a2=a3;
    }
    printf("the %dth term is %d",n,a3);
    return 0;
}