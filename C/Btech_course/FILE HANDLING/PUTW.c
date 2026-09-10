#include <stdio.h>
#include<ctype.h>
int main()
{
    FILE *fp;
    fp = fopen("tikesh.txt","w");
    int a = 2;
    putw(a,fp);
    fclose(fp);
}