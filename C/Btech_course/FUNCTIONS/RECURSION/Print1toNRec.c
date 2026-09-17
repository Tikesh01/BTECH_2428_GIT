#include <stdio.h>
int n;
int incresing(int n)
{ 
    if (n == 0)
        return n;
    else
    {
        incresing(n - 1);
        printf("%d ", n);
    }
}
int main()
{
    printf("Enter the nth term : ");
    scanf("%d", &n);
    incresing(n);
}