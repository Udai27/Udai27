#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f, r;
    int *arr;
};

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct circularQueue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}

int dequeue(struct circularQueue *q)
{
    int val = -1;
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        val = q->arr[q->f];
    }
    return val;
}

void traversal(struct circularQueue* q){
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
    struct circularQueue q;
    q.size = 5;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 10);
    enqueue(&q, 17);
    enqueue(&q, 14);
    enqueue(&q, 5);
    // traversal(&q);
    dequeue(&q);
    dequeue(&q);
    int element  = dequeue(&q);
    printf("Element dequeued %d\n",element);
    traversal(&q);
    return 0;
}

//Traversal code is not working properly Needs improvement......