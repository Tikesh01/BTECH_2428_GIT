#include <iostream>
using namespace std;
class Stack
{
private:
    int MaxStack = 0;
    int *Stack = new int[MaxStack + 1];
    int Top = 0;

public:
    int getMaxStack(int);
    void getMaxStack();
    int getStack();
    void getStack(int*);
    int push(int);
    int showStack();
    int pop();
};
int Stack::getMaxStack(int m)
{
    MaxStack = m;
}
void Stack::getMaxStack()
{
    int ms;
    cout << "Enter the Max Stack : ";
    cin >> ms;
    MaxStack = ms;
}
int Stack::getStack()
{
    int i = 0;
    int ele;
    cout << "Enter the Stack Element : ";
    while (cin >> ele)
    {
        push(ele);
        i++;
    }
    Top = i;
}
void Stack::getStack(int *  elemenet)
{
    for (int i = 0; i < MaxStack; i++)
    {
        push(*(elemenet+i));
    }
}
int Stack::push(int item)
{
    if (Top > MaxStack)
    {
        cout << "Stack OverFlow!";
        return 0;
    }
    Top = Top + 1;
    Stack[Top] = item;
}
int Stack::showStack()
{
    cout << "The Stack = ";
    for (int i = 1; i <= Top; i++)
    {
        cout << "|" << Stack[i];
    }
    cout << "| (Top = " << Top << ")";
}
int main()
{
    Stack arr;
    arr.getMaxStack(6);
    int trr[] = {1,3,2,2}; 
    arr.getStack(trr);
    arr.showStack();
    return 0;
}