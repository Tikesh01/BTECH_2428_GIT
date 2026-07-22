// 1
// 1 3
// 1 3 5
// 1 3 5 7
#include <stdio.h>
int main()
{
    int n, i, j, odd;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    // printf("Enter the odd number upto print triangle : ");
    // scanf("%d",&odd);
    for (i = 2; i <= 2*n; i=i+2)
    {
        for (j = 1; j <= i; j=j+2)
        {
            // if (j % 2 != 0)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}