#include <stdio.h>
int main()
{
    int a, b, sum;
    char op;
    printf("perform operation : ");
    scanf("%d", &a);
    scanf("%c", &op);
    // printf("Enter the 2nd number : ");
    scanf("%d", &b);
    switch (op)
    {
    case '+':
        sum = a + b;
        printf("%d", sum);
        break;
    case '-':
        sum = a - b;
        printf("%d", sum);
        break;
    case '*':
        sum = a * b;
        printf("%d", sum);
        break;
    case '/':
        sum = a / b;
        printf("%d", sum);
        break;
    default:
        printf("");
    }
}