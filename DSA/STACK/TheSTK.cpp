#include <iostream>
#include <conio.h>
#include<stdlib.h>
using namespace std;
class stack
{
private:
    int mxstk;
    int *stk = new int[mxstk];
    int Top = 0;

public:
    void GetMaxStack()
    {
        int m;
        cout << "Enter the MaxStack : ";
        cin >> m;
        mxstk = m;
    }
    int GetStackElements()
    {
        cout << "Enter the elements : ";
        int ele;
        while (getchar() != '\n')
        {
            cin >> ele;
            push(ele);
        }
        if (getchar() == '\n')
        {
            cout << "Top = " << Top;
        }
    }
    int pop(void);
    int push(int);
    int showStack();
};
int stack::showStack()
{
    for (int i = 1; i <= Top; i++)
    {
        cout<<*(stk+i)<<" ";
    }
}
int stack::pop()
{
    if(Top == 0)
    {
        cout<<"Stack UnderFlow! ";
        return 0;
    }
    Top = Top-1;
}
int stack::push(int item)
{
    if (Top > mxstk)
    {
        cout << "Stack Overflow!";
        return 0;
    }
    Top = Top + 1;
    stk[Top] = item;
}
int main()
{
    stack stk1;
    stk1.GetMaxStack();
    stk1.GetStackElements();
    stk1.showStack();
    return 0;
}