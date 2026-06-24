// Write a program in [C]) that checks if a
// number entered by the user is positive, 
// negative, or zero. Use an if condition to
// determine the result and print an appropriate 
#include<stdio.h>
int main(){
    float a;
    printf("Put the number: ");
    scanf("%f",&a);
    if (a>0)
        printf("%f is a positive number",a);
    if (a<0)
        printf("%f is a negative number",a);
    // if (a==0)
    // {
    //     printf("\nit is a %f\n",a);
    // }
    else
    {
        printf("\nit is a %f\n",a);
    }
    
    
    

    return 0;
}