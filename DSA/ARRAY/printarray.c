#include <stdio.h>
void printarray(int arr[], int size)
{
    printf("{ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}
int main()
{
    int arr[1000], size = sizeof(arr) / 4;
    printarray(arr, size);
}