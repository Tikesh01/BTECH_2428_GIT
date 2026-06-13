#include <stdio.h>
int linearSearch(int arr[], int v)
{
    int i = 0;
    while (arr[i])
    {
        if (arr[i] == v)
            return i;
        i++;
    }
    return NULL;
}
int BinarySearch(int arr[],int N, int v)
{
    int e = N, b = 0, m = (e + b) / 2;
    int i=0;
    while (arr[i])
    {
        if (arr[m] == v)
            return m;
        else if (arr[m] < v)
            b = m + 1;
        else
            e = m + 1;
        m = (e + b) / 2;
        i++;
    }
    return m;
}
void insert(int *ptr, int v)
{
    int i = 0;
    while (ptr[i])
        i++;
    ptr[i] = v; // insert value at last
}
void delete(int *ptr, int ind)
{
    int i = ind;
    while (ptr[i])
    {
        ptr[i] = ptr[i + 1];
        i++;
    }
}
void printa(int array[], int N)
{
    int i = 0;
    while (i < N)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
}
void main()
{
    // insert at the time to declaration
    int array[7] = {1};
    int N = sizeof(array) / 4;
    // methods of insertion of Array(vlaues filling)
    // Using indexing
    array[1] = 2;
    // Fuctional method
    insert(array, 10);
    insert(array, 8);

    printa(array, N);

    // Deletion
    delete(array, 2);
    delete(array, 2);

    printa(array, N);

    for (int i = 3; i <= N; i++)
        insert(array, i);
    printa(array, N);

    int pos = linearSearch(array, 4);
    printf("Position of 4 = %d\n", pos);
    pos = BinarySearch(array,N,6);
    printf("Position of 6 = %d\n", pos);
}
