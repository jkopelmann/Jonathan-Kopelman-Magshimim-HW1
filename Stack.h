#pragma once
#include <iostream>
#include "LinkedList .h"

typedef struct Stack
{
	stackNode* data;

} Stack;
 //a positive-integer value stack, with no size limit 


void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is empty


void initStack(Stack* s);
void cleanStack(Stack* s);



bool isEmpty(Stack* s);
bool isFull(Stack* s);
