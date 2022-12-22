#pragma once
#define BOUND 4
template <class T>
class Stack
{
public:
	int top;
	int length;
	T* array;
	Stack();
	T* create_new(T* a);
	T* push(T item);
	void pop();
	bool stackIsEmpty();
	T stackTop();
	bool stackIsFull();
	int stackSize();
	void display();
};

