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
     return 0;
}