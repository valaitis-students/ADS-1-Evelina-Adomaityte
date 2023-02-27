#include "queue.h"

int main()
{
    queue *q;
    q = (queue *) malloc(sizeof(struct queue));
    createQueue(q);

    printf("is queue full: %d\n", isFull(q));
    printf("is queue empty: %d\n", isEmpty(q));

    assert(isEmpty(q)); //will work if the queue is not empty

    enqueue(q, 2);
    enqueue(q, 3);

    printf("is queue full: %d\n", isFull(q));
    printf("is queue empty: %d\n", isEmpty(q));
    printf("Before dequeue:\nSize: %d\n", q->size);
    if(isEmpty(q) != 1)
    {
        printf("First item: %d\n", firstItem(q));
    }

    assert(firstItem(q) == 2); //will work if the first queue item is not two

    dequeue(q);

    printf("After dequeue:\nSize: %d\n", q->size);
    if(isEmpty(q) != 1)
    {
        printf("First item: %d\n", firstItem(q));
    }

    assert(firstItem(q) != 2); //will work if the first queue item is two
    assert(firstItem(q) == 3); //will work if the first queue item is not three

    enqueue(q, 66);

    assert(q->size == 2); //will work if queue size is not two
    assert(!isEmpty(q)); //will work if the queue is empty

    printf("is queue empty: %d\n", isEmpty(q));

    dequeue(q);

    if(isEmpty(q) != 1)
    {
        printf("Dequeued item: %d\n", dequeue(q));
    }

    printf("is queue empty: %d\n", isEmpty(q));

    dequeue(q);

    assert(isEmpty(q)); //will work if the queue is not empty

    destroyQueue(q);

    printf("is queue empty: %d\n", isEmpty(q));
    return 0;
}
