// Print elements greater than x
#include <stdio.h>
int main()
{
    int x, arr[10] = {2, 6, 23, 5, 43, 8, 9, 9, 70, 68}, i;
    printf("Enter the number to get greatest of it : ");
    scanf("%d", &x);
    int a=0;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > x)
        {
            printf("%d ", arr[i]);//nubers jo x se bade hain
            a++;
        }
    }
    printf("%d",a);//kitne number x se bade hain
    return 0;
}