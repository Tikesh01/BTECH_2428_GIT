// Ques. Display this GP-100,50,25...upto n terms.
#include <stdio.h>
int main()
{
    int i,n;
    float a = 100.0;
    printf("Enter the number of term : ");
    scanf("%d",&n);
    for (i = 0; i<=n; i++)//a>0
    {
        printf("%f ", a);
        a = a/2
        ; 
    }
}