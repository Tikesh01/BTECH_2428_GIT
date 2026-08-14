#include<stdio.h>
void power()
{
    int a ,b,ans=1;
    printf("Enter the base : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    for (int  i = 1; i <= b; i++)
    {
        ans = ans*a;
    }
    printf("%d",ans);
}
int main()
{
    power();
    
    return 0; 
}