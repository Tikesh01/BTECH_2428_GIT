#include <stdio.h>
int main()
{
    int i, j,k, r, c;
    // printf("Enter the row : ");
    // scanf("%d",&r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);
    for (i = 1; i <= c; i=i+2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        for ( k = 65; k <= 65+i; k++)
        {
            printf("%c ",k);
        }
        printf("\n");
    }

    return 0;
}