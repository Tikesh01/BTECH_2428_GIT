// 18.Check whether the given string is a palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], revstr[20];
    int len, i;
    printf("Enter the string : ");
    gets(str);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        revstr[i] = str[(len - 1) - i];
    }
    revstr[i] = '\0';
    printf("Reversed string : %s\n", revstr);
    if (str == revstr)
        printf("%s is palindrome", str);
    // else
    //     printf("\n%s is not palindrome",str);

    return 0;
}