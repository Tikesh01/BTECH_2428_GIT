#include <stdio.h>
int a1, a2, n;
int ap(int a1, int a2, int n)
{
    int d, i;
    d = (a2 - a1);
    for (i = a1; i < a1 + n * d; i = i + d)
    {
        printf("%d ", i);
    }
}
int main()
{
    int series;
    printf("Enter the first term a1 : ");
    scanf("%d", &a1);
    printf("Enter the enter term a2 : ");
    scanf("%d", &a2);
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    series = ap(a1, a2, n);
    return 0;
}