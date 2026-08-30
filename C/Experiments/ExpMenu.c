#include <stdio.h>
int n, i;
int odd_even(int n)
{
    printf("Enter the Number : ");
    scanf("%d", &n);
    if (n % 2 == 0)
        puts("Even Number");
    else if (n % 2 != 0)
        puts("Odd Number");
}
int Factorial(int n)
{
    int fact = 1;
    printf("Enter the Number to get factorial : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact = fact * i;
    printf("%d! = %d", n, fact);
}
int fibonacci_sereis(int n)
{
    int a1 = 1, a2 = 1, a3;
    printf("Enter the number of term : ");
    scanf("%d", &n);
    printf("1, 1");
    for (i = a1; i <= n - 2; i++)
    {
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
        printf(", %d", a3);
    }
}
int prime(int n)
{
    int a = 0;
    printf("Enter the Number to check prime : ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
        if (n % i == 0)
            a = 1;
    if (a == 0)
            printf("\nPrime number");
        else if(a==1)
            printf("\nNot prime number");
}

int main()
{
    int choice;
    printf("\nPress 1 To check odd Even\nPress 2 to get factorial\nPress 3 to chek prime number\nPress 4 to get fibonacci series\n\nWhat's your Choice : ");
    scanf("%d", &choice);
    if (choice == 1)
        odd_even(n);
    else if (choice == 2)
        Factorial(n);
    else if (choice == 4)
        fibonacci_sereis(n);
    else if(choice==3)
        prime(n);
}