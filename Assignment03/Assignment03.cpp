// Assignment03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Stack.h"
#include "Stack.cpp"
#include <iostream>

int main()
{
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    cout << "Stack size: " << stack.stackSize();
    stack.push(3);
    stack.push(4);
    cout << "\nStack is full: " << stack.stackIsFull();
    stack.push(5);
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    cout << "\nStack is empty: " << stack.stackIsEmpty();
}
