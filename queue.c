#include "queue.h"

queue *createQueue()
{
    queue *q = (queue *) malloc(sizeof(queue));
    q->size = 0;
    q->head = NULL;
    q->tail = NULL;
    return q;
}

void destroyQueue(queue *q)
{
    while(q->head != NULL)
    {
        node *item = q->head;
        q->head = q->head->next;
        free(item);
    }
    q->head = q->tail = NULL;
    q->size = 0;
    free(q);
}

int isEmpty(queue *q)
{
    if(q->tail == NULL)
        return 1;
    else
        return 0;
}

int isFull(queue *q)
{
    if (malloc(sizeof(q)) == NULL)
        return 1;
    else
        return 0;
}

void enqueue(queue *q, Qdata_type value)
{
    node *item;
    item = (node*) malloc(sizeof(node));
    if(isFull(q) == 0 && item != NULL)
    {
        item->data = value;
        item->next = NULL;
        if(isEmpty(q) == 0)
        {
            q->tail->next = item;
            q->tail = item;
        }
        else
        {
            q->head = item;
            q->tail = item;
        }
        ++(q->size);
    }
    else
    {
        return;
    }
}

Qdata_type dequeue(queue *q)
{
    if(isEmpty(q) == 0)
    {
        node *item;
        Qdata_type value = q->head->data;

        item = q->head;
        if(q->head == q->tail)
        {
            q->head = NULL;
            q->tail = NULL;
        }
        else
            q->head = q->head->next;

        --(q->size);
        free(item);
        return value;
    }
    else
    {
        return 0;
    }
}

Qdata_type firstItem(queue *q)
{
    if(isEmpty(q) == 1)
    {
        return 0;
    }
    else
    {
        return (q->head->data);
    }
}

