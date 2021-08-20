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
#include "Colours.h"

void stackDemo(){
    sky_blue();
    std::cout << "STACK DEMO:\n" << std::endl; 
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
    
        std::cout << std::endl;
        s.push(0);
        s.makeStack();
        s.display(' ');

        s.push(1);
        s.makeStack();
        s.display(' ');

        s.push(2);
        s.makeStack();
        s.display(' ');

        s.push(3);
        s.makeStack();
        s.display(' ');

        s.push(4);
        s.makeStack();
        s.display(' ');
        std::cout << std::endl;

        std::cout << std::endl;

        red();
        s.pop();
        s.makeStack();
        s.display(' ');

        s.pop();
        s.makeStack();
        s.display(' ');

        s.pop();
        s.makeStack();
        s.display(' ');

        s.pop();
        s.makeStack();
        s.display(' ');

        green();
        s.push(5);
        s.makeStack();
        s.display(' ');

        s.push(6);
        s.makeStack();
        s.display(' ');

        blue();
        s.top();

        s.makeStack();
        s.display(' ');
        std::cout << std::endl;

        green();
        s.push(7);
        s.makeStack();
        s.display(' ');

        s.push(8);
        s.makeStack();
        s.display(' ');

        yellow();
        Node <int> *s2 = new Node <int>;
        s2 = s.getTail();
        std::cout << "Next of Tail: ";
        std::cout << s2 -> next -> info << std::endl;
        
        s.top();
        s.makeStack();
        s.display(' ');

        if(s.isEmpty()){
            std::cout << "\nThe Stack is empty." << std::endl;
        }
        else{
            std::cout << "\nThe Stack is not empty." << std::endl;
        }

        if(s.isFull()){
            std::cout << "\nThe Stack is full." << std::endl;
        }
        else{
            std::cout << "\nThe Stack is not full." << std::endl;
        }


        std::cout << "\nDISPLAYING THE STACK STARTING FROM TOP:\n" << std::endl;
        s.makeStack();
        s.display(' ');

        s.traverse(7, ',');
        reset();
        std::cout << std::endl;

}