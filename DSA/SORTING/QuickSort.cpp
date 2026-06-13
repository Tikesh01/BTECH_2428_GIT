#include <iostream>
#include <limits.h>
using namespace std;
int QuickSort(int *arr, int N)
{
    int smaller = INT_MAX;
    int *pivot = &arr[0];
    int j = 0;
    for (int i = N - 1; i > -1; i--)
    {
        if (arr[i] < *pivot)
        {
            swap(arr[i],*pivot);
            break;
        }
    }
}
int main()
{
    // int *ptr = new int;
    // cout<<"Enter and data structure : ";
    // int i =0;
    // while(getchar() != '\n')
    // {
    //     cin>>*(ptr+i);
    //     i++;
    // }
    // int size = i;
    int ptr[] = {44, 33, 11, 55, 77, 99, 22, 88, 66};
    int size = sizeof(ptr) / 4;
    cout<<"The array : ";
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] <<" ";
    }
    QuickSort(ptr, size);
    cout<<endl<<"The array : ";
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] <<" ";
    }
   
    return 0;
}