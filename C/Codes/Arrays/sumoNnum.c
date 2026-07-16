#include <stdio.h>
int main()
{
    int n, i, sum = 0, j;
    printf("How many numbers do you want to add : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the %d numbers : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    
    printf("%d", sum);
    return 0;
}