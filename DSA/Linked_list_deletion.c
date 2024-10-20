#include<stdio.h>
#include<stdlib.h>

//Creation of LinkedList
struct Node{
    int data;
    struct Node * next;
};

//Traversing the linked list
void traversal(struct Node* ptr){
    while(ptr != NULL){
        printf("Element is %d\n",ptr->data);
        ptr = ptr->next;
    }
}

//Function to delete first node from a linked list
struct Node* deleteFirst(struct Node* head){
    struct Node* ptr = head;
    head = head ->next;
    free(ptr);
    return head;
}

//Function to delete node in between 
struct Node* deleteAtIndex(struct Node* head,int index){
    struct Node* p = head;
    int i = 0;
    while (i<index-1)
    {
        p = p->next;
        i++;
    }
    struct Node* q = p->next;
    p->next = q->next;
    free(q);
    return head;
    
}

//Function to delete the last node
struct Node* deleteLast(struct Node* head){
    struct Node* p = head;
    struct Node* q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

//Function to delete an element with a given value
struct Node* deleteElement(struct Node* head,int value){
    struct Node* p = head;
    struct Node* q = head->next;
    while(q->data != value && q->next != NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    else{
        printf("Element %d not found!!\n",value);
    }
    return head;
    }
int main()
{
    struct Node* head;   
    struct Node* second;   
    struct Node* third;
    head = (struct Node*)malloc(sizeof(struct Node));   
    second = (struct Node*)malloc(sizeof(struct Node));   
    third = (struct Node*)malloc(sizeof(struct Node));

    //Setting values in head/first node
    head->data = 12;
    head->next = second; 

    //Setting values in second node
    second->data = 134;
    second->next = third; 

    //Terminatting the list
    third->data = 152;
    third->next = NULL;   

    printf("Linked list before deletion\n");
    traversal(head);

    printf("\n");
    printf("Linked list after deletion\n");
    // head = deleteFirst(head);
    // head = deleteAtIndex(head,2);
    // head = deleteLast(head);
    head = deleteElement(head,1342);
    traversal(head);
    printf("\nNew Linked list after deleting element 134\n");
    head = deleteElement(head,134);
    traversal(head);
     return 0;
}