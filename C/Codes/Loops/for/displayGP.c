#include <stdio.h>
#include <math.h>
int main()
{
    int n, i,r=2;
    printf("Enter the number of term : ");
    scanf("%d", &n);
    for ( i = 1; i <= pow(r,n-1); i=i*r)
    {
        printf("%d ",i);
    }
    
}
