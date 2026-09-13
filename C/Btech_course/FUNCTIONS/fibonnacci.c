#include <stdio.h>
int n;
int fib(int n)
{
    int a1 = 1, a2 = 1, i, a3;
    printf("Enter the term : ");
    scanf("%d",&n);
    // printf("NOTE: The first term of the fibonacci is '1'.");
    printf("\nThe series is : %d, %d, ", a1, a2);
    for (i = 1; i <= n-2; i++)
    {
        a3 = a1 + a2;
        printf("%d, ", a3);
        a1 = a2;
        a2 = a3;
    }

}
int main()
{
    int ans;
    ans = fib(n);
    return 0;
}