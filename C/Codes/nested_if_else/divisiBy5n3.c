#include<stdio.h>
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if (a%3==0)
    {
        if (a%5==0)
        {
            printf("The number is divisible by 3 n 5");
        }
        else
        {
            printf(" The number is not divisible to both");
        }
        
        
    }
    else{
        printf(" The number is not divisible to both");
    }
    

    return 0;
}