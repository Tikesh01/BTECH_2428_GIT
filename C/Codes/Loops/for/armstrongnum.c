// Print all armstrong numbers between 1 and 500
// 153 = 1*1*1 + 3*3*3 + 5*5*5
#include <stdio.h>
#include<math.h>
int main()
{
   
    int i, rem1, rem2, rem3, ans1, ans2, ans3, div1,div2, sum;
    for (i = 1; i <= 500  ; i++)
    {
        rem1 = i % 10;
        ans1 = pow(rem1, 3);
        div1 = i / 10;
        rem2 = div1 % 10;
        ans2 = pow(rem2, 3);
        div2=div1/10;
        rem3 = div2 % 10;
        ans3 = pow(rem3, 3);
        sum = ans1 + ans2 + ans3;
        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}