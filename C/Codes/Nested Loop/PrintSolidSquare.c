#include<stdio.h>
int main(){
    int arm,i,j;
    printf("Enter the arm of the Squre : ");
    scanf("%d",&arm);
    for ( i = 0; i < arm; i++)
    {
        for ( j = 0; j < arm; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    

}