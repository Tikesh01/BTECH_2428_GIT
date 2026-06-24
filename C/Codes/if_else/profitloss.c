//Program to tell if profit is made or loss
#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the cost price : ");
    scanf("%f",&a);
    printf("Enter the selling price : ");
    scanf("%f",&b);
    if (a<b)
    {
        b=b-a;
        printf("Congrats! you made profit ₹%f.",b);
    }
    if (a>b)
    {
        a=a-b;
        printf("Uups! you got loss of ₹%f",a);
    }
    else 
    {
        printf("Neither profit nor loss....\nNext time you'll definitly made profit");
    }
    

    return 0;
}