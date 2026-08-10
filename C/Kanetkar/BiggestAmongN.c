#include <stdio.h>
int main()
{
    int arr[5] = {1, 3, 7, 5, 92}, i;
    int max_num = arr[0],diff;
    for (i = 0; i < 5; i++)
    {
        if (max_num < arr[i])
            max_num=arr[i];
    }
    printf("%d",max_num);

}