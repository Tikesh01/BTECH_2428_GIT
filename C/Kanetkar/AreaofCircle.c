#include <stdio.h>
float areac(float r)
{
    float a = 3.145 * r * r;
    return a;
}

int main()
{
    float area, radius = 1;
    area = areac(radius);
    printf("%f", area);
}
