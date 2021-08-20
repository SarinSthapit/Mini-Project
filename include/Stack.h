/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Mini Project
*/

#pragma once
#include <iostream>
#include <vector>
#include "circularLinkedList.h"

/*
This is an interface class for the forcing the child class to implement all the following operations in it.
*/
template <typename T>
class Stack
{
public:
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void push(T data) = 0;
    virtual T pop() = 0;
    virtual T top() =0;
    virtual void display(char separator = ' ') = 0;
};


/*
This is a child class used to inherit the pure virtual functions from the "Stack" class and 
implement it by the help of the instance of the cicularly linked list i.e. list.
*/
template <typename T>
class circularLinkedListStack : public Stack <T>
{
public:
    circularLinkedListStack(int maxStackSize);
    bool isEmpty();
    bool isFull();

    void push(T data); //To add data in the stack.
    T pop(); //To remove data from stack.

    T top(); //To display element at the top of the stack.
    Node<T> * getTail(); //To return TAIL node of the stack.

    int get_n(); 

    void display(char separator = ' '); //
    void traverse(T index, char separator = ' ');

    void makeStack();

    int maxStackSize;
    int n;

private:
    circularLinkedList <T> list;
};


#include "../src/Stack.cpp"
