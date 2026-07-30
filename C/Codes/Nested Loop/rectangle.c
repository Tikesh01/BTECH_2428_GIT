// ******
// *    *
// *    *
// ******
#include <stdio.h>
int main()
{
    int i, j, k, r, c;
    printf("Enter the row : ");
    scanf("%d", &r);
    printf("Enter the column : ");
    scanf("%d", &c);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if ((i == 1 || j == 1) || (i == r || j == c))
                printf("*  ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}