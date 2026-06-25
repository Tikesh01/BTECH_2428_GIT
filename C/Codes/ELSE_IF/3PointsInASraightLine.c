//QUES. write a programe to check  if 3 points can lie on on straight line.
// LOGIC: if area of triangle = o Area
//Area of triangle = 1/2|(x1(y2-y3)+x2(y3-y1)+x3(y1-y2)
#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the points bellow:\n");
    printf("Enter p1(): ");
    scanf("%d %d",&x1,&y1);
    printf("Enter p2(): ");
    scanf("%d %d",&x2,&y2);
    printf("Enter p3(): ");
    scanf("%d %d",&x3,&y3);
    float Area=(1.0/2.0)*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if (Area==0)
    {
        printf("p1(%d,%d), p2(%d,%d) and p3(%d,%d) can lie on the one straight line",x1,y1,x2,y2,x3,y3);
    }
    else if (Area!=0)
    {
       printf("p1(%d,%d), p2(%d,%d) and p3(%d,%d) cannot lie on the one straight line",x1,y1,x2,y2,x3,y3);
    }

    return 0;
}
