#include <stdio.h>
#include<conio.h>
int check(int ch)
{
    if (ch >= 45)
        return 100;
    else
        return (10 * 10);
}
int main()
{
    int i = 45, c;
    c = check(i);
    printf("%d", c);
    getch();
    return 0;
}