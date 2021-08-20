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

/*
Node is a class representing the node of a circularly linked list which consists of 
data to be stored along with the 'next'pointer used to store the address of the next node.
*/
template <typename T>
class Node {
public:
    T info;
    Node<T> *next;
    Node() : next(nullptr) {}
    Node(T info, Node *next) : info(info), next(next){}
};



/*This is the class to store data members and member functions of the cicularly Linked List.
This class is used for the implementation of the Stack data structure in this project.
*/
template <typename T>
class circularLinkedList{

public:
    circularLinkedList();
    
    bool isEmpty();
    bool isFull(int size);

    //To add nodes in a circularly linked list.
    void addToHead(T data);
    void addToTail(T data);
    void add(T data, Node<T> *predecessor);

    //To remove nodes from a circularly linked list.
    T removeFromHead();
    T removeFromTail();
    void remove(T data);

    //To search and return or just to search desired data in the list.
    Node<T> *retrieve(T data, Node<T> *outputNodePointer);
    bool search(T data);

    //To display the entire list from first one to be added to the last one to be added in the stack form.
    void display(char separator = ' '); 
    
    //To display the entire list from the desired node as there is no beginning or ending in a circularly linked list.
    void traverse(T index, char separator = ' '); 

    //To build a stack form.
    void makeStack(int size);
    //void visualize(int size);

    T getHead();
    Node<T> * getTail();
    int get_n();
    
    int n; //Number of elements present in the circular linked list.

private: 
    Node<T> *HEAD; //HEAD Node of the circularly linked list.
    Node<T> *TAIL; //TAIL Node of the circularly linked list.
};

#include "../src/circularLinkedList.cpp"