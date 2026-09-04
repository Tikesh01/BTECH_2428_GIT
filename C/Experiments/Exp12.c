// 12.  Declare a union with three members of type integer, char, string and illustrate the use of union.
#include <stdio.h>

// Define a union with three members
union Data {
    int number;
    char character;
    char string[50];
};
 
int main() {
    // Declare a variable of type 'Data'
    union Data data;

    // Assign and display the integer member
    data.number = 100;
    printf("Integer: %d\n", data.number);

    // Assign and display the character member
    data.character = 'A';
    printf("Character: %c\n", data.character);

    // Assign and display the string member
    // Note: Assigning a string after setting the integer or character will overwrite the previous data
    snprintf(data.string, sizeof(data.string), "Hello, World!");
    printf("String: %s\n", data.string);

    // Display all members to show how union overwrites data
    printf("\nAfter assigning string:\n");
    printf("Integer (may be corrupted): %d\n", data.number);
    printf("Character (may be corrupted): %c\n", data.character);
    printf("String: %s\n", data.string);

    return 0;
}