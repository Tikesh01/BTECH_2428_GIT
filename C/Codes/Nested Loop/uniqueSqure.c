#include <stdio.h>
// Q.. Print the pattern ..
//   *
//  ***
//   *
int main()
{
    int i, j, r;
    printf("Enter the row : ");
    scanf("%d", &r);
    // printf("Enter the column: ");
    // scanf("%d",&c);
    if (r % 2 != 0)
    {
        for (i = 1; i <= r; i++)
        {
            if (i != r / 2 + 1)
            {
                for (j = 1; j <= r / 2; j++)
                    printf("   ");
                for (j = 1; j <= 1; j++)
                    printf("*");
                for (j = 1; j <= r / 2; j++);
                    printf("   ");
            }
            else if (i == r / 2 + 1)
            {
                for (j = 1; j <= r; j++)
                    printf("*  ");
            }
            printf("\n");
        }
    }
    return 0;
}