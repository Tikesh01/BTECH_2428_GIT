// Problem 27 : Print all alphabet and their corresponding ASCII values
#include <stdio.h>
int main()
{
    // TYPE CASTING
    //  int x=67;
    //  char ch = (char)x;
    //  printf("%c",ch);

    char i;
    for (i = 'A'; i <= 'Z'; i++)
    {
        int h = (int)i;
        printf("\n%d -->", h);
        printf(" %c", i);
    }

    // OR

    // int i;
    // for (i = 65; i <= 90; i++)
    // {
    //     char ch = (char)i;
    //     printf("\n%c -->", ch);
    //     printf(" %d", i);
    // }

    return 0;
}