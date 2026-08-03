#include<stdio.h>
int partition(int* arr, int n){
    int* l; int *r;
    int li =0, ri=0;
    int pi = arr[n-1];
    for (int i = 0; i < n-1; i++){
        if(arr[i] <= pi){
            l[li]=  arr[i];
            li++;
        }
        else{
            r[ri] = arr[i];
            ri++;
        }
    }
    for (int i = 0; i < li; i++){
        arr[i] = l[i];
    }
    arr[li] = pi;
    for (int i = li+1; i < ri; i++){
        arr[i] = r[i];
    }
    return li;
}
void quick_sort(int* ptr,int low, int n){
    int pivInd = partition(ptr,n);
    quick_sort(ptr,0,pivInd);
    quick_sort(ptr,pivInd, n);
}
void main(){
    printf("Enter the number of ele: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d of elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    quick_sort(arr,0,n);
    printf("Sorted Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    getchar();
    return;
}