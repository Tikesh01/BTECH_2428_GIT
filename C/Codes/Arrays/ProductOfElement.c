#include<stdio.h>
int main()
{
    int arr[5]={2,2,2,2,2},i,mult=1;
    for ( i = 0; i < 5; i++)
    {
        mult =mult*arr[i];
    }
    printf("%d",mult);
    return 0;
}