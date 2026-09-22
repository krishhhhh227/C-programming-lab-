#include <stdio.h>
#define size 5
int stack[size];
int top = -1;
void push(int x)
{
    if (top == size - 1)
    {
        printf("STACK OVERFLOW");
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}
int pop()
{
    if (top == -1)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Deleted element is %d \n", stack[top]);
        top = top - 1;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    push(15);
    pop();
    pop();
    pop();
    pop();
    return 0;
}