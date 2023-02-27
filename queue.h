#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int Qdata_type;

typedef struct node
{
    Qdata_type data;
    struct node *next;
}node;

typedef struct queue
{
    int size;
    node *head;
    node *tail;
}queue;

void createQueue(queue *q);
//this function creates a queue
void destroyQueue(queue *q);
//this function destroys the queue

int isEmpty(queue *q);
//this function checks if the queue is empty, if it is, it returns 1, else it returns 0
int isFull(queue *q);
//this function checks if the queue is  full, if it is, it returns 1, else it returns 0

void enqueue(queue *q, Qdata_type value);
//this function adds an element into the back of the queue
Qdata_type dequeue(queue *q);
//this function removes the first element of the queue, if the queue is empty, it prints out a message and returns 0
Qdata_type firstItem(queue *q);
//this function shows the first element of the queue without removing it, if the queue is empty, it prints out a message and returns 0

#endif // QUEUE_H_INCLUDED
