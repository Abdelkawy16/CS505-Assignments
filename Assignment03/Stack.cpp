#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack() {
    array = create_new(array);
}

int* Stack::create_new(int* a)
{
    // allocate memory for new stack
    int* new_a = new int[length + BOUND];

    // copying the content of old stack
    for (int i = 0; i < length; i++)
        new_a[i] = a[i];

    // re-sizing the length
    length += BOUND;
    return new_a;
}

int* Stack::push(int element)
{
    // if stack is full, create new one
    if (top == length - 1)
        array = create_new(array);

    // insert element at top of the stack
    array[++top] = element;
    return array;
}

// function to pop an element
void Stack::pop()
{
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    top--;
}

void Stack::display()
{
    // if top is less than 0, that means stack is empty
    if (top < 0)
        cout << "Stack is Empty" << endl;
    else {
        cout << "Stack: ";
        for (int i = 0; i <= top; i++)
            cout << array[i] << " ";
        cout << endl;
    }
}
