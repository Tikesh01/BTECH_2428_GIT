#include <stdio.h>
int n;
int dec(int n)
{
    int i;
    printf("Enter the nth term : ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        printf("%d ", i);
    }
    return i;
}
int main()
{
    int ans;
    ans = dec(n);
    return 0;
}