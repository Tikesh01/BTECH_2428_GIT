#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("tikesh.txt","r");
    int b = getw(fp);
    printf("%d",b);
    fclose(fp);
}