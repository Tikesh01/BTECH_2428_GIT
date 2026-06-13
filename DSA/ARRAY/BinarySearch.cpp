#include<iostream>
using namespace std;
int main()
{
    int sarr[] = {0,1,2,3,4,5,6,7,8,9};//shorted array
    int beg = 1,end = sizeof(sarr)/4, mid = (beg+end)/2;
    int item;
    cout<<"Enter the item to search :";
    cin>>item;
    while (end>=beg && item != sarr[mid])
    {
        if(item<sarr[mid])
        {
            end = mid -1;
        }
        else
        {
            beg = mid+1;
        }
        mid = (beg+end)/2;
    }
    cout<<sarr[mid];

    return 0;
}