#include<stdio.h>
int main()
{
    int i=0;
    puts("PRINTING ALL THE ASCII VALUES AND EQUIVALENTS : ");
    printf("ASCII\tEQUIVALENT");
    while(i<=255)
    {
        printf("\n%d  -->  %c",i,(char)i);
        i++;
    }
    return 0;
}