#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* traversal(struct Node* head){
    struct Node* ptr = head;
    printf("Traversal in forward direction is \n");
    while (ptr->next != NULL)
    {
        printf("The element is %d\n",ptr->data);
        ptr = ptr->next;
    }
    printf("The element is %d\n",ptr->data);
    if (ptr->next == NULL)
    {
        printf("Traversal in reverse direction is \n");
        while (ptr != NULL)
        {
            printf("The element is %d\n",ptr->data);
            ptr = ptr->prev;
        }
        
    }
}
int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->next = first;
    head->prev = NULL;
    head->data = 1;

    first->next = second;
    first->prev = head;
    first->data = 2;

    second->next = third;
    second->prev = first;
    second->data = 3;

    third->next = fourth;
    third->prev = second;
    third->data = 4;

    fourth->next = NULL;
    fourth->prev = third;
    fourth->data = 5;

    head = traversal(head);

    return 0;   
}