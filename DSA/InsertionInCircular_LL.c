#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

//Function to traverse the circular linked list using the do-while loop
void traversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

//Function to insert a node in the place of first node 
struct Node* insertAtFirst(struct Node* head,int data){
    struct Node* ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head->next;

    while (p->next != head)
    {
        p = p->next;
    }
    //At this point p is pointing to the last node of the circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Setting values in head/first node
    head->data = 12;
    head->next = second;

    // Setting values in second node
    second->data = 34;
    second->next = third;

    // Linking third node with fourth one
    third->data = 52;
    third->next = fourth;

    // terminating the list
    fourth->data = 66;
    fourth->next = head;

    printf("Linked list is:\n");
    traversal(head);
    head = insertAtFirst(head,10);
    head = insertAtFirst(head,3);
    head = insertAtFirst(head,15);
    head = insertAtFirst(head,24);
    printf("After perfroming insertion the linked list is \n");
    traversal(head);
}