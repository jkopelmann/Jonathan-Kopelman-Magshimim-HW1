#pragma once
#include <iostream>

//void hello();
typedef struct stackNode
{
    int val;
    stackNode* next;
} stackNode;

int popFromFront(stackNode* head);
int popFromBack(stackNode* head);
void addNodeToFront(stackNode* s, unsigned int element);
void addNodeToBack(stackNode* s, unsigned int element);

void printstackNode(stackNode* head);
//void cleanStack(Stack* head);
//bool isEmpty(Stack* s);
// a positive-integer value stack, with no size limit 
/*typedef struct Stack
{
    int val;
    Stack* next;
} Stack;



void run();
void hello()
void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is empty


void initStack(Stack* s);
void cleanStack(Stack* s);



bool isEmpty(Stack* s);
bool isFull(Stack* s);*/
















/*
typedef struct MyStack
{
    int val;
    struct MyStack* next;
} MyStack;



void executeStackOperations();

bool checkInput(char c);

MyStack* createNode();

void insertNodeAtStart(MyStack** head);

void cleanStack(MyStack* head);*/