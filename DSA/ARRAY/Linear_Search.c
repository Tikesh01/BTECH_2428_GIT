#include<stdio.h>
int main()
{
    int arr[] = {77,99,11,2,35, 7,90,9,79,29,10};
    int n = sizeof(arr)/sizeof(int);
    int item;
    printf("Enter the item : ");
    scanf("%d",&item);
    arr[n + 1] = item;
    // printf("%d",arr[n+1]);
    int loc  = 0;
    while(arr[loc] != item)
    { 
        loc++;
    }
    if(loc == n+1)
    {
        printf("HII");
    }
    printf("%d\n",loc);
    printf("%d",arr[loc]);

    return 0;
}