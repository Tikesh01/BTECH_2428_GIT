#include<stdio.h>
int main(){
    int i ,n, ans;
    printf("Enter the number to get table : ");
    scanf("%d",&n);
    for ( i = 1; i <= 10; i++)
    {
        ans=i*n;
        printf("%d ",ans);
    }
    
    
    return 0;
}