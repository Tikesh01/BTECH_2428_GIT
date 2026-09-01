#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int a = 0, i = 0, e = 0, o = 0, u = 0;
    printf("Enter the string : ");
    gets(str);
    int j = 0;
    while (str[j] != 0)
    {
        if (str[j] == 'a')
            a++;
        else if (str[j] == 'i')
            i++;
        else if (str[j] == 'e' )
            e++;
        else if (str[j] == 'o')
            o++;
        else if (str[j] == 'u')
            u++;
        j++;
    }
    printf("The Numbet of Vovels : \n");
    printf("number of a/A : %d\n",a);
    printf("number of i/I : %d\n",i);
    printf("number of e/E : %d\n",e);
    printf("number of o/O : %d\n",o);
    printf("number of u/U : %d\n",u);
    return 0;
}