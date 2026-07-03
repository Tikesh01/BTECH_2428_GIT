#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of term : ");
    scanf("%d",&n);
    for ( i = 4; i <=3*n+1 ; i=i+3)
    {
        printf("%d ",i);
    }
    
}