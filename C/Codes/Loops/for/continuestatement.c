#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        // if (i % 2 == 0) //to print odd numbers
        if (i % 2 != 0) // to print even numbers
        {
            continue; // skip karo us round (iteration) ko
        }

        printf("%d ", i);
    }
    return 0;
}