#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen("aisehi.txt","w");
    char ch = '2';
    putc(ch, fptr);
    char v = getc(fptr);
    printf("%c ",v);
    fclose(fptr);
    return 0;
}