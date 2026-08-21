// PRIME FACTORS - vo number jo n ko divide karten  hain par khud prime nuber hote hain

#include <stdio.h>
#include <conio.h>
int n;
int prime_factor(int n)
{
    int i, j, factor, tem = 0;
    for (i = 2; i <= n/2; i++) // Checking for the numbers which can divide the N (input number)
    {
        if (n % i == 0) // main process
        {
            factor = i;
            // Now cheking for factor is prime or not
            for (j = 2; j < factor; j++)
            {
                if (factor % j == 0)// is factor prime?
                    tem = 1;
            }
            if (tem == 0)// yes factor is prime!
            {
                printf("%d ", factor);
            }
        }
    }
}
int main()
{
    // int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    prime_factor(n);

    getch();
    return 0;
}