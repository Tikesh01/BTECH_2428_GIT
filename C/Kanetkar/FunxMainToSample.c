#include <stdio.h>
float ans, div;
int division(int *pinteger, float *pdecimal)
{
    div = (*pinteger / 1.0) / *pdecimal;
    return div;
}
int product(int *pinteger, float *pdecimal)
{
    ans = *pdecimal * *pinteger;
    return ans;
}
int main()
{
    int integer;
    float decimal;
    printf("Enter an integer : ");
    scanf("%d", &integer);
    printf("Enter a decimal number : ");
    scanf("%f", &decimal);
    ans = product(&integer, &decimal);
    printf("The product = %f", ans);
    div = division(&integer, &decimal);
    printf("\nThe division =  %f", div);
    return 0;
}