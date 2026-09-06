// 17.Converting a hexadecimal number into its binary equivalent.
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char* hexa_to_bin(char* hex)
{
    const char hex_to_binary[16][5] = {
        "0000", // 0
        "0001", // 1
        "0010", // 2
        "0011", // 3
        "0100", // 4
        "0101", // 5
        "0110", // 6
        "0111", // 7
        "1000", // 8
        "1001", // 9
        "1010", // A
        "1011", // B
        "1100", // C
        "1101", // D
        "1110", // E
        "1111"  // F
    };
    int len = strlen(hex);
    char* bin;
    bin[0] = '\0';
    for (int i = 0; i < len; i++)
    {
        int as = hex[i];
        // char ch = hex[i];
        int idx=-1;
        if(as >= 48 && as<=57){
           idx = as-48; 
            // idx  = ch - '0';
        }else if(as>=65 && as<=70){
            idx =as-65+10;
            // idx =  (ch - 'A') + 10;
        }else{
            printf("Invalid Hexadecimal Number");
            return 0;
        }
        strcat(bin,hex_to_binary[idx]);
    }
    
    return bin;
}
int main()
{
    char* str;
    str = (char *)malloc(100*sizeof(char));
    scanf("%5s",str);
    printf("%s",hexa_to_bin(str));

    free(str);

    return 0;
}