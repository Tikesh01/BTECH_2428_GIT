#include <stdio.h>
#include "math.h"
int i;
float average, percent = 9, sum = 0;
float Student_Marks(int *markptr)
{
    for (i = 0; i < 3; i++)
    {
        sum = sum + *(markptr + i);
    }
    average = sum / 3;
    // percent = (s* 3) / 100.0;
    return average;
    // return percent;
}
int main()
{
    int marks[3];
    printf("Enter the Marks of 3 suns of a student : ");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &marks[i]);
    }
    average = Student_Marks(marks);
    printf("The average mark and the percentage = %f", average);
    // printf("\nThe percent = %f", percent);
}