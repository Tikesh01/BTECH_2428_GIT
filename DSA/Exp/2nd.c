#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int *ptr; 
    int top;
};
struct stack stack(int arr[], int size)
{
    struct stack s;
    s.ptr = (int *)malloc((sizeof(int))*size);
    s.ptr = arr;
    s.size = size;
    int i=0;
    while (s.ptr[i] &&s.size>i)
        i++;
    s.top =i;
    free(arr);
    return s;
}
int printStack(struct stack s)
{
    int i=0;
    printf("\n");
    while (s.ptr[i] && i<s.size)
    {
        printf("%d ",s.ptr[i]);
        i++;
    }
    printf(" (Top = %d)\n",s.top);
}
int push(struct stack *s,int v)
{
    if (s->top >= s->size)
    {
        printf("\nError : Stack OverFlow!\n");
        return 0;
    }
    s->top =  s->top+1;
    int i=0;
    while (s->ptr[i]&& i<s->size)
        i++;
    s->ptr[i] = v;
    free(s);
    return 0;
}
int pop(struct stack *s)
{
    if (s->top <= 0)
    {
        printf("\nError : Stack UnderFlowFlow!\n");
        return 0;
    }
    s->top =  s->top-1;
    s->ptr[s->top] = NULL;
    free(s);
    return 0;
}
int main()
{
    struct stack s;
    int arr[10] = {1,234,4,5,92,37,29,02};
    s = stack(arr,10);
    push(&s,8);
    push(&s,8);
    printStack(s);
    pop(&s);
    printStack(s);
    return 0;
}
