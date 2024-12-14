#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *create()
{
    int x;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data(-1 for no node) ");
    scanf("%d", &x);
    if (x == -1)
        return 0;
    newNode->data = x;
    printf("Enter left child of %d\n", x);
    newNode->left = create();
    printf("Enter right child of %d\n", x);
    newNode->right = create();
}

void preOrder(struct Node *root)
{
    if (root == 0)
        return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct Node* root){
    if(root == 0) return;
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}

void postOrder(struct Node* root){
    if(root == 0) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);
}
int main()
{
    struct Node *root;
    root = 0;
    root = create();
    printf("Preorder traversal\n");
    preOrder(root);
    printf("\nInorder traversal\n");
    inOrder(root);
    printf("\nPostorder traversal\n");
    postOrder(root);

    return 0;
}
