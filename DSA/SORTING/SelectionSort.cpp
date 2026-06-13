#include<iostream>
#include<limits.h>
using namespace std;
int SelectionSort(int*ptr,int N)
{
    for (int i = 0; i < N; i++)
    {
        int *smaller = &ptr[i];
        for (int j = i; j<N; j++)
        {
            if(*smaller > ptr[j])
            {
                smaller = ptr+j;
            }
        }   
        cout<<*smaller<<" ";
        int *temp = smaller;
        smaller = ptr+i;
        ptr[i] = *temp;
    }
}
int main()
{
    int arr[] = {38,2,19,22,90,67,29,10,2};
    int N =sizeof(arr)/4;
    cout<<"THe Oreiginal array : ";
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    SelectionSort(arr,N);
    cout<<endl<<"The sorted array : ";
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}