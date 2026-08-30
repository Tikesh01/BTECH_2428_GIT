#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers : ");
    scanf("%d%d",&a,&b);
    //bitwise AND
    printf("\nBitwise AND of %d & %d = %d",a,b,a & b);
    //bitwise OR
    printf("\nBitwise OR of %d | %d = %d",a,b,a | b);
    //bitwise XOR
    printf("\nBitwise XOR of %d ^ %d = %d",a,b,a ^ b);
    //bitwise NOT for 1st integer 
    printf("\nBitwise NOT of  %d = %d",a,a);
    //left shift the first integer by 1
    printf("\nLeft shift %d << 1 = %d",a,a << 1);
    //Right shift th second integer by 1
    printf("\nRight shift %d >> 1= %d",b,b>>1);
}