#include <stdio.h>
int *Duplicate(int *ptr, int N)
{
    int *dup;
    int a = 0;
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
            if (ptr[i] == ptr[j])
            {
                dup[a] = ptr[i];
                a++;
            }

    return dup;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 10, 10, 2, 6, 9, 7};
    int N = sizeof(arr) / sizeof(int);
    int *duplicates = Duplicate(arr, N);
    int i=0;
    printf("Duplicated Values in Array : \n");
    while (duplicates[i])
    {
        printf("%d ", duplicates[i]);
        i++;
    }
}