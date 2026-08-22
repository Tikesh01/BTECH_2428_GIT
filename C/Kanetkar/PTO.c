#include <stdio.h>
// int i,j;
int junk(int *pi, int *pj)
{
    // i = i * i;
    // j = j * j;
    *pj = *pj * *pj;
    *pi = *pi * *pi;
    // return i;
    // return j;
}
int main()
{
    int i = 5, j = 2;
    junk(&i, &j);
    printf("%d %d", i, j);
} 