#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the number to know digits : ");
    scanf("%d",&n);
    while (n>0)//n!=0
    {
        n=n/10;
        count++;
    }
    printf("Total digits = %d",count);
    
}