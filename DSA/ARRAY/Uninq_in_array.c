#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5};
    int size = sizeof(arr) / 4, i, j, a = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                a++;
                break;
            }
        }
    }
    if (a != 0)
    {
        int nonUni_index[a];
        int uniq_num = size - a;
        int uniq_index[uniq_num];
        printf("There are %d uniqu numbers in array\n", uniq_num);
        int b = 0;
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                if (arr[i] == arr[j] && i != j)
                {
                    nonUni_index[b] = i;
                    b++;
                    break;
                }
            }
        }
        printf("\n");
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < size; j++)
                if (nonUni_index[i] != j)
                    printf("%d ", j);
        }
    }
    else
    {
        printf("Sub unique hain");
    }

    return 0;
}