#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int top = -1;
int Stack[MAX];

void push(int num)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        Stack[top] = num;
    }
}
int pop()
{
    int num;
    if (top == -1)
    {
        printf("Stack Underflow");
        return -1;
    }
    else
    {
        num = Stack[top];
        top--;
        return num;
    }
}
void peek()
{
    if (top = -1)
    {
        printf("Stack is empty");
    }
    else
    {
        for (int i = 0; i < top; i++)
        {
            printf("%d ", Stack[i]);
        }
    }
}
int main()
{
    push(10);
    peek();
    return 0;
}