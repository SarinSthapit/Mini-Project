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
#include "../include/Stack.h"
#include "../include/circularLinkedList.h"
#include "Colours.h"


//Constructor for the circularly linked list.
template <typename T>
circularLinkedListStack<T>::circularLinkedListStack(int maxStackSize){
    this->maxStackSize = maxStackSize;
}


//To check if the stack is empty or not.
template <typename T>
bool circularLinkedListStack <T> :: isEmpty()
{
    return list.isEmpty();
}


//To check if the stack is full or not.
template <typename T>
bool circularLinkedListStack <T> :: isFull()
{
    return list.isFull(maxStackSize);
}


//To add data at the top of the stack.
template <typename T>
void circularLinkedListStack <T> :: push(T data)
{
    if(list.isFull(maxStackSize)){
        throw"The Stack is full.";
    }
    else{
        green();
        list.addToHead(data);
        std::cout << "Pushing " << data << "...." << std::endl;
        //system("Color 0A");
        //makeStack();
        //display(' ');
        std::cout << std::endl;
    }
    
}


//To remove data from the top of the stack.
template <typename T>
T circularLinkedListStack <T>:: pop()
{   
    red();
    T data;
    data = list.removeFromHead();
    std::cout << "Poping " << data << "...." << std::endl;
    //system("Color 0B");
    
    std::cout << std::endl;
    return data;
}


//To display the data at the top of the stack.
template <typename T>
T circularLinkedListStack <T>:: top()
{
    blue();
    T top;
    top = list.getHead();
    std::cout << "TOP: " << top << std::endl;
    return top;
}


//To return the TAIL node of the stack.
template <typename T>
Node<T> * circularLinkedListStack <T> :: getTail(){
    return list.getTail();
}


//To display all the data of respective nodes present in the stack from HEAD to TAIL.
template <typename T>
void circularLinkedListStack <T>:: display(char separator){
    list.display(' ');
}


//To return the number of elements present in the stack.
template <class T>
int circularLinkedListStack <T>::get_n(){
    return list.get_n();
}


//To build a stack.
template <class T>
void circularLinkedListStack <T>::makeStack(){
    reset();
    list.makeStack(maxStackSize);
}


//To display all the data of respective nodes present in the stack from node whose data matches index to remaining others in order.
template <class T>
void circularLinkedListStack <T>::traverse(T index, char separator){
    list.traverse(index, ',');
}


