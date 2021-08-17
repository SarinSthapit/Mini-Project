/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Lab Work 4
*/

#pragma once
#include <iostream>
#include "../include/circularLinkedList.h"

template <typename T>
circularLinkedList<T>::circularLinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
    n = -1;
}


template <typename T>
bool circularLinkedList<T>::isEmpty(){
    if(n == -1){
        return true;
    }
    else{
        return false;
    }
}

template <typename T>
bool circularLinkedList<T>::isFull(int size){
    if(n == (size - 1)){
        return true;
    }
    else{
       return false;
    }
}


template <typename T>
void circularLinkedList<T>::addToHead(T data){
    Node<T> *newNode = new Node<T>();
    newNode->info = data;
    /* if(this -> isFull()){
        throw"The Stack is already full.";
    } */

    if (n == -1)
    {
        HEAD = newNode;
        TAIL = HEAD;
        n = n + 1;
        /* std::cout << "Pushed: " << data << std::endl;
        makeStack();
        display(' ');
        std::cout << std::endl; */
    }
    else{
        newNode -> next = HEAD;
        TAIL -> next = newNode;
        HEAD = newNode;
        n = n + 1;
        
    }
}


template <typename T>
void circularLinkedList<T>::addToTail(T data){
    Node<T> *newNode = new Node<T>(data, NULL);
    if(HEAD == nullptr)
    {
        HEAD = newNode;
        TAIL = newNode;
    }

    else{
        TAIL->next = newNode;
        TAIL = TAIL->next;
        TAIL -> next = HEAD;
    }
}


template <typename T>
void circularLinkedList<T>::add(T data, Node<T> *predecessor){
    Node<T> *newNode = new Node<T>(data, predecessor->next);
    predecessor -> next = newNode;
    std::cout << "Added: " << data << std::endl;
}


template <typename T>
T circularLinkedList<T>::removeFromHead(){
    if(n == -1){
        throw"The Stack is empty.";
    }

    Node <T> *newNode = new Node <T>;
    newNode = HEAD;
    T data; 
    data = newNode ->info;

    if(HEAD == TAIL){
        HEAD = nullptr;
        TAIL = nullptr;
        n = n - 1;
        delete newNode;
        return data;
    }
    else{
        HEAD = newNode -> next;
        TAIL -> next = HEAD;
        delete newNode;
        n = n - 1;
        return data;
    }
}


template <typename T>
T circularLinkedList<T>:: removeFromTail(){
    if(!this->isEmpty()){
        Node<T> *NodeToDelete = new Node<T>;
        NodeToDelete = this -> TAIL;
        TAIL -> next = NULL;

        if(this->HEAD == this->TAIL){
            HEAD = NULL;
            TAIL = NULL;
        }

        else{
            Node<T> *secondlastNode = new Node<T>;
            secondlastNode = this -> HEAD;
            while(secondlastNode -> next != TAIL){
                secondlastNode = secondlastNode -> next;
            }
            TAIL = secondlastNode;
            secondlastNode -> next = HEAD;
        }
        std::cout << "Removed from tail: " << NodeToDelete -> info << std::endl;
        return NodeToDelete -> info;
        delete NodeToDelete;
    }

    else{
        std::cout << "The list is empty." << std::endl;
        return 0;
    }

}


template <typename T>
void circularLinkedList<T>:: remove(T data){
    Node<T> *current = new Node<T>;
    Node<T> * previous = new Node<T>;
    current = HEAD -> next;
    previous = HEAD;

    while(current != NULL){
        if(current -> info == data ){
            break;
        }

        else{
            previous = current;
            current = current -> next;
        }
    }

    if(current == NULL){
        std::cout << "Data not found." << std::endl;         
    }

    else{
        //std::cout << "Removed from the Linked List: " << current -> info << std::endl;
        previous -> next = current -> next;
        delete current; 
    }

} 


template <typename T>
Node<T> *circularLinkedList<T>::retrieve(T data, Node<T> *outputNodePointer){
    Node<T> *temp = new Node<T>;
    temp = HEAD;
    while(temp != NULL && temp -> info != data){
        temp = temp -> next;
    }

    if(temp == NULL){
        std::cout << data << " is not present." << std::endl;
    }

    else{
        outputNodePointer = temp;
        return outputNodePointer;
    }
    throw "Error!";
}


template <typename T>
bool circularLinkedList<T>::search(T data){
    if(!this -> isEmpty()){
        Node<T> *newNode = new Node<T>;
        newNode = HEAD;

        while(newNode -> next != NULL){
            if(newNode -> info == data){
                std::cout << "The searched data, " << data << " is present in the list." << std::endl;
                return true;
            }

            else{
                newNode = newNode -> next;
            }
        }
        std::cout << "The searched data, " << data << " is not present in the list." << std::endl;
        return false;
    }
    else{
        return false;
    }
}


template <typename T>
void circularLinkedList<T>::display(char separator){
    if(isEmpty()){
        std::cout << "The list is empty." << std::endl;
    }

    else{
        Node <T> *temp = HEAD;
        for(int i = 0; i<=n; i++){
            std :: cout << "\t\t\t| ";
            std :: cout << temp -> info << separator;
            std :: cout << "|" << std::endl;
            temp = temp -> next;
        }
        std::cout << "\t\t\t|||||\n";
        
    }
    std::cout << std::endl;
}



template <class T>
void circularLinkedList <T>::traverse(T index, char separator){
    if(isEmpty()){
        std::cout << "The Stack is empty." << std::endl;
    }
    if(search(index)){
        int i=0;
        Node <T> *output = new Node <T>;
        output = this->retrieve(index, output); 
        n = get_n();    
        while(i <= n){
            std::cout << output -> info << separator;
            output = output -> next; 
            i++;      
        }
    }
    else{
        std::cout << "The data entered does not exist in the stack." << std::endl;
    }
}



template <typename T>
T circularLinkedList<T>:: getHead(){
    return HEAD ->info;
}

template <typename T>
Node<T> *circularLinkedList<T>:: getTail(){
    return TAIL;
}

template <typename T>
int circularLinkedList<T> :: get_n(){
    return n;
}


template <class T>
void circularLinkedList <T>::makeStack(int size){
    n = get_n();
    for(int i = 1; i < (size - n); i++){
        std::cout << "\t\t\t|   |" << std::endl;
    }
}