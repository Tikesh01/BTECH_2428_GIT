// Write a C function to evaluate the series
// sinx = x - (x^3/3!) + (x^5/5!)-(x^7/7!)+.....
// to five significant digits.
#include <stdio.h>
#include <math.h>
#include <conio.h>
int terms, i, n;
double x, a;
int factorial(int n)
{
    if (n == 1)
        return n;
    n = n * factorial(n - 1);
}
int sinx(int terms)
{
    int arr[terms * 2 - 1];
    for (i = 0; i < (terms * 2 - 1); i++)
        arr[i] = i + 1;
    for (x = 0.1; x <= 1.0; x = x + 0.1)
    {
        a = (x) - (pow(x, arr[2]) / factorial(arr[2])) + (pow(x, arr[4]) / factorial(arr[4])) - (pow(x, arr[6]) / factorial(arr[6])) + (pow(x, arr[8]) / factorial(arr[8]));
        if (sin(x) != a)
            printf("sin(%lf) = %lf",x,a);
        // else
            // puts("hii");
    }
}
int main()
{
    printf("input the term of series : ");
    scanf("%d", &terms);
    sinx(terms);
}