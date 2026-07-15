#include <stdio.h>
int main()
{
    int arr[10] = {1, 4, 6, 8, 4, 7, 2, 9, 12, 43}, i, ans;

    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
            printf("%d ", arr[i]);//even indexed element me 10 jodna h 
        }
        else if(i % 2 != 0)
        {
            arr[i] = arr[i] * 2;
            printf("%d ",arr[i]);//odd indexed elemen me 2 ka guna karna h 
        }
    }
    return 0;
}