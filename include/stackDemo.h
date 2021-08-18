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
#include "Stack.h"

void stackDemo(){
    std::cout << "STACK DEMO: " << std::endl; 
        circularLinkedListStack <int> s(5);
        if(s.isEmpty()){
            std::cout << "The Stack is empty." << std::endl;
        }
        else{
            std::cout << "The Stack is not empty." << std::endl;
        }

        if(s.isFull()){
            std::cout << "The Stack is full." << std::endl;
        }
        else{
            std::cout << "The Stack is not full." << std::endl;
        }
    

        s.push(0);
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        //s.push(41);
        //s.display(' ');
        std::cout << std::endl;

        std::cout << std::endl;

        s.pop();
        s.pop();
        s.pop();
        s.pop();

        s.makeStack();
        s.display(' ');

        s.push(5);
        s.push(6);
        s.top();

        s.makeStack();
        s.display(' ');
        std::cout << std::endl;

        s.push(7);
        s.push(8);
        Node <int> *s2 = new Node <int>;
        s2 = s.getTail();
        std::cout << "Next of Tail: ";
        std::cout << s2 -> next -> info << std::endl;
        //s.pop();
        s.top();
        if(s.isEmpty()){
            std::cout << "The Stack is empty." << std::endl;
        }
        else{
            std::cout << "The Stack is not empty." << std::endl;
        }

        s.makeStack();
        s.display(' ');
        s.traverse(7, ',');
        std::cout << std::endl;

}