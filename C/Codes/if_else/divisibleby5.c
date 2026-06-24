//QUES: take positve integer input and tell if it is divisible by 5 or not.
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if (a%5==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("NOT divisible");
    }
    
    

    return 0;
}