#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("aisehi.txt", "r");
    char ch;
    ch = getc(fp);
    printf("%c", ch);

    fclose(fp);
    return 0;
}