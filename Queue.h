#pragma once
#include <iostream>
/* a queue contains positive integer values. */
typedef struct Queue
{
	int* elements;
	unsigned int maxSize;
	int count;

} Queue;

void run(Queue* q);

bool checkInput(char c);

char endRun();

//initlizes the queue based on user input size
void initQueue(Queue* q, unsigned int size);

//cleans the queue of values
void cleanQueue(Queue* q);

//Enters value into Queue
void enqueue(Queue* q, unsigned int newValue);

//function to print queue
void printQueue(Queue* q);

// return element in top of queue, or -1 if empty
int dequeue(Queue* q);

//returns if the queue is empty
bool isEmpty(Queue* s);

//returns if the queue is full
bool isFull(Queue* s);
