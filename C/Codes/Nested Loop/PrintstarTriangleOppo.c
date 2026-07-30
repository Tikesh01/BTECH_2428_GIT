#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the rows : ");
    scanf("%d", &n);
    for (i = 0; i < n;)
    {
        for (j = 0; j < n; j++)
        { 
            printf("*  ");
        }
        n--;
        printf("\n");
    }
    return 0;
}