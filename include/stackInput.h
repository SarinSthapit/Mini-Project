#pragma once
#include <iostream>
#include "Stack.h"

void stackInput(){
    std::cout << "\n\n\n\nSTACK USER INPUT" << std::endl;
        int size = 0, c = 0;
        char a;
        std::cout << "Enter the size of Stack: ";
        std::cin >> size;
        circularLinkedListStack <char> s2(size);
        s2.push('w');
        s2.push('x');
        s2.push('y');
        s2.push('z');
        

        std::cout << "STACK OPERATIONS:" << std::endl;
        std::cout << "1. Push\n2. Pop\n3. Top\n4. is Empty?\n5. is Full?\n6. Display\n7. Traverse" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> c;

        int j=0;
        char array[] = {'a', 'b', 'c', 'd', 'e'};

        switch (c)
        {
        case 1:
            for (int i = 0; i < size; i++){
                if(!s2.isFull()){
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
                        }  
                    }
                }   
            }
            break;

        case 2:
            /* for(j = 0; j < size; j++){
                int ar = j % 5;
                //char b = array[ar];
                s2.push(array[ar]);
            } */
            s2.pop();
            break;

        case 3:
            
            s2.top();
            break;

        case 4: 
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
            s2.display(' ');
            break;

        case 7:
            char index;
            std::cout << "Enter the starting point: " << std::endl;
            std::cin >> index;
            s2.traverse(index, ',');
            break;

        default:
            std::cout << "Invalid Choice!" << std::endl;
            break;
        }

    std::cout << "\n\n\t\t\t\tTHE END\n\n" << std::endl;

}