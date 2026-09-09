#include <stdio.h>
#include <ctype.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    fp = fopen("tikesh.txt", "w");
    putc(ch, fp);
    fclose(fp);
    getch();
}