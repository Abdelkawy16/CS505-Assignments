#include <iostream>
#include "Stack.h"
using namespace std;

template <class T>
Stack<T>::Stack() {
    array = create_new(array);
}

template <class T>
T* Stack<T>::create_new(T* a)
{
    // allocate memory for new stack
    T* new_a = new T[Stack::length + BOUND];

    // copying the content of old stack
    for (int i = 0; i < length; i++)
        new_a[i] = a[i];

    // re-sizing the length
    length += BOUND;
    return new_a;
}

template <class T>
T* Stack<T>::push(T element)
{
    // if stack is full, create new one
    if (top == length)
        array = create_new(array);

    // insert element at top of the stack
    array[++top] = element;
    return array;
}

// function to pop an element
template <class T>
void Stack<T>::pop()
{
    if (top == 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    top--;
}

template <class T>
void Stack<T>::display()
{
    // if top is less than 0, that means stack is empty
    if (top == 0)
        cout << "\nStack is Empty" << endl;
    else {
        cout << "\nStack: ";
        for (int i = 1; i <= top; i++)
            cout << array[i] << " ";
        cout << endl;
    }
}

template <class T>
int Stack<T>::stackSize() {
    return top;
}

template <class T>
bool Stack<T>::stackIsEmpty() {
    return top == 0;
}

template <class T>
T Stack<T>::stackTop() {
    return array[0];
}

template <class T>
bool Stack<T>::stackIsFull() {
    return top == length;
}
