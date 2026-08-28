#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct std_detail
{
    int rol;
    char *name;
    char *depa;
    char *course;
    int year;
};
int main()
{
    struct std_detail arr[450];
    int i = 1, j = 0;
   
    arr->name = (char*)calloc(450,12);
    arr->depa = (char*)calloc(450,12);
    arr->course = (char*)calloc(450,12);

    while (i!=3 )
    {
        printf("%d. ",i);

        printf("Role number : ");
        scanf("%d", &arr->rol+j);

        printf("Name : ");
        scanf("%s",(arr+j)->name);

        printf("Department : ");
        scanf("%s",(arr+j)->depa);

        printf("Course : ");
        scanf("%s",(arr+j)->course);

        printf("Year : ");
        scanf("%d",&arr->year+j);

        i++;
        j++;
    }
    for ( i = 0; i < 3; i++)
    {
        printf("%d. ",i+1);
        printf("%d\n",(arr+i)->rol);
        printf("%s\n",(arr+i)->name);
        printf("%s\n",(arr+i)->depa);
        printf("%s\n",(arr+i)->course);
        printf("%d\n",arr->year+i);
    }
    
    
    free(arr->name);
    free(arr->depa);
    free(arr->course);

    return 0;
}