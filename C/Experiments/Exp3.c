#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20], result[20];
    printf("Enter the sring : ");
    // scanf("%c[^\n]s", ch);
    gets(ch);
    int i;
    // while ((ch = getchar()) != '\n')
    for (i = 0; i <= 20; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            result[i] = ch[i] + 'A' - 'a';
            printf("%s", result[i]);
        }
        else if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            result[i] = ch[i] + 'a' - 'A';
            printf("%s", result[i]);
        }
    }
    return 0;
}