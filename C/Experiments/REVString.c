#include <stdio.h>
#include <string.h>
int main()
{
    char s[50], r[50], i;
    printf("Enter the string : ");
    gets(s);
    int len = strlen(s);
    int len2 = len;
    for (i = 0; i < len; i++)
    {
        r[len2 - 1] = s[i];
        len2--;
    }
    for (i = len2 - 1; i <= 0; i--)
    {
        printf("%c", r[i]);
    }
}