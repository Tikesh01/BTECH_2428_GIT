#include <stdio.h>
#include <string.h>
int calculator()
{
    int arr[20], calc, j; 
    scanf("%d", &arr[0]);
    calc = arr[0];
    char str[3];
    int i = 1;
    while (str[0] != 'd')
    {
        scanf("%s", str);
        scanf("%d", &arr[i]);
        if (str[0] == '+')
        {
            calc = calc + arr[i];
        }
        else if (str[0] == '-')
        {
            calc = calc - arr[i];
        }
        if (str[0] == 'd')
        {
            printf("%d", calc);
        }
        // // else if (str[0] == '*')
        // {
        //     calc = calc  * arr[i];
        // }
        i++;
    }
    return calculator();
}
int main()
{
    printf("Enter the numbers : ");
    calculator();
    return 0;
}