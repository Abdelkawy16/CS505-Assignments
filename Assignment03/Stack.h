#pragma once
#define BOUND 4
class Stack
{
public:
	int top;
	int length;
	int* array;
	Stack();
	int* create_new(int* a);
	int* push(int item);
	void pop();
	bool stackIsEmpty();
	int stackTop();
	bool stackIsFull();
	int stackSize();
	void display();
};

