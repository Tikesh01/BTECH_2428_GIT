#include <stdio.h>
int a; // 
// pass by value
int samevariable(int a)
{
    // extern int a;
    printf("%p", &a);
}
int main()
{
    // extern int a;
    int a;
    printf("%p\n", &a);
    samevariable(a);
}
// output :
// different addresses of each a;
// It implies that same named variables allocate differnet address and the pass bye refrance solve it;