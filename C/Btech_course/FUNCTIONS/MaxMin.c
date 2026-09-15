// for 4 degree equation single variable.
#include <stdio.h>
#include <math.h>

int maxmin(int n)
{
    printf("Enter the degree of equation : ");
    scanf("%d", &n);
    float a, b, c, d, e;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    float fx, x;
    if (n == 4)
    {
        /* code */
    }

    for (x = -10; x <= 10; x = x + (0.5))
    {
        fx = ((a * pow(x, 4)) + (b * pow(x, 3)) + (c * pow(x, 2)) + (d * x) + e);
        if (fx == 0)
        {
            printf("%f ", x);
        }
    }

    return 0;
}