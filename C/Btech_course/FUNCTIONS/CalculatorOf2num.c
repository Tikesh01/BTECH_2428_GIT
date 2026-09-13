#include <stdio.h>
int a,b;
int sum(int a, int b)
{
    return(a+b);
}
int sub(int a, int b)
{
    return (a - b);
}
int mult(int a, int b)
{
    return (a * b);
}
int div(int a, int b)
{
    return (a / b);
}
int rem(int a, int b)
{
    return (a % b);
}

int main()
{
    int n, resulta, resultb;
    printf("\nEnter '1' to add the numbers.\nEnter '2' to subtract the numbers.\nEnter '3' to multiply the numbers.\nEnter '4' to divid the numbers.\nEnter '4' to know remainder.\n\nwhat's your choice : ");
    scanf("%d", &n);
    if (n == 1)
    { 
        printf("\nEnter the numbers with '+' : ");
    }
    else if (n == 2)
    {
        printf("\nEnter the numbers with '-' : ");
        scanf("%d-%d", &a, &b);
        resulta = sub(a, b);
        printf("%d - %d = %d", a, b, resulta);
    }
    else if (n == 3)
    {
        printf("\nEnter the numbers with '*' : ");
        scanf("%d*%d", &a, &b);
        resulta = mult(a, b);
        printf("%d * %d = %d", a, b, resulta);
    }
    else if (n == 4)
    {
        printf("\nEnter the numbers with '/' : ");
        scanf("%d/%d", &a, &b);
        resulta = div(a, b);
        printf("%d / %d = %d", a, b, resulta);
        resultb = rem(a, b);
        printf("\nRemainder = %d", resultb);
    }

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char input[100]; // Buffer to store the input string
//     printf("Enter numbers separated by '+': ");
//     scanf("%s", input); // Read the input string

//     int sum = 0;
//     char *token = strtok(input, "+"); // Split the string by '+'

//     while (token != NULL)
//     {
//         sum += atoi(token);        // Convert each token to an integer and add to sum
//         token = strtok(NULL, "+"); // Get the next token
//     }

//     printf("The sum is: %d\n", sum); // Output the result

//     return 0;
// }
