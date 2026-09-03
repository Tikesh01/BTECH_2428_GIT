// 11.  Define a structure with three members/attributes and display the same.
#include <stdio.h>
struct person
{
    char name[20];
    int age;
    float height;
};
int main()
{
    struct person individual;

    printf("Enter the name of indiviual : ");
    scanf("%s", &individual.name);

    printf("Age of individual : ");
    scanf("%d", &individual.age);

    printf("Height of Individual : ");
    scanf("%f", &individual.height);

    printf("\n*Display Information*\n");
    printf("%s\n", individual.name);
    printf("%d\n", individual.age);
    printf("%f", individual.height);

    return 0;
}
