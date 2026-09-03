// 10.  Declare 3 pointer variables to store a character, a character string and an integer respectively. Input values into these variables. Display the address and the contents of each variable.
#include <stdio.h>

int main()
{
    // Declare pointer variables
    char *charPtr;
    char *strPtr;
    int *intPtr;

    // Variables to store input values
    char character;
    char str[100];
    int number;

    // Assign the address of the variables to the pointers
    charPtr = &character;
    strPtr = str;
    intPtr = &number;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", charPtr); // Note the space before %c to avoid newline issues

    // Input a string
    printf("Enter a string: ");
    scanf("%s", strPtr);

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", intPtr);

    // Display addresses and contents of each variable
    printf("\nAddress of character: %p, Value: %c\n", (void *)charPtr, *charPtr);
    printf("Address of string: %p, Value: %s\n", (void *)strPtr, strPtr);
    printf("Address of integer: %p, Value: %d\n", (void *)intPtr, *intPtr);

    return 0;
}