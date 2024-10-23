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
int pop(struct Stack *s)
{
    int data;
    if (s->top == -1)
    {
        printf("Stack underflow!!\n");
    }
    else
    {
        data = s->arr[s->top];
        s->top--;
    }
    return data;
}

// Function to peak the element at top
int peak(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is empty!!\n");
    }

    else
    {
        printf("Element at the top is ");
        return s->arr[s->top];
    }
}

// Function to peak the element at a particular index
void peakAtIndex(struct Stack *s, int index)
{
    if (index < 0 || index >= s->size)
    {
        printf("Out of bound Index\n");
    }
    else
    {
        printf("Element at index %d is %d\n", index, s->arr[index]);
    }
}

int main()
{
    struct Stack s;
    // s.size = 5;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));
    // push(&s, 1);
    // push(&s, 2);
    // push(&s, 3);
    // push(&s, 4);
    // push(&s, 5);
    // // pop(&s);
    // // pop(&s);
    // // int top = peak(&s);
    // // printf("%d\n",top);
    // // pop(&s);
    // // pop(&s);
    // // int element = pop(&s);
    // // printf("Element popped is %d\n", element);
    // peakAtIndex(&s, 5);


    //Making this array more user friendly by allowing user to create an array of their required size
    s.arr = (int *)malloc(s.size * sizeof(int));
    printf("Enter the size of array: ");
    scanf("%d",&s.size);

    //Entering the elements in stacks 
    printf("How many elements you want to enter in stack?? ");
    int num;
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter element at index %d ",i);
        scanf("%d",&s.arr[i]);
    }
        printf("\n");
    
    //Printing all the elements from the stack one by one
    for (int i = 0; i < num; i++)
    {
        peakAtIndex(&s,i);
    }
    
    return 0;
}