#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float a, b;
    printf("Enter the base : ");
    scanf("%f", &a);
    printf("Enter the power : ");
    scanf("%f", &b);
    float ans = pow(a, b);
    printf("%f", ans);

    for (int i = 0; i < 1000; i++)
    {
        getch();
    }
    getch();
    return 0;
}