#include <stdio.h>
int sum=0,i, n;
#define overtime_slary_per_hour 12;
int sum_of_n(int n, int arr[n])
{
    for (i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    printf("Enter the number of Employees : ");
    scanf("%d", &n);
    int emp_Overtime[n] ,i;
    printf("Input the overtime of employees : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &emp_Overtime[i]);
    }
    int Overtime_Rs[10], total_rs, j = 1;
    printf("Em no.\tOvertimed slary");
    for (i = 0; i < n; i++)
    {
        Overtime_Rs[i] = (emp_Overtime[i] * 12);
        printf("\n  %d   \t %d", j, Overtime_Rs[i]);
        j++;
        total_rs = sum_of_n(n, Overtime_Rs);
    }
    printf("\nTotal overtimed salary : %d", total_rs);

    return 0;
}