#include <stdio.h>
int linearSearch(int *p, int key, int i, int n)
{
    if (key == *p)
    {
        return i;
    }
    if(i>=n)
        return NULL;
    linearSearch(p + 1, key, i+1,n);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int item;
    int N = sizeof(arr)/4;
    printf("Enter the item to search : ");
    scanf("%d", &item);

    int ans = linearSearch(arr, item, 0,N);
    if (ans == NULL)
        printf("Not found");
    else
        printf("Found at position %d", ans);

    return 0;
}