#include<stdio.h>
int main()
{
    int arr[] = {22,664,90,22,80,12,9,1};
    int item,a = 0;
    printf("Enter the item to search : ");
    scanf("%d", &item);
    for(int i =0; i<sizeof(arr)/sizeof(int); i++)
    {
        if(item == arr[i])
        {
            printf("Available");
            a = 0;
            break;
        }
        else
        {
            a = 1;
        }   
    }
    if(a==1)
    {
        printf("Not available");
    }

    return 0;
}