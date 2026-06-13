#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / 4, i, j;
    printf("The Array = {");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
    int n;
    printf("How mani values do you wnat to delete : ");
    scanf("%d", &n);
    int index[n];
    printf("Which position do you want to delete (0 to 5): ");
    for (j = 0; j < n; j++)
        scanf("%d", &index[j]);

    for (i = 0; i < n; i++)
        for (j = index[i]; j < size; j++)
        {
            arr[j] = arr[j + 1];
        }
    printf("The Updated Array = {");
    for (i = 0; i < size - n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("}");
}