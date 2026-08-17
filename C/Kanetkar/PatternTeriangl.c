#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, r;
    printf("Enter the num of rows : ");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j % 2 == 0)
                printf("*  ");
            if (j%2!= 0)
                printf("   ");
        }
        printf("\n");
    }

    getch();
    return 0;
}