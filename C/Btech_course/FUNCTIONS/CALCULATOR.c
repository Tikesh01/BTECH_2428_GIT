#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int calculator()
{
    char op;
    float num[100];
    double calc;
    printf("Enter the numbers with operator without presing enter key : ");
    scanf("%f", &num[0]);
    calc = num[0];
    int i = 1;
    while ((getchar() != '\n'))
    {
        scanf("%c", &op);
        scanf("%f", &num[i]);
        if (op == '/')
            calc = calc / (num[i]/1.0);
        else if (op == '*')
            calc = calc / 1.0 * num[i];
        else if (op == '+')
            calc = calc + num[i];
        else if (op == '-')
            calc = calc - num[i];
        else if(op=='^')
            calc = pow(calc,num[i]);
        // switch (op)
        // {
        // case '/':
        //     calc = (calc/1.0) / num[i];
        //     i++;
        //     // break;
        // case '*':
        //     calc = (calc / 1.0) * num[i];
        //     i++;
        //     // break;
        // case '+':
        //     calc = calc + num[i];
        //     i++;
        //     // break;
        // case '-':
        //     calc = calc - num[i];
        //     i++;
        //     // break;
        // // default:
        // //     puts("Are aise kaise kuchh to karo");
        // //     break;
        // }
        i++;
    }
    printf("The total of %d values = %2Lf", i, calc);
}
int main()
{
    calculator();
}