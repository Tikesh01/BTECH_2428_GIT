#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter the points bellow:\n");
    printf("Enter p1(): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter p2(): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter p3(): ");
    scanf("%d %d", &x3, &y3);
    float m1 = (y2 - y1) / (x2 - x1);
    float m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("p1(%d,%d), p2(%d,%d) and p3(%d,%d) can lie on the one straight line", x1, y1, x2, y2, x3, y3);
    }
    else
    {
        printf("p1(%d,%d), p2(%d,%d) and p3(%d,%d) cannot lie on the one straight line", x1, y1, x2, y2, x3, y3);
    }
    
}
