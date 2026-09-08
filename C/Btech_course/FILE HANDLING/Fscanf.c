#include <stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Sample.txt","r");
    int str = fscanf(fptr,"%d");
    printf("%d",str);
    fclose(fptr);

    return 0;
}