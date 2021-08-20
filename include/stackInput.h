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

void stackInput(){
    sky_blue();
    std::cout << "\n\n\n\nSTACK USER INPUT\n" << std::endl;
        int size = 0, c = 0;
        char a;
        
        
        
        purple();
        std::cout << "STACK OPERATIONS:" << std::endl;
        std::cout << "1. Push\n2. Pop\n3. Top\n4. is Empty?\n5. is Full?\n6. Display\n7. Traverse\n" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> c;
        std::cout << std::endl;

        std::cout << "Enter the size of Stack: ";
        std::cin >> size;

        circularLinkedListStack <char> s2(size);
        s2.push('w');
        s2.makeStack();
        s2.display(' ');

        s2.push('x');
        s2.makeStack();
        s2.display(' ');

        s2.push('y');
        s2.makeStack();
        s2.display(' ');

        s2.push('z');
        s2.makeStack();
        s2.display(' ');

        int j=0;
        char array[] = {'a', 'b', 'c', 'd', 'e'};

        switch (c)
        {
            case 1:
                for (int i = 0; i < size; i++){
                    if(!s2.isFull()){
                        green();
                        std::cout << "Enter the data (Press * to end 'push'): ";;
                        std::cin >> a;
                        if(a == '*'){
                            s2.makeStack();
                            s2.display(' ');
                            break;
                        }
                        else{
                            if(!s2.isFull()){
                                s2.push(a);
                                s2.makeStack();
                                s2.display(' ');
                            }  
                        }
                    }   
                }
                break;

            case 2:
                red();
                s2.pop();
                break;

            case 3:
                blue();
                s2.top();
                s2.makeStack();
                s2.display(' ');
                break;

            case 4: 
                reset();
                if(s2.isEmpty()){
                    std::cout << "The Stack is empty." << std::endl;
                }
                else{
                    std::cout << "The Stack is not empty." << std::endl;
                }
                break;

            case 5: 
                if(s2.isFull()){
                    std::cout << "The Stack is full." << std::endl;
                }
                else{
                    std::cout << "The Stack is not full." << std::endl;
                }
                break;

            case 6:
                yellow();
                s2.makeStack();
                s2.display(' ');
                break;

            case 7:
                char index;
                std::cout << "Enter the starting point: " << std::endl;
                std::cin >> index;
                s2.traverse(index, ',');
                break;

            default:
                reset();
                std::cout << "Invalid Choice!" << std::endl;
                break;
            }

    reset();
    std::cout << "\n\n\t\t\t\tTHE END\n\n" << std::endl;
}