// Check if given matrix is identity or not?
#include <stdio.h>
int main()
{
    int i, j, k, n, l, a = 0;
    printf("Enter the size of square Matrix(n x n) : ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Input the Matrix : \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (k = 0; k < n; k++) // procces checking identical
        for (l = 0; l < n; l++) // Rule FOR Id MATRIX
        {
            if (k == l && matrix[k][l] != 1) // DIAGONAL must BE 1 other than
                a = 1;   
            else if (k != l && matrix[k][l] != 0) // Non-diagonal = 0
                a = 1;
        }
    if (a == 0) // output
        printf("Identity Matrix");
    else
        printf("Not Identity ");
    return 0;
}