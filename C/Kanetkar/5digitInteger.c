// A 5-digit positive integer is entered through the keyboard, write a function to calculate sum of digits of the 5-digit number:
// (1) Without using recursion
// (2) Using recursion
#include <stdio.h>
#include <conio.h>
int n,sum = 0, remainderr,sum2=0;
int Sum_5digitINT(int n)
{
    int i;
    if (n >= 10000 && n <= 99999)
        for (i = 0; i < 5; i++)
        {
            remainderr = n % 10;
            n = n / 10;
            sum = remainderr + sum;
        }
    printf("Without recursion = %d", sum);
}
int With_recursion(int n)
{
    if (n == 0)
        return sum2;
    remainderr = n % 10;
    sum2 = sum2 + remainderr;
    With_recursion(n / 10);
}
int main()
{
    int n;
    printf("Enter 5 digit integer : ");
    scanf("%d", &n);
    Sum_5digitINT(n);
    int ans = With_recursion(n);
    printf("\nWith recursion = %d", ans);

    getch();
    return 0;
}