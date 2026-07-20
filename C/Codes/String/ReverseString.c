#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the number of Characters : ");
    scanf("%d", &n);
    char str[n+1];
    printf("Enter the String : ");
    int i;
    for (i = 0; i <= n; i++)
    {
        scanf("%c",&str[i]);
    }
    for (i = n ; i > 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}