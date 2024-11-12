#include "Queue.h"

void run(Queue* q)
{
	unsigned int size = 0;
	unsigned int value = 0;
	char quit = 'n';
	char input = ' ';

	std::cout << "Enter size of queue: ";
	std::cin >> size;
	initQueue(q, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter value: ";
		std::cin >> value;
		enqueue(q, value);
	}

	while (quit == 'n')
	{
		printQueue(q);
		if (isFull(q) == false)
		{
			std::cout << "Would you like to enter value? (y/n): ";
			std::cin >> input;
			if (checkInput(input))
			{
				std::cout << "Enter value: ";
				std::cin >> value;
				enqueue(q, value);
			}
		}
		else
		{
			std::cout << "Queue is full!! Cannot add to it." << std::endl;
		}

		if (isEmpty(q) == false)
		{
			std::cout << "Would you like to take out value? (y/n): ";
			std::cin >> input;
			if (checkInput(input))
			{
				dequeue(q);
			}
		}
		else
		{
			std::cout << "Queue is empty cannot take out value.";
		}
		quit = endRun();
	}
}

bool checkInput(char c)
{
	if (c == 'n')
	{
		return false;
	}
	else
	{
		return true;
	}
}

char endRun()
{
	char c = ' ';
	std::cout << "End program? (y/n): ";
	std::cin >> c;
	return c;
}

void initQueue(Queue* q, unsigned int size)
{
	q->elements = new int[size];
	q->maxSize = size;
	q->count = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->elements;
}

void enqueue(Queue* q, unsigned int newValue)
{

	q->elements[q->count] = newValue;
	q->count++;
}

void printQueue(Queue* q)
{
	std::cout << "Your queue: ";
	for (int i = 0; i < q->count; i++)
	{
		std::cout << q->elements[i] << ", ";
	}
	std::cout << "\n";
}

int dequeue(Queue* q)
{
	int element = q->elements[0];
	for (int i = 0; i < q->count - 1; i++)
	{
		q->elements[i] = q->elements[i + 1];
	}
	q->count--;
	return element;
}

bool isEmpty(Queue* s)
{

	if (s->count == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool isFull(Queue* s)
{
	if (s->count == s->maxSize)
	{
		return true;
	}
	else
	{
		return false;
	}
}