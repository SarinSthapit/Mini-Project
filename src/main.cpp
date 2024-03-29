/*
Submitted By:
Sarin Sthapit
Roll No.: 55
Group: Computer Engineering             Level: Undergraduate
       (Year II / Semester I)
Subject: COMP 202 (Data Structures and Algorithms)

Mini Project
*/

#include <iostream>
#include "Stack.h"
#include "stackDemo.h"
#include "stackInput.h"
#include "Colours.h"
#include "Colours.cpp"

//cd build
//g++ ../src/main.cpp -I ../include/
//./a.exe


//main.cpp
int main(){
    try{
        char response;

        //DEMO
        stackDemo();
        
        std::cout << "\nDo you want to use the USER INPUT Feature? (Y for Yes/N for No): ";
        std::cin >> response;

        if(response == 'Y'){
            //USER INPUT
            stackInput();
        }
        else if(response == 'N'){
            std::cout << "\n\n\t\t\t\tTHE END\n\n" << std::endl;
        }
        else{
            throw"\n\nInvalid Choice.\n\n";
        }
        
        
    }

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }
}