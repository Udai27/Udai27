#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f, r;
    int *arr;
};

int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct Queue *q, int val)
{
    if (!isFull(q))
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
    }
    else
    {
        printf("Queue is full\n");
    }
}

int dequeue(struct Queue *q)
{
    int a = -1;
    if (!isEmpty(q))
    {
        q->f++;
        a = q->arr[q->f];
    }
    else
    {
        printf("Queue is empty\n");
    }
    return a;
}

void traversal(struct Queue*q){
    int i = 0;
    while (i <= q->r)
    {
        printf("%d\t",q->arr[i]);
        i++;
    }
    printf("\n");
    
}
int main()
{
    struct Queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    // if (isEmpty(&q)){
    //     printf("Queue is empty\n");
    // }
    // int element = dequeue(&q);
    enqueue(&q, 10);
    enqueue(&q, 15);
    enqueue(&q, 50);
    enqueue(&q, 1);
    traversal(&q);
    int element = dequeue(&q);
    printf("%d\n",element);
    return 0;
}