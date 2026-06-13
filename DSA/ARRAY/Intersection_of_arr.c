#include<stdio.h>
int main()
{
    int arr[]={8,2,0,4,9,10,38,92};
    int brr[]={2,5,34,0,1,10,92,46,2};
    int size1=sizeof(arr)/4, size2=sizeof(brr)/4,a=0;
    for (int i = 0; i < size1; i++)
    {
        for(int j=0; j<size2; j++)
            if(arr[i]==brr[j])
            {
                a++;
                break;
            }
    }
    int common[a];
    a=0;
    for (int i = 0; i < size1; i++)
    {
        for(int j=0; j<size2; j++)
            if(arr[i]==brr[j])
            {
                common[a] =arr[i];
                a++;
                break;
            }
    }
    
    for(int k =0; k<a; k++)
        printf("%d ",common[k]);
    return 0;
}