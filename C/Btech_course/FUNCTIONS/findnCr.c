#include<stdio.h>
int combination(int n, int r)
{
    int fact1=1, fact2=1,fact3=1,i,k,c;
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
    return c;
}
int main(){
    int combination1,n1,r1;
    printf("Enter the value of n : ");
    scanf("%d",&n1);
    printf("Enter the value of r : ");
    scanf("%d",&r1);
    combination1=combination(n1,r1);
    printf("The value of nCr is = %d\n",combination1);

    int combination2,n2,r2;
    printf("Enter the value of n : ");
    scanf("%d",&n2);
    printf("Enter the value of r : ");
    scanf("%d",&r2);
    combination2=combination(n2,r2);
    printf("The value of nCr is = %d",combination2);
    
    return 0;
}