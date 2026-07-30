// ABCD....n
// ABCD
// ABCD
// ABCD
//    .
//    .
//    .
//    n
#include <stdio.h>
int main()
{
    int n, i, j,a;
    
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    // printf("Enter the alphabet upto print : ");
    // scanf("%d", &a);
    for (i = 0; i < n; i++)
    {
        for ( j = 65; j < 65+n; j++)
        {
            char ch = (char)j;//type casting
            printf("%c  ", ch);
        }
        printf("\n");
    }
    return 0;
}