#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[] = {1, 2, 4, 9, 9, 3, 5, 5, 6, 2, 1};
    int lenth = sizeof(arr) / sizeof(int);
    int i = 0;
    printf("The Array : \n");
    while (i < lenth)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    int freq[lenth];
    int checked = -1;
    for (int i = 0; i < lenth; i++)
    {
        int count = 1;
        for (int j = i+1; j < lenth; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = checked;
            }
        }
        if (freq[i] != checked)
            freq[i] = count;
    }
    printf("---------------------\n");
    printf(" Element | Frequency\n");
    printf("---------------------\n");
    for (int i = 0; i < lenth; i++)
    {
        if (freq[i] != checked)
        {
            printf("    %d", arr[i]);
            printf("    |  ");
            printf("  %d\n", freq[i]);
        }
    }
    printf("---------------------\n");
}