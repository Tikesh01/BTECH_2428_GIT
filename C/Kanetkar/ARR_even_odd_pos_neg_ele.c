#include <stdio.h>
int main()
{
    int arr[25] = {1, 4, 7, 88, 90, -2, -6, 4, -69, 0, 77, 91, -6, -55, 9, 2, 37, 36, -78, -9, 22, -9, 27, 11, 65};
    int main_size = sizeof(arr) / sizeof(int), i, j;
    int pos[main_size], neg[main_size], even[main_size], odd[main_size];
    int a = 0, b = 0, c = 0, d = 0;
    for (i = 0; i < 25; i++)
    {
        if (arr[i] > 0)
        {
            pos[a] = arr[i];
            a++;
        }
        if (arr[i] < 0)
        {
            neg[b] = arr[i];
            b++;
        }
        if (arr[i] % 2 == 0 && arr[i]>0)
        {
            even[c] = arr[i];
            c++;
        }
        if (arr[i] % 2 != 0 && arr[i]>0)
        {
            odd[d] = arr[i];
            d++;
        }
    }
    printf("+ve   -ve  even  odd\n");
    for (j = 0; j < main_size; j++)
    {
        if (j < a)
            printf("%d", pos[j]);
        if (j < b)
            printf("    %d ", neg[j]);
        if (j < c )
            printf("    %d ", even[j]);
        if (j < d)
            printf("    %d ", odd[j]);
        printf("\n");
    }
    return 0;
}