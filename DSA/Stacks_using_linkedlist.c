#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int isEmpty(struct Node * top){
    if (top == NULL)
    {
        return 1;
    }
    else return 0;
}

int isFUll(struct Node * top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else return 0;
    
}

struct Node* push(struct Node * top, int data){
    if (isFUll(top))
    {
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = data;
        n->next = top;
        top = n;
        return top; 
    }
    
}
int pop(struct Node** top){
    if (isEmpty(*top))
    {
        printf("Stack underflow\n");
    }
    else{
        struct Node* ptr = *top;
        int element = ptr->data;
        *top = (*top)->next;
        free(ptr);
        return element;
    }
    
}

void traversal(struct Node* ptr){
    while (ptr != NULL)
    {
        printf("Element is %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}

int main()
{
    struct Node* top = NULL;
    top = push(top,45);  
    top = push(top,36);  
    top = push(top,9);  
    // traversal(top);  
    // pop(&top);
    // pop(&top);
    // int element = pop(&top);
    top = push(top,12);
    // int element = pop(&top);
    // printf("Element popped is %d \n",element);
    traversal(top);
     return 0;
}
/*
Instead of using the address in pop function (&top) we can also do it by making top a global variable and hence in this way we doesn't need to dereference it every time when we are using it while declaring the pop function.But when we do this using this approach we need to be carefull as then we need to ensure that the global variable and local variable does not have the same name as in such cases local variable is given proiority over global variable and again the same problem arises.
*/