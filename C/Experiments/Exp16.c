// 16.Multiplication of two matrices.
#include <stdio.h>
int main()
{
    int i, j, r1, r2, c1, c2,a;
    printf("Enter the row of 1st Matrices : ");
    scanf("%d", &r1);
    printf("Enter the colum : ");
    scanf("%d", &c1);
    int matrix1[r1][c1];
    printf("Input the First matrix : \n"); // Fist matrix
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &matrix1[i][j]);

    printf("\nEnter the row of 2nd Matrices : ");
    scanf("%d", &r2);
    printf("Enter the colum : ");
    scanf("%d", &c2);
    int matrix2[r2][c2], result[r1][c2];
    printf("Input the second matrix : \n"); // second matrix
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &matrix2[i][j]);

    printf("\nThe Answer : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        { 
            result[i][j]=0;
            for ( a = 0; a < c1; a++)
                result[i][j] = matrix1[i][a] * matrix2[a][j] + result[i][j];
            printf("%d  ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}