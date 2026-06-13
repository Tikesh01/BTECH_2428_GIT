#include <iostream>
using namespace std;
int RadixSort(int *ptr, int N)
{
    int temp[N];
    for (int i = 0; i < N; i++)
    {
        if (ptr[i] > 99 && ptr[i] < 1000)
        {
            temp[i] = ptr[i] % 10;
            cout << temp[i] << " ";
        }
    }
}
int main()
{
    int arr[] = {122, 340, 492, 567, 365, 281, 789, 100};
    int size = sizeof(arr) / 4;
    cout << "The array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    RadixSort(arr, size);
    cout << endl
         << "The Sorted arr : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}