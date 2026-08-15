#include <stdio.h>
int main()
{
    int n=1, m=21,remaining;
    puts("\n! WELL-C0ME TO MATCHSTICK GAME !");
    puts("\nRules\n  --There are 21 matchsticks to pick. \n  --Last matchstick picker will b the loser. ");
    printf("  --You can pick 1, 2, 3 or 4 matchstick only.");
    while ( m <= 21 && m>=1)
    {
        int cp = 5;
        printf("\nYour turn : ");
        scanf("%d", &n);
        if (n <= 4 && n >= 1)
        {
            cp = cp - n;
            printf("Computer picked %d\n", cp);
            m = m - (cp + n);
            printf("Remaining : %d",m);
            if(m<=0)
                printf("\nYou Lose!");
        }
        else
        {
            if(n<1)
                puts("You have to pick at least 1");
            else if(n>4)
                puts("You can only pick max 4");
        }
    }
}