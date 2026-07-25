// //    1 2 3 4...n
// //    1 2 3 4
// //    1 2 3 4
// //    1 2 3 4
//       .
//       .
//       .
//       n

#include <stdio.h>
int main()
{
    int arm, i, j;
    printf("Enter the arm to print that pattern : ");
    scanf("%d", &arm);
    for (i = 1; i <= arm; i++)
    {
        for (j = 1; j <= arm; j++)
        { 
            printf("%d  ", j);
        }
        printf("\n");
    }
    return 0;
}