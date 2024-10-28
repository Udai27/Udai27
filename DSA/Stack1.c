#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

// Function to push/insert element in the stack
void push(struct Stack *s, int data)
{
    if (s->top >= s->size - 1)
    {
        printf("Stack overflowed!!.Element can't be insert\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}

// Function to pop element from the stack
void pop(struct Stack *s)
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
        printf("Element popped out is %d\n", data);
    }
}

// Function to peak element present at the top
void peak(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Element at top is %d\n", s->top);
    }
}

// Function to peak element present at a given index
void peakAtIndex(struct Stack *s, int index)
{
    if (index > s->size - 1 || index < 0)
    {
        printf("Invalid index\n");
    }
    else
    {
        int data = s->arr[index];
        printf("Element at index %d is %d\n", index, data);
    }
}

int main()
{
    int data, index, num;
    struct Stack *s;
    s->top = -1;
    printf("Enter the size of Stack ");
    scanf("%d", &s->size);

    printf("\nHow many elements you want to enter in the satck?\n");
    scanf("%d",&num);

    printf("Which type of operation you want to perform in the stack->");

    printf("\n1-> Insertion\n2-> Deletion\n3-> Peak at top\n4-> Peak at particular index\n5-> To exit from the program\n");

    int ch;
    scanf("%d", &ch);

    s->arr = (int *)malloc(s->size * sizeof(int));

    // Encoding all the options in the main function
    do
    {
        switch (ch)
        {
        case 1:
            printf("Enter the element you want to enter in stack ");
            scanf("%d", &data);
            push(s, data);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            peak(s);
            break;
        case 4:
            printf("Enter the index you want to visit at-> ");
            scanf("%d", &index);
            peakAtIndex(s, index);
            break;
        case 0:
            printf("To exit from the program");
            break;
        default:
            printf("Chose a valid option");
            break;
        }
    } while (ch != 0);
    free(s->arr);
    free(s);
    return 0;
}

/*now write a function to enter the required number of itmens in the stack and run the stack only that number of times*/