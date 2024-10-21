#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

void push(struct Stack *s, int data)
{
    if (s->top >= s->size - 1)
    {
        printf("Stack overflow!!\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}
int pop(struct Stack* s){
    int data;
    if (s->top == -1)
    {
        printf("Stack underflow!!\n");
    }
    else{
        data = s->arr[s->top];
        s->top--;
    }
    return data;
}

int main()
{
    struct Stack s;
    s.size = 5;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));
    push(&s,1);
    push(&s,2);
    push(&s,3);
    push(&s,4);
    push(&s,5);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    int element = pop(&s);
    printf("Element popped is %d\n",element);
    return 0;
}