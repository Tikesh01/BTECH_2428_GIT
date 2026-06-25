//Program to find out if number is divisible by 5 or 3
#include<stdio.h>
int main(){
    int i;
    printf("Enter the positive number : ");
    scanf("%d",&i);
    if (i%3==0 || i%5==0)
    {
        printf("It is divisible to both");
    }
    if (i%3==0 && i%5!=0)
    {
        printf("It is divisible by 3");
    }
    if (i%5==0 && i%3!=0 )
    {
        printf("It is divisible by 5");
    }
    if(i%3!=0 && i%5!=0)
    {
        printf("it is not divisible to both");
    }
    
    

    return 0;
}