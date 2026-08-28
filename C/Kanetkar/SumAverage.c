#include <stdio.h>
#include <math.h>
#include <conio.h>
// Steps to find SD
// 1. find average of data set(given numbers)
// 2. subtract the mean from each numbers
// 3. and squre the subtraction of them
// 4. find the average of Squred subtraction (Varience)
// 5. square root the varience

float ave, SD, sum = 0, temp, subtract, sqr_subtract, varience, temp2 = 0, sqrt_variace;
int i;
float average_Sdeviation(int *arrptr)
{
    for (i = 0; i < 5; i++)
    {
        temp = *(arrptr + i); // Play with memorry allocation
        sum = temp + sum;
    }
    ave = (sum / 1.0) / (5 / 1.0); // 1 .Average find out
    for (i = 0; i < 5; i++)
    {
        temp = *(arrptr + i);
        subtract = ave - temp;              // subtracting mean from each data point
        sqr_subtract = subtract * subtract; // squaring
        temp2 = temp2 + sqr_subtract;
    }
    varience = temp2 / 5; // the average of the sqr of difference of a average and each data point
    sqrt_variace = sqrt(varience);
    SD = sqrt_variace; // same
    return ave;
    return SD;
}
int main()
{
    int arr[5], i;
    printf("Enter 5 Numbers : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    ave = average_Sdeviation(arr); // No '&' used because array is constant pinter
    printf("\nThe Average  =  %f", ave);
    printf("\nThe standard deviation =  %f", SD);
    
    getch();
    getch();
}