#include <stdio.h>
int main()
{
    char arr[] = {'h', 'e', 'l', 'l', 'o'};//very Basic wa to Initialize char arr (string)
    char str[]="hello\0";//Good way to initialize array.
    
    int i = 0;
    // while (i<5)
    // {
    //     printf("%c", arr[i]);
    //     i++;
    // }
    while (str[i]>'\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
    return 0;
}