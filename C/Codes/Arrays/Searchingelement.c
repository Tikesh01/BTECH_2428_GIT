#include <stdio.h>
int main()
{
    int arr[5] = {10, 70, 54, 33, 27}, i, max;
    printf("Enter the numbet to search : ");
    scanf("%d", &max);
    for (i = 0; i < 5; i++)
    {
        if (max == arr[i])
        {
            printf("The number is here");
        }
        else
        {
            printf("The number is not Availabel");
            break;
        }
    }
    return 0;
}