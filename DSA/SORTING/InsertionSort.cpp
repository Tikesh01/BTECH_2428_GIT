#include <iostream>
using namespace std;
int InsertionSort(int *ptr, int N)
{
    int a= 0;
    for (int i = 1; i < N; i++)
    {
        for(int j = i-1; j>-1; j--)
        {
            if(ptr[i]<ptr[j])
            {
                int temp = ptr[j];
                ptr[j]=ptr[i];
                ptr[i] =temp;
                i--;
                a++;
            }
            else if(ptr[i]>ptr[j])
            {
                break;
            }
        }
    }
    printf("\nThe loop rounding : %d",a);
} 
int main()
{
    int arr[] = {44, 33, 11, 55, 77, 90, 40, 60, 99, 22, 88, 66};
    int N = sizeof(arr) / 4;
    cout<<"The original Array : ";
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    InsertionSort(arr, N);
    cout<<endl<<"The Sorted Array : ";
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}