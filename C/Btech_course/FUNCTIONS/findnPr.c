#include<stdio.h>
int P(int n,int r)
{
    int fact1=1,fact2=1,i,k,p;
    for ( i = 1; i <= n; i++)
    {
        fact1=fact1*i;
    }
    k=(n-r);
    for ( i = 1; i <=k; i++)
    {
        fact2=fact2*i;
    }
    p=fact1/fact2;
    return(p);
}
int main(){
    int  permutation,n,r;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    permutation=P(n,r);
    printf("The value of nPr = %d",permutation);
    return 0;
}