#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    gets(str);//Input without loop
    // scanf("%s",str); format specifier of string is '%s'.
    //scanf also helps to iput the string but after space it doesnot work.
    printf("your input is : ");
    puts(str);//gets and puts only use for strings. textual content
    return 0;
}