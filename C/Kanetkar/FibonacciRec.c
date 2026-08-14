// Write a recursive function to obtain the first 25 numbers of a Fibonacci sequence. In a Fibonacci sequence the sum of two successive terms gives the third term. Following are the first few terms of the Fibonacci sequence:
// 1 1 2 3 5 8 13 21 34 55 89...

#include <stdio.h>
int n, a = 0, series = 0;
int fib(int n)
{
    int a1 = 1, a2 = 1, i, a3;
    printf("Enter the term : ");
    scanf("%d", &n);
    // printf("NOTE: The first term of the fibonacci is '1'.");
    printf("\nThe series is : %d, %d, ", a1, a2);
    for (i = 1; i <= n - 2; i++)
    {
        a3 = a1 + a2;
        printf("%d, ", a3);
        a1 = a2;
        a2 = a3;
    }
}
int fibo_rec(int n, int a)
{
    if (n > 0)
        if (a > 0)
        {
            printf("%d, ", a);
            // return a;
        }
    n--;
    a = a + fibo_rec(n, a);
}
int main()
{
    printf("How many terms do you want : ");
    scanf("%d", &n);
    // printf("1, ");
    fibo_rec(n, a);
}