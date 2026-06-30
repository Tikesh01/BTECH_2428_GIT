#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    switch (n > 0 && n < 8)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
     case 5:
        printf("friday");
        break;
     case 6:
        printf("saturday");
        break;
     case 7:
        printf("Sunday");
        break;
    default:
        printf("Abey 1 se 7 hi daal");
    }
}