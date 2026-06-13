#include <iostream>
using namespace std;
int BubbleSort(int *ptr, const int N)
{
    for(int i = 0;i<N-1;i++)
    {
        for(int j =0 ; j<N; j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                // int temp = ptr[j];
                // ptr[j] = ptr[j+1];
                // ptr[j+1] = temp;
                swap(ptr[j],ptr[j+1]);
            }
            else{continue;}
        }
    }
}
int main()
{
    int arr[] = {2, 4, 2, 10, 48, 29, 10, 3, 28};
    const int N = sizeof(arr) / sizeof(int);
    cout<<"The original array : ";
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";
    }
    BubbleSort(arr,N);
    cout<<endl<<"The sorted Array : ";
    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" ";//It is shoving that 
    }
    return 0;
}