//QUE:Take positive integer input and tell if it is even or odd.
#include<stdio.h>
int main(){
    int a;
    printf("\nEnter the positive integer: ");
    scanf("%d",&a);
    if (a==0)
    {
        printf(" The number is zero ");
    }
    else if (a%2==0)
    {
        printf(" it is an even number\n ",a);
    }
    else
    {
        printf(" it is a odd number ",a);
    }
    
    

    
    return 0;
}