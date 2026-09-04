// 13.  Recursive program to find the factorial of an integer.
#include <stdio.h>
int n, result;
int factorial(int n)//Recursive Function Declaration
{

    int result;
    if (n == 1)//Base case for the loop
        return 1;
    else
        result = n * factorial(n - 1);
}
int main()
{
    printf("Enter the Integer : ");
    scanf("%d", &n);
    result = factorial(n);
    printf("%d", result);

    return 0;
}