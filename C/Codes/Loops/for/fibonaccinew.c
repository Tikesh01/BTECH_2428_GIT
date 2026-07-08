#include <stdio.h>
int main()
{
    int n, i, a1 = 1, a2 = 1, a3;
    printf("Enter the nth term : ");
    scanf("%d", &n);
    printf("\nthe 1st tearm is 1");
    printf("\nthe 2nd tearm is 1");
    for (i = 3; i <= n; i++)
    {

        a3 = a1 + a2;
        printf("\nThe %dth term is %d",i, a3);
        a1 = a2;
        a2 = a3;
    }
    n=n-2;

    return 0;
}