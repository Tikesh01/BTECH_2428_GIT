//Program to print absolute value of given integer
#include<stdio.h>
int main(){
    int i,k;
    printf("Put the integer to get absolute value of that : ");
    scanf("%d",&i);
    if (i<0)
    {
        k=(-1)*i;
        printf("Absolute value = %d",k);
    }
    else
    {
        printf("absolute value = %d",i);
    }
    
    

    return 0;
}