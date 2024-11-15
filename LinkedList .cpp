#include "LinkedList .h"
/*function to pop value from the front of linked list
* input:stackNode* head
* output:int poppedValue
*/
int popFromFront(stackNode* head)
{
	if (head == nullptr )
	{
		return -1; 
	}

	int poppedValue = head->val;
	stackNode* temp = head;
	head = head->next;

	delete temp;

	return poppedValue;
}
/*function to pop value out of back of linked list
* input:stackNode* head
* output: int poppedValue
*/
int popFromBack(stackNode* head)
{
	int poppedValue = 0;
	stackNode* cur = nullptr;

	if (head == nullptr)
	{
		return -1;
	}

	if (head->next == nullptr)
	{
		poppedValue = head->val; 
		delete head;         
		head = nullptr;      
		return poppedValue;
	}

	cur = head;
	while (cur->next->next != nullptr)
	{
		cur = cur->next;
	}

	poppedValue = cur->next->val;

	delete cur->next;
	cur->next = nullptr; 

	return poppedValue; 
	
}

/*function to add value to front of linked list
* input:stackNode* head, unsigned int element
* output:none
*/
void addNodeToFront(stackNode* head, unsigned int element)
{
	if (head != nullptr)
	{
		stackNode* newNode = new stackNode;
		newNode->val = element;      
		newNode->next = head;        
		head = newNode;              
	}
	else
	{
		head = new stackNode;
		head->val = element;
		head->next = nullptr;
	}
}
/*function to add value to back of linked list
* input:stackNode* head, unsigned int element
* output:none
*/
void addNodeToBack(stackNode* head, unsigned int element)
{

	// Create a new node
	stackNode* newNode = new stackNode;
	stackNode* cur = nullptr;
	newNode->val = element;
	newNode->next = nullptr;
	// If the list is empty, the new node becomes the head
	if (head == nullptr)
	{
		head = newNode;
		return;
	}
	cur = head;
	while (cur->next != nullptr)
	{
		cur = cur->next;
	}
	// Add the new node to the end of the list
	cur->next = newNode;
}
/*function to print stack
* input:stackNode* head
* output:none
*/
void printList(stackNode* head)
{
	stackNode* cur = nullptr;
	cur = head;
	std::cout << "Your Stack: ";
	while (cur != nullptr)
	{
		std::cout << cur->val << ", "; 
		cur = cur->next; 
	}
	std::cout << std::endl;
	delete cur;
}
