#include <stdio.h>
int n;
int dec(int n)
{
    if(n==0) return 1;
    else{
        printf("%d ",n);
        n=dec(n-1);
    }  
}
int main()
{
    printf("Enter the nth term : ");
    scanf("%d", &n);
    dec(n);
    return 0;
}