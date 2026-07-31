#include <stdio.h>
int main()
{
    int i, j, r;
    printf("Enter the row : ");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r; j++)
        {
            if((i==1 && j==1)||(i==r && j==1) ||(i==r&&j==r)||(i==1&&j==r))
                printf("*  ");
            else
                printf("   ");
            
        }
    }
    return 0;
}