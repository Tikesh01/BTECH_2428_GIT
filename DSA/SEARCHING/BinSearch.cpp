 #include <stdio.h>
int BinSearch(int *ptr, int N, int key)
{
    int end = N, beg = 1, mid = (beg + end) / 2;
    if (key < *(ptr + mid))
    {
        end = mid - 1;
    }
    else if (key > *(ptr + mid))
    {
        beg = mid + 1;
    }
    mid = (beg + end) / 2;
    if (*(ptr + mid) == key && mid < N)
        return mid;
    else if (*(ptr + mid) != key && mid >= N)
    {
        return NULL;
    }
    BinSearch(ptr, N, key);
}
int main()
{
    int arr[] = {10, 20, 33, 40, 52, 69, 72, 90};
    int N = sizeof(arr) / 4;
    int key;
    printf("Enter the item to Search : ");
    scanf("%d", &key);
    int ans = BinSearch(arr, N, key);
    if (ans != NULL)
        printf("%d", ans);
    else if(ans == NULL)
        printf("Not Found");

    return 0;
}