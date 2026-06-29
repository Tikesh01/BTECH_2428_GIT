//RULES FOR BEING THE SIDES OF A TRIANGLE:
//a+b>c
//a+c>b
//b+c>a
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first side: ");
    scanf("%d",&a);
    printf("Enter the second side: ");
    scanf("%d",&b);
    printf("Enter the third side: ");
    scanf("%d",&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("invalid triangle");
    }
    

}