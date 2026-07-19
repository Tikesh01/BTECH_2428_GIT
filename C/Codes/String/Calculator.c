#include <stdio.h>
#include <string.h>
int calulator(int a, int b)
{
    char str[1];
    scanf("%d", &a);
    scanf("%s", str);
    scanf("%d", &b);

    if (str[0] == 43)
    {
        int sum = a + b;
        printf("%d", sum);
    }
    else if (str[0] == '-')
    {
        int sub = a - b;
        printf("%d", sub);
    }
    else if (str[0] == '*')
    {
        int mult = a * b;
        printf("%d", mult);
    }
    else if (str[0] == '/')
    {
        int div = a / b;
        printf("%d", div);
    }

    return calulator(a, b);
}
int main()
{
    int a, b;
    calulator(a, b);
    return 0;
}