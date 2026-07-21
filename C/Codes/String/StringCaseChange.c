#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], atr[20];
    printf("Enter the String : ");
    scanf("%c[^\n]s",str);
    // gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 123 )
        {
            atr[20] = ((int)str[i] - 97) + 65;
            printf("%s", atr);
            // puts(atr);
        }
        else if (str[i] >= 65 && str[i] <= 91 )
        {
            atr[20] = (str[i] - 'A') + 'a';
            printf("%c", atr[i]);
        }

        i++;
    }
    return 0;
}