// Assignment02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"List.h"
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
    List list;
    list.insertEnd(4, 'D');
    list.insertEnd(2, 'B');
    list.insertEnd(6, 'F');
    list.insertEnd(1, 'A');
    list.insertEnd(5, 'E');
    list.insertEnd(3, 'C');
    list.printListKeys();
    list.rearrangeAscendingly();
    cout << "=========================\n";
    list.printListKeys();

    return 0;
}
