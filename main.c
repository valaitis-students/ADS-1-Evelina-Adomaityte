#include "queue.h"

int main()
{
    queue *q;
    q = (queue *) malloc(sizeof(struct queue));
    createQueue(q);

    printf("is queue full: %d\n", isFull(q));
    printf("is queue empty: %d\n", isEmpty(q));

    enqueue(q, 2);
    enqueue(q, 3);

    printf("is queue full: %d\n", isFull(q));
    printf("is queue empty: %d\n", isEmpty(q));
    printf("Before dequeue:\nSize: %d\n", q->size);
    if(isEmpty(q) != 1)
    {
        printf("First item: %d\n", firstItem(q));
    }

    dequeue(q);

    printf("After dequeue:\nSize: %d\n", q->size);
    if(isEmpty(q) != 1)
    {
        printf("First item: %d\n", firstItem(q));
    }

    enqueue(q, 66);

    printf("is queue empty: %d\n", isEmpty(q));

    dequeue(q);

    if(isEmpty(q) != 1)
    {
        printf("Dequeued item: %d\n", dequeue(q));
    }

    printf("is queue empty: %d\n", isEmpty(q));

    dequeue(q);

    destroyQueue(q);

    printf("is queue empty: %d\n", isEmpty(q));
    return 0;
}
