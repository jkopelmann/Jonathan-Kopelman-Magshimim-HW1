#include "Stack.h"
#include "LinkedList .h"

/*function to pop value from stack linked list and return its value
* using function from "linkedlist.h"
* input:Stack* s
* output: int poppedValue
*/
int pop(Stack* s)
{
	int poppedValue = 0;
	if (s == nullptr || isEmpty(s))
	{
		std::cerr << "Stack is empty" << std::endl;
		return -1;
	}
	//if only one node pop it
	if (s->data->next == nullptr)
	{
		poppedValue = s->data->val;
		delete s->data; 
		s->data = nullptr;
		return poppedValue;
	}
	poppedValue = popFromBack(s->data);
	return poppedValue;
}

/*function to push value into stacked linked list
* using function drom "linkedlist.h"
* input:Stack* s, unsigned int element
* output:none
*/
void push(Stack* s, unsigned int element)
{
	//if stack is empty create new node
	if (isEmpty(s))
	{
		s->data = new stackNode;
		s->data->val = element;
		s->data->next = nullptr;
	}
	else
	{
		addNodeToBack( s->data, element);
	}
}
/*function to initilize stack
* input:Stack* s
* output:none
*/
void initStack(Stack* s)
{
	s->data = nullptr;
}
/*function to clean stack linked list
* input:Stack* s
* output:none
*/
void cleanStack(Stack* s)
{
	stackNode* curr = s->data;
	if (s == nullptr || isEmpty(s))
	{
		return;
	}

	curr = s->data;
	while (curr != nullptr)
	{
		stackNode* nextNode = curr->next;
		delete curr;                  
		curr = nextNode;              
	}

	s->data = nullptr; 
}

/*function return if stack is empty
* input:Stack* s
* output:false or true
*/
bool isEmpty(Stack* s)
{
	return s->data == nullptr;
}
/*function to return if stack is full.stack cannot be full
* because it dosnt have a size so function rturns false
* input:Stack* s
* output:none
*/
bool isFull(Stack* s)
{
	return false;
}
