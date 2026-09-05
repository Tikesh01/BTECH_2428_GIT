// 15.Addition and subtraction of two matrices.
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("The size of the Matrices : ");
    scanf("%d", &n);
    int matrix1[n][n], matrix2[n][n], result[n][n];
    printf("Input the First matrix : \n"); // Fist matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Input the second matrix : \n"); // second matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix2[i][j]);

    printf("The Summation : \n");
    for (i = 0; i < n; i++) // Summation
    {
        for (j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }
    printf("The Subtraction : \n");
    for (i = 0; i < n; i++)//Subtraction
    {
        for (j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}