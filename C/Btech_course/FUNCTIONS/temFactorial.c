#include<stdio.h>
int main()
{
    int fact1=1, fact2=1,fact3=1,i,k,c,n,r;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    for ( i = 1; i <= n; i++)
    {
        fact1=fact1*i;
    }
    for ( i = 1; i <= r; i++)
    {
        fact2=fact2*i;
    }
    k=(n-r);
    for ( i = 1; i <=k; i++)
    {
        fact3=fact3*i;
    }
    c=fact1/(fact2*fact3);
    printf("%d\n",fact1);
    printf("%d\n",fact2);
    printf("%d\n",fact3);
    printf("%d\n",c);
    return 0;
}