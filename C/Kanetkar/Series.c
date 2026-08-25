// Write a program to add first seven terms of the following series using a for loop:
// 1/1! + 2/2! + 3/3!……
#include <stdio.h>
int main()
{
    int arr[7], fact[7] = {1, 1, 1, 1, 1, 1, 1}, j = 0;
    float divide[7],sum_of_terms = 0;
    for (int n = 1; n <= 7; n++)
    {
        for (int i = 1; i <= n; i++)
        {
            fact[j] = fact[j] * i;
        }
        printf("%d ", fact[j]);
        divide[j] = (n * 1.0) / fact[j];
        j++;
    }
    printf("\n");
    for (j = 0; j < 7; j++)
    {
        printf("%f ", divide[j]);
        sum_of_terms = sum_of_terms + divide[j];
    }
    printf("\nThe sum of all 7 terms = %f",sum_of_terms);
}