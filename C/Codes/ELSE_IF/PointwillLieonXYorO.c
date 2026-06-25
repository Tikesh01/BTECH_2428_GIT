#include<stdio.h>
int main(){
    float x,y;
    printf("Enter the x : ");
    scanf("%f",&x);
    printf("Enter the y : ");
    scanf("%f",&y);
    if (x==0 && y==0)
    {
        printf("Origin");
    }
    else if (x==0)
    {
        printf("Point will lie on Y axis");
    }
    else if (y==0)
    {
        printf("Point will lie on X axis");
    }
    else
    {
        printf("Anywhere on the 2d area");
    }
    return 0;
}
