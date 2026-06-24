#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the third number: ");
    scanf("%f",&c);
    if (a>b)
    if (a>c)
    {
        printf("a is the greatest");
    }
    if (b>a)
    if(b>c)
    {
        printf("b is the greatest");
    }
    if (a<c)
    if(b<c)
    {
        printf("c is the greatest");
    }
    if (a==b==c)
    {
        printf("All numbers are equal");
    }
     if ((a=b=c)==0)
    {
        printf("All numbers are equal to 0");
    }
    if ((a==0)<(b==c))
    {
        printf("a=0\nc=b");
    }
    // if ((b=0)<(a=c))
    // {
    //     printf("b=0\na=c");
    // }
    
    
     return 0;
}