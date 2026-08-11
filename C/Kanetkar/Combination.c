// Write a program to generate all combinations of 1, 2 and 3 using for loop.
#include <stdio.h>
int swap(int *ptr)
{
    int temp = *ptr;
    *ptr = *(ptr + 1);
    *(ptr + 1) = temp;
}
int main()
{
    int arr[3] = {1, 2, 3}, j;
    for (j = 0; j < 6; j++)
    {
        printf("(%d %d %d)\n", arr[0], arr[1], arr[2]);
        swap(arr);
        swap(arr);
    }

    return 0;
}