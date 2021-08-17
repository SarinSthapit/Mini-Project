
#pragma once
#include <iostream>
#include "../include/Stack.h"
#include "../include/circularLinkedList.h"


template <typename T>
circularLinkedListStack<T>::circularLinkedListStack(int maxStackSize){
    this->maxStackSize = maxStackSize;
}

template <typename T>
bool circularLinkedListStack <T> :: isEmpty()
{
    return list.isEmpty();
}

template <typename T>
bool circularLinkedListStack <T> :: isFull()
{
    return list.isFull(maxStackSize);
}


template <typename T>
void circularLinkedListStack <T> :: push(T data)
{
    list.addToHead(data);
    std::cout << "Pushed: " << data << std::endl;
    makeStack();
    display(' ');
    std::cout << std::endl;
}


template <typename T>
T circularLinkedListStack <T>:: pop()
{
    T data;
    data = list.removeFromHead();
    std::cout << "Poped: " << data << std::endl;
    makeStack();
    display(' ');
    std::cout << std::endl;
    return data;
}

template <typename T>
T circularLinkedListStack <T>:: top()
{
    T top;
    top = list.getHead();
    std::cout << "TOP: " << top << std::endl;
    return top;
}


template <typename T>
Node<T> * circularLinkedListStack <T> :: getTail(){
    return list.getTail();
}

template <typename T>
void circularLinkedListStack <T>:: display(char separator){
    list.display(' ');
}



template <class T>
int circularLinkedListStack <T>::get_n(){
    return list.get_n();
}



template <class T>
void circularLinkedListStack <T>::makeStack(){
    list.makeStack(maxStackSize);
}



template <class T>
void circularLinkedListStack <T>::traverse(T index, char separator){
    list.traverse(index, ',');
    /* if(isEmpty()){
        std::cout << "The Stack is empty." << std::endl;
    }
    if(list.search(index)){
        int i=0;
        Node <T> *output = new Node <T>;
        output = list.retrieve(index, output); 
            
        while(i <= n){
            std::cout << output -> info << separator;
            output = output -> next; 
            i++;      
        }
    }
    else{
        std::cout << "The data entered does not exist in the stack." << std::endl;
    } */
}


