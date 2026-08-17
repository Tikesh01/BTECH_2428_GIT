// Write a program to produce the following output:
// a b c d e f g f e d c b a
// a b c d e f   f e d c b a
// a b c d e       e d c b a
#include <stdio.h>
int main()
{
    int i, j;
    int a = 65, g = 71, f = 70;
    for (i = 65; i <= 71; i++)
    {
        for (j = a; j <= g; j++)
        {
            printf("%c  ", (char)j);
        }
        if (i >= 66 && i <= 71)
            printf("   ");
        for (j = f; j >= 65; j--)
        {
            printf("%c  ", (char)j);
        }
        if (i >= 66 && i <= 71)
            {
                printf("   ");
            }
        printf("\n");
        g--;
        f--;
    }

    return 0;
}