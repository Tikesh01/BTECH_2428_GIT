// positive integer is entered through the keyboard, write a program to obtain the prime factors of the number. Modify the function suitably to obtain the prime factors recursively.
#include <stdio.h>
int i, n, factor;
int PRIME_FACTOR_REc(int i)
{
    if (n % i == 0)
    {
        int temp = 0;
        factor = i;
        for (int j = 2; j < factor; j++)
            if (factor % j == 0)
                temp = 1;
        if (factor != 1)
            if (temp == 0)
                printf("%d ", factor);
    }
    i--;
    PRIME_FACTOR_REc(i);
}
int main()
{
    printf("Enter the number : ");
    scanf("%d", &n);
    i = n / 2;
    PRIME_FACTOR_REc(i);
}