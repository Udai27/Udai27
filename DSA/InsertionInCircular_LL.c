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
}