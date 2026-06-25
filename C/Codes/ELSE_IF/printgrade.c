// Print Grades given to corresponding marks
// 90-100 excellent
// 80-90 very good
// 70-80 good
// 60-70 can do better
// 50-60 average
// 40-50 below average
// <40 fail
#include<stdio.h>
int main(){
    int m;
    printf("put the percentage : ");
    scanf("%d",&m);
    if (90<=m && m<=100)
    {
        printf("Excelent");
    }
    else if (80<=m)
    {
        printf("Very Good");
    }
    else if (70<=m)
    {
        printf("good");
    }
    else if (60<=m)
    {
        printf("Can do better");
    }
     else if (50<=m)
    {
        printf("Average");
    }
    else if (40<=m)
    {
        printf("Bellow Average");
    }
    else{
        printf("Fail");
    }
    
    return 0;
}