#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int Qdata_type;

struct node
{
    Qdata_type data;
    struct node *next;
};

typedef struct node node;

struct queue
{
    int size;
    node *head;
    node *tail;
};

typedef struct queue queue;

//functions return 1 if the condition is true
//functions return 0 if the condition is false

void createQueue(queue *q);
void destroyQueue(queue *q);

int isEmpty(queue *q);
int isFull(queue *q);

void enqueue(queue *q, Qdata_type value);
Qdata_type dequeue(queue *q);
Qdata_type firstItem(queue *q);

#endif // QUEUE_H_INCLUDED
