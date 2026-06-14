#include <stdio.h>
struct ArrayOfStruct
{
    struct ArrayOfStruct *ptr;
};
int main()
{
    struct ArrayOfStruct arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = (struct ArrayOfStruct*) malloc(sizeof(struct ArrayOfStruct));
    }
    
    int j = 0;
    while (getchar() != '\n')
    {
        scanf("%d", &arr[1][j]);
        j++;
    }
    printf("The first element : %d",arr[1]);
    return 0;
}