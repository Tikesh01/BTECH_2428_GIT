#include<stdio.h>
int main(){
    float length,breadth,peri,area;
    printf("Put the length : ");
    scanf("%f",&length);
    printf("Put the breadth : ");
    scanf("%f",&breadth);
    area=length*breadth;
    peri=2.0*(length+breadth);
    if (area>peri)
    {
        printf("Area{%f} is greater than perimeter{%f} ",area,peri);
    }
    if(peri>area)
    {
        printf("Perimeter{%f} is greater than area{%f}",peri,area);
    }
    if( area==peri)
    {
        printf("Both are equal %f",area);
    }
    
    
    return 0;
}