// Program to find out if number is three digit or not
#include<stdio.h>
int main(){
    int i;
    printf("Enter the positive number : ");
    scanf("%d",&i);
    if (99<i && i<1000)
    {
        printf("it is three digit numbers");
    }
    else
    {
        printf("it is not a three digit number");
    }
    
    

    return 0;
}