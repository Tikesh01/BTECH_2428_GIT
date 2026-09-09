#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp;
    fp=fopen("tikesh.txt","r");
    char ch = getc(fp);
    printf("%c",ch);
    fclose(fp);
}