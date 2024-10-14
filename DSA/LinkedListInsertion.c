#include<stdio.h>
#include<stdlib.h>

//Creation of LinkedList
struct Node{
    int data;
    struct Node * next; //Self refrencing structure
};

//Traversing the linked list
void traversal(struct Node* ptr){
    while(ptr != NULL){
        printf("Element is %d\n",ptr->data);
        ptr = ptr->next;
    }
}

//Function to insert a node in the beginning of a list
struct Node* insertAtFirst(struct Node* head,int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

//Function to insert a node in between two nodes
//This code will only work indices like 1,2,3,4,....... etc. It will not work for index 0
struct Node* insertInBetween(struct Node* head,int data,int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
}

//Function to insert a node in the end of linked list
struct Node* insertAtEnd(struct Node* head,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
    
}

//Function to insert a node after a given node
struct Node* insertAfterNode(struct Node* head,struct Node* prevNode,int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    
    ptr->next = prevNode->next;
    prevNode->next = ptr;
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

    traversal(head);
    printf("\n");
    // head = insertAtFirst(head,54);
    // head = insertInBetween(head,54,2);
    // head = insertAtEnd(head,54);
    head = insertAfterNode(head,second,54);
    traversal(head);
     return 0;
}