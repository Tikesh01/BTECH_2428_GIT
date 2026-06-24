// Program to find out if year is leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Put the year here: ");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }
    

    return 0;

}