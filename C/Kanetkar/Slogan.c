#include <stdio.h>
int main()
{
    void slogan();
    int c = 5;
    c = slogan();
    printf("\n%d", c);
}
void slogan()
{
    printf("\nonly he men use C!");
}