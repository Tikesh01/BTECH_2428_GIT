#include<stdio.h>
int factorial(int num)
{
    if (num==1)
        return 1;
    return num*factorial(num-1);
}
int main()
{
    int num, ans;
    printf("Enter th number : ");
    scanf("%d",&num);
    ans= factorial(num);
    printf("%d! = %d",num,ans);
    return 0;
}
