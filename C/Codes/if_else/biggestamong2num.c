#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if (a>b)
    {
        printf("a is the greatest");
    }
    if(b>a)
    {
        printf("b is the greatest");
    }
    if (b=a)
    {
        printf("They are equal");
    }
    
    else
    {
        printf("They are zero");
    }
    
    
    
    return 0;
}